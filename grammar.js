/**
 * @file Clue grammar for tree-sitter
 * @author MarkosTh09
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const PREC = {
  COMMA: -1,
  FUNCTION: 1,
  DEFAULT: 1,
  PRIORITY: 2,

  OR: 3, // => or
  AND: 4, // => and
  COMPARE: 5, // => < <= == ~= >= >
  BIT_OR: 6, // => |
  BIT_NOT: 7, // => ~
  BIT_AND: 8, // => &
  SHIFT: 9, // => << >>
  CONCAT: 10, // => ..
  PLUS: 11, // => + -
  MULTI: 12, // => * /             // %
  UNARY: 13, // => not # - ~
  POWER: 14, // => ^

  STATEMENT: 15,
  PROGRAM: 16,
};

module.exports = grammar({
  name: "clue",
  extras: ($) => [/\n/, /\s/, $.comment],

  rules: {
    // TODO: add the clue specific grammar rules
    program: ($) =>
      prec(
        PREC.PROGRAM,
        seq(
          optional($.shebang),
          any_amount_of(
            $._statement,
          ),
          optional(alias($.return_statement, $.module_return_statement)),
          optional("\0"),
        ),
      ),
    identifier: (_) => /[a-zA-Z_][a-zA-Z0-9_]*/,
    left_paren: (_) => "(",
    right_paren: (_) => ")",

    left_bracket: (_) => "[",
    right_bracket: (_) => "]",

    _comma: (_) => ",",
    string: ($) =>
      choice(
        seq(
          field("start", alias('"', "string_start")),
          field("content", alias(/[^"]*/, "string_content")),
          field("end", alias('"', "string_end")),
        ),
        seq(
          field("start", alias("'", "string_start")),
          field("content", alias(/[^']*/, "string_content")),
          field("end", alias("'", "string_end")),
        ),
        seq(
          field("start", alias("`", "string_start")),
          field("content", alias(/.*?/, "string_content")),
          field("end", alias("`", "string_end")),
        )
      ),
    _statement: ($) =>
      prec.right(
        PREC.STATEMENT,
        seq(
          choice(
            // $.variable_declaration,
            // $.function_call,
            // $.do_statement,
            // $.while_statement,
            // $.repeat_statement,
            // $.if_statement,
            // $.for_statement,
            // $.function_statement,
            $.comment
          ),
          optional(";"),
        ),
      ),
    shebang: ($) => /#![^\n]*/,
    _last_statement: ($) => choice($.return_statement, $.break_statement),
    _chunk: ($) =>
      choice(
        seq(one_or_more($._statement), optional($._last_statement)),
        $._last_statement,
      ),
    _block: ($) => $._chunk,
    _expression: ($) =>
      prec.left(
        choice(
          $.nil,
          $.boolean,
          $.number,
          $.string,
          $.ellipsis,
          $.function,
          // $.prefix_exp,
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
        seq(optional("0"), /[1-9]/, optional(decimal_digits)),
      );

      const hex_digits = /[a-fA-F0-9]+/;
      const hex_exponent_part = seq(choice("p", "P"), signed_integer);

      const decimal_literal = choice(
        seq(
          decimal_integer_literal,
          ".",
          optional(decimal_digits),
          optional(decimal_exponent_part),
        ),
        seq(".", decimal_digits, optional(decimal_exponent_part)),
        seq(decimal_integer_literal, optional(decimal_exponent_part)),
      );

      const hex_literal = seq(
        choice("0x", "0X"),
        hex_digits,
        optional(seq(".", hex_digits)),
        optional(hex_exponent_part),
      );

      return token(choice(decimal_literal, hex_literal));
    },
    ellipsis: (_) => "...",

    function_start: (_) => "fn",
    function_name: ($) => $.identifier,
    function: ($) => seq($.function_start, $.function_impl),
    function_impl: ($) =>
      seq(
        alias($.left_paren, $.function_body_paren),
        optional($.parameter_list),
        alias($.right_paren, $.function_body_paren),
        alias("{", $.function_start),
        alias(optional($._block), $.function_body),
        alias("}", $.function_end)
      ),
    parameter_list: ($) =>
      choice(
        seq(
          prec.left(PREC.COMMA, list_of($.identifier, /,\s*/, false)),
          optional(seq(/,\s*/, $.ellipsis))
        ),
        $.ellipsis
      ),

    method_name: ($) =>
      seq(
        list_of($.identifier, alias(".", $.table_dot), false),
        optional(seq(alias("::", $.table_colon), $.identifier)),
      ),
    return_statement: ($) => prec.right(PREC.PRIORITY, seq("return", optional(list_of($._expression, ",")))),
    break_statement: (_) => "break",
    comment: ($) => choice(
      seq(
        field("start", alias("//", "comment_start")),
        field("content", alias(/[^\r\n]*/, "comment_content"))
      ),
      seq(
        field("start", alias("/*", "comment_start")),
        field("content", alias(/[^*]+/, "comment_content")),
        field("end", alias("*/", "comment_end"))
      )
    )
  },
});

function any_amount_of() {
  return repeat(seq(...arguments));
}

function one_or_more() {
  return repeat1(seq(...arguments));
}

function list_of(match, sep, trailing) {
  return trailing
    ? seq(match, any_amount_of(sep, match), optional(sep))
    : seq(match, any_amount_of(sep, match));
}
