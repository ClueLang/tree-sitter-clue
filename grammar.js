/**
 * @file Clue grammar for tree-sitter
 * @author MarkosTh09
 * @license MIT
 *
 * Based on tj's Lua grammar
 * @see https://github.com/tjdevries/tree-sitter-lua
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const PREC = {
  COMMA: -1,
  FUNCTION: 1,
  DEFAULT: 1,
  PRIORITY: 2,

  OR: 3, // => ||
  AND: 4, // => &&
  COMPARE: 5, // => < <= == ~= >= >
  BIT_OR: 6, // => |
  BIT_NOT: 7, // => ~
  BIT_AND: 8, // => &
  SHIFT: 9, // => << >>
  CONCAT: 10, // => ..
  PLUS: 11, // => + -
  MULTI: 12, // => * /             // %
  UNARY: 13, // => ! # -
  POWER: 14, // => ^

  STATEMENT: 15,
  PROGRAM: 16,
};

module.exports = grammar({
  name: "clue",
  extras: ($) => [/\n/, /\s/, $.comment],
  inline: ($) => [
    $._expression,
    // $._field_expression,
    // $.field_separator,
    $.prefix_exp,
    $.function_impl,
  ],
  // conflicts: ($) => [
  //   [$._prefix_exp, $.variable_declarator]
  // ],
  word: ($) => $.identifier,
  rules: {
    // TODO: add the clue specific grammar rules
    program: ($) =>
      prec(
        PREC.PROGRAM,
        seq(
          optional($.shebang),
          any_amount_of($._statement),
          optional(alias($.return_statement, $.module_return_statement)),
          optional("\0")
        )
      ),
    identifier: (_) => /[a-zA-Z_][a-zA-Z0-9_]*/,
    _prefix_exp: ($) =>
      choice(
        $._var,
        // $.function_call,
        seq($.left_paren, $._expression, $.right_paren)
      ),
    prefix_exp: ($) => $._prefix_exp,
    _var: ($) => prec(
      PREC.PRIORITY,
      choice(
        $.identifier,
        seq($.prefix_exp, "[", $._expression, "]"),
        seq($.prefix_exp, ".", $.identifier)
      )
    ),
    variable_declarator: ($) => $._var,

    left_paren: (_) => "(",
    right_paren: (_) => ")",

    left_bracket: (_) => "[",
    right_bracket: (_) => "]",

    _comma: (_) => ",",
    local: (_) => "local",
    global: (_) => "global",
    string: ($) =>
      choice(quoted_string("'"), quoted_string('"'), quoted_string("`")),
    _statement: ($) =>
      prec.right(
        PREC.STATEMENT,
        seq(
          choice(
            // $.variable_declaration,
            $.variable_assignment,
            // $.function_call,
            // $.do_statement,
            // $.while_statement,
            // $.repeat_statement,
            // $.if_statement,
            // $.for_statement,
            $.function_statement,
            $.comment
          ),
          optional(";")
        )
      ),
    shebang: (_) => /#![^\n]*/,
    _last_statement: ($) =>
      seq(choice($.return_statement, $.break_statement), ";"),
    _chunk: ($) =>
      choice(
        seq(one_or_more($._statement), optional($._last_statement)),
        $._last_statement
      ),
    _block: ($) => seq("{", optional($._chunk), "}"),
    _expression: ($) =>
      prec.left(
        choice(
          $.identifier,
          $.nil,
          $.boolean,
          $.number,
          $.string,
          $.ellipsis,
          $.function,
          $.prefix_exp,
          // $.tableconstructor,
          // $.binary_operation,
          // $.unary_operation
        )
      ),

    nil: (_) => "nil",
    boolean: (_) => choice("true", "false"),
    number: ($) => {
      const decimal_digits = /[0-9]+/;
      const signed_integer = seq(optional(choice("-", "+")), decimal_digits);
      const decimal_exponent_part = seq(choice("e", "E"), signed_integer);

      const decimal_integer_literal = choice(
        "0",
        seq(optional("0"), /[1-9]/, optional(decimal_digits))
      );

      const hex_digits = /[a-fA-F0-9]+/;
      const hex_exponent_part = seq(choice("p", "P"), signed_integer);

      const decimal_literal = choice(
        seq(
          decimal_integer_literal,
          ".",
          optional(decimal_digits),
          optional(decimal_exponent_part)
        ),
        seq(".", decimal_digits, optional(decimal_exponent_part)),
        seq(decimal_integer_literal, optional(decimal_exponent_part))
      );

      const hex_literal = seq(
        choice("0x", "0X"),
        hex_digits,
        optional(seq(".", hex_digits)),
        optional(hex_exponent_part)
      );

      return token(choice(decimal_literal, hex_literal));
    },
    ellipsis: (_) => "...",
    variable_assignment: ($) =>
      seq(
        list_of(field("name", $.variable_declarator), ",", false),
        seq("=", list_of(field("value", $._expression), ",", false))
      ),
    function_start: (_) => "fn",
    function: ($) => seq($.function_start, $.function_impl),
    function_impl: ($) =>
      seq(
        alias($.left_paren, $.function_body_paren),
        optional($.parameter_list),
        alias($.right_paren, $.function_body_paren),
        alias($._block, $.function_body)
      ),
    parameter_list: ($) =>
      choice(
        seq(
          prec.left(PREC.COMMA, list_of($.identifier, /,\s*/, false)),
          optional(seq(/,\s*/, $.ellipsis))
        ),
        $.ellipsis
      ),
    function_statement: ($) =>
      seq(
        choice($.local, $.global),
        $.function_start,
        field("name", $.identifier),
        $.function_impl
      ),
    method_name: ($) =>
      seq(
        list_of($.identifier, alias(".", $.table_dot), false),
        optional(seq(alias("::", $.table_colon), $.identifier))
      ),
    return_statement: ($) =>
      prec.right(
        PREC.PRIORITY,
        seq("return", optional(list_of($._expression, ",")))
      ),
    break_statement: (_) => "break",
    comment: ($) =>
      choice(
        seq(
          field("start", alias("//", "comment_start")),
          field("content", alias(/[^\r\n]*/, "comment_content"))
        ),
        seq(
          field("start", alias("/*", "comment_start")),
          field(
            "content",
            alias(/[^*]*\*+([^/*][^*]*\*+)*/, "comment_content")
          ),
          field("end", alias("/", "comment_end"))
        )
      ),
  },
});

function any_amount_of(...args) {
  return repeat(seq(...args));
}

function one_or_more(...args) {
  return repeat1(seq(...args));
}

function list_of(match, sep, trailing) {
  return trailing
    ? seq(match, any_amount_of(sep, match), optional(sep))
    : seq(match, any_amount_of(sep, match));
}

function quoted_string(quote) {
  return seq(
    field("start", alias(quote, "string_start")),
    field(
      "content",
      alias(
        repeat(choice(new RegExp(`[^${quote}\\\\]`), /\\./)),
        "string_content"
      )
    ),
    field("end", alias(quote, "string_end"))
  );
}
