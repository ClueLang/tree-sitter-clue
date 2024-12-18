#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 65
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 46
#define ALIAS_COUNT 2
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 7

enum ts_symbol_identifiers {
  anon_sym_NULL = 1,
  sym_identifier = 2,
  sym_left_paren = 3,
  sym_right_paren = 4,
  anon_sym_DQUOTE = 5,
  aux_sym_string_token1 = 6,
  anon_sym_SQUOTE = 7,
  aux_sym_string_token2 = 8,
  anon_sym_BQUOTE = 9,
  aux_sym_string_token3 = 10,
  anon_sym_SEMI = 11,
  sym_shebang = 12,
  sym_nil = 13,
  anon_sym_true = 14,
  anon_sym_false = 15,
  sym_number = 16,
  sym_ellipsis = 17,
  sym_function_start = 18,
  anon_sym_LBRACE = 19,
  anon_sym_RBRACE = 20,
  aux_sym_parameter_list_token1 = 21,
  anon_sym_return = 22,
  anon_sym_COMMA = 23,
  sym_break_statement = 24,
  anon_sym_SLASH_SLASH = 25,
  aux_sym_comment_token1 = 26,
  anon_sym_SLASH_STAR = 27,
  aux_sym_comment_token2 = 28,
  anon_sym_STAR_SLASH = 29,
  sym_program = 30,
  sym_string = 31,
  sym__statement = 32,
  sym__last_statement = 33,
  sym__chunk = 34,
  sym__block = 35,
  sym__expression = 36,
  sym_boolean = 37,
  sym_function = 38,
  sym_function_impl = 39,
  sym_parameter_list = 40,
  sym_return_statement = 41,
  sym_comment = 42,
  aux_sym_program_repeat1 = 43,
  aux_sym_parameter_list_repeat1 = 44,
  aux_sym_return_statement_repeat1 = 45,
  alias_sym_module_return_statement = 46,
  anon_alias_sym_string_end = 47,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_NULL] = "\0",
  [sym_identifier] = "identifier",
  [sym_left_paren] = "function_body_paren",
  [sym_right_paren] = "function_body_paren",
  [anon_sym_DQUOTE] = "string_start",
  [aux_sym_string_token1] = "string_content",
  [anon_sym_SQUOTE] = "string_start",
  [aux_sym_string_token2] = "string_content",
  [anon_sym_BQUOTE] = "string_start",
  [aux_sym_string_token3] = "string_content",
  [anon_sym_SEMI] = ";",
  [sym_shebang] = "shebang",
  [sym_nil] = "nil",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_number] = "number",
  [sym_ellipsis] = "ellipsis",
  [sym_function_start] = "function_start",
  [anon_sym_LBRACE] = "function_start",
  [anon_sym_RBRACE] = "function_end",
  [aux_sym_parameter_list_token1] = "parameter_list_token1",
  [anon_sym_return] = "return",
  [anon_sym_COMMA] = ",",
  [sym_break_statement] = "break_statement",
  [anon_sym_SLASH_SLASH] = "comment_start",
  [aux_sym_comment_token1] = "comment_content",
  [anon_sym_SLASH_STAR] = "comment_start",
  [aux_sym_comment_token2] = "comment_content",
  [anon_sym_STAR_SLASH] = "comment_end",
  [sym_program] = "program",
  [sym_string] = "string",
  [sym__statement] = "_statement",
  [sym__last_statement] = "_last_statement",
  [sym__chunk] = "_chunk",
  [sym__block] = "function_body",
  [sym__expression] = "_expression",
  [sym_boolean] = "boolean",
  [sym_function] = "function",
  [sym_function_impl] = "function_impl",
  [sym_parameter_list] = "parameter_list",
  [sym_return_statement] = "return_statement",
  [sym_comment] = "comment",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_return_statement_repeat1] = "return_statement_repeat1",
  [alias_sym_module_return_statement] = "module_return_statement",
  [anon_alias_sym_string_end] = "string_end",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_NULL] = anon_sym_NULL,
  [sym_identifier] = sym_identifier,
  [sym_left_paren] = sym_left_paren,
  [sym_right_paren] = sym_left_paren,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_SQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token2] = aux_sym_string_token1,
  [anon_sym_BQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token3] = aux_sym_string_token1,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_shebang] = sym_shebang,
  [sym_nil] = sym_nil,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_number] = sym_number,
  [sym_ellipsis] = sym_ellipsis,
  [sym_function_start] = sym_function_start,
  [anon_sym_LBRACE] = sym_function_start,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym_parameter_list_token1] = aux_sym_parameter_list_token1,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_break_statement] = sym_break_statement,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_SLASH,
  [aux_sym_comment_token2] = aux_sym_comment_token1,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
  [sym_program] = sym_program,
  [sym_string] = sym_string,
  [sym__statement] = sym__statement,
  [sym__last_statement] = sym__last_statement,
  [sym__chunk] = sym__chunk,
  [sym__block] = sym__block,
  [sym__expression] = sym__expression,
  [sym_boolean] = sym_boolean,
  [sym_function] = sym_function,
  [sym_function_impl] = sym_function_impl,
  [sym_parameter_list] = sym_parameter_list,
  [sym_return_statement] = sym_return_statement,
  [sym_comment] = sym_comment,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_return_statement_repeat1] = aux_sym_return_statement_repeat1,
  [alias_sym_module_return_statement] = alias_sym_module_return_statement,
  [anon_alias_sym_string_end] = anon_alias_sym_string_end,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_NULL] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_left_paren] = {
    .visible = true,
    .named = true,
  },
  [sym_right_paren] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_shebang] = {
    .visible = true,
    .named = true,
  },
  [sym_nil] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_ellipsis] = {
    .visible = true,
    .named = true,
  },
  [sym_function_start] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_parameter_list_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_break_statement] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__last_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__chunk] = {
    .visible = false,
    .named = true,
  },
  [sym__block] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_function_impl] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_return_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_module_return_statement] = {
    .visible = true,
    .named = true,
  },
  [anon_alias_sym_string_end] = {
    .visible = true,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_content = 1,
  field_end = 2,
  field_start = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_content] = "content",
  [field_end] = "end",
  [field_start] = "start",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 2},
  [4] = {.index = 2, .length = 3},
  [6] = {.index = 2, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_content, 1},
    {field_start, 0},
  [2] =
    {field_content, 1},
    {field_end, 2},
    {field_start, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_module_return_statement,
  },
  [3] = {
    [1] = alias_sym_module_return_statement,
  },
  [5] = {
    [2] = alias_sym_module_return_statement,
  },
  [6] = {
    [2] = anon_alias_sym_string_end,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_return_statement, 2,
    sym_return_statement,
    alias_sym_module_return_statement,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(31);
      ADVANCE_MAP(
        0, 32,
        '"', 36,
        '#', 1,
        '\'', 40,
        '(', 34,
        ')', 35,
        '*', 7,
        ',', 65,
        '.', 5,
        '/', 3,
        '0', 53,
        ';', 48,
        '`', 44,
        'b', 22,
        'f', 9,
        'n', 15,
        'r', 11,
        't', 20,
        '{', 61,
        '}', 62,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(49);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == ',') ADVANCE(63);
      if (lookahead == '.') ADVANCE(4);
      if (lookahead == '/') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(76);
      if (lookahead == '/') ADVANCE(67);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(59);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(84);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(81);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(83);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == 'k') ADVANCE(66);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 20:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 23:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 26:
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 27:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_NULL);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_left_paren);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_right_paren);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(79);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(39);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(37);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '*') ADVANCE(80);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(43);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '/') ADVANCE(41);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '*') ADVANCE(78);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '/') ADVANCE(45);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_shebang);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(29);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_ellipsis);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_function_start);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_parameter_list_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_break_statement);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(75);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(39);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(43);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(83);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '*') ADVANCE(77);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(75);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '/') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(75);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(39);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(43);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(76);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead != 0) ADVANCE(83);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '/') ADVANCE(81);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 46},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 74},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 38},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 42},
  [63] = {(TSStateId)(-1)},
  [64] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_NULL] = ACTIONS(1),
    [sym_left_paren] = ACTIONS(1),
    [sym_right_paren] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_shebang] = ACTIONS(1),
    [sym_nil] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_ellipsis] = ACTIONS(1),
    [sym_function_start] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_break_statement] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_STAR_SLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(48),
    [sym__statement] = STATE(12),
    [sym_return_statement] = STATE(31),
    [sym_comment] = STATE(1),
    [aux_sym_program_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_NULL] = ACTIONS(9),
    [sym_shebang] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(13),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_BQUOTE,
    ACTIONS(27), 1,
      sym_function_start,
    STATE(2), 1,
      sym_comment,
    STATE(11), 1,
      sym__expression,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(15), 3,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_RBRACE,
    ACTIONS(23), 3,
      sym_nil,
      sym_number,
      sym_ellipsis,
    STATE(17), 3,
      sym_string,
      sym_boolean,
      sym_function,
  [44] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_BQUOTE,
    ACTIONS(27), 1,
      sym_function_start,
    STATE(3), 1,
      sym_comment,
    STATE(20), 1,
      sym__expression,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 3,
      sym_nil,
      sym_number,
      sym_ellipsis,
    STATE(17), 3,
      sym_string,
      sym_boolean,
      sym_function,
  [83] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(13), 1,
      anon_sym_return,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    ACTIONS(31), 1,
      sym_break_statement,
    STATE(4), 1,
      sym_comment,
    STATE(7), 1,
      aux_sym_program_repeat1,
    STATE(12), 1,
      sym__statement,
    STATE(51), 1,
      sym_return_statement,
    STATE(52), 1,
      sym__last_statement,
    STATE(53), 1,
      sym__chunk,
    STATE(61), 1,
      sym__block,
  [120] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(13), 1,
      anon_sym_return,
    ACTIONS(31), 1,
      sym_break_statement,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      sym_comment,
    STATE(7), 1,
      aux_sym_program_repeat1,
    STATE(12), 1,
      sym__statement,
    STATE(51), 1,
      sym_return_statement,
    STATE(52), 1,
      sym__last_statement,
    STATE(53), 1,
      sym__chunk,
    STATE(54), 1,
      sym__block,
  [157] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(12), 1,
      sym__statement,
    STATE(6), 2,
      sym_comment,
      aux_sym_program_repeat1,
    ACTIONS(35), 5,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_return,
      sym_break_statement,
  [178] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(13), 1,
      anon_sym_return,
    ACTIONS(31), 1,
      sym_break_statement,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      aux_sym_program_repeat1,
    STATE(7), 1,
      sym_comment,
    STATE(12), 1,
      sym__statement,
    STATE(51), 1,
      sym_return_statement,
    STATE(60), 1,
      sym__last_statement,
  [209] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(13), 1,
      anon_sym_return,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      anon_sym_NULL,
    STATE(8), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_program_repeat1,
    STATE(12), 1,
      sym__statement,
    STATE(28), 1,
      sym_return_statement,
  [237] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(13), 1,
      anon_sym_return,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      anon_sym_NULL,
    STATE(6), 1,
      aux_sym_program_repeat1,
    STATE(9), 1,
      sym_comment,
    STATE(12), 1,
      sym__statement,
    STATE(27), 1,
      sym_return_statement,
  [265] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(13), 1,
      anon_sym_return,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      anon_sym_NULL,
    STATE(6), 1,
      aux_sym_program_repeat1,
    STATE(10), 1,
      sym_comment,
    STATE(12), 1,
      sym__statement,
    STATE(28), 1,
      sym_return_statement,
  [293] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(49), 1,
      anon_sym_COMMA,
    STATE(11), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym_return_statement_repeat1,
    ACTIONS(47), 3,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_RBRACE,
  [314] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(12), 1,
      sym_comment,
    ACTIONS(51), 5,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_return,
      sym_break_statement,
  [331] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(49), 1,
      anon_sym_COMMA,
    STATE(13), 1,
      sym_comment,
    STATE(14), 1,
      aux_sym_return_statement_repeat1,
    ACTIONS(53), 3,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_RBRACE,
  [352] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(57), 1,
      anon_sym_COMMA,
    STATE(14), 2,
      sym_comment,
      aux_sym_return_statement_repeat1,
    ACTIONS(55), 3,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_RBRACE,
  [371] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(60), 1,
      sym_identifier,
    ACTIONS(62), 1,
      sym_right_paren,
    ACTIONS(64), 1,
      sym_ellipsis,
    STATE(15), 1,
      sym_comment,
    STATE(41), 1,
      sym_parameter_list,
  [393] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(16), 1,
      sym_comment,
    ACTIONS(66), 4,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [409] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(17), 1,
      sym_comment,
    ACTIONS(68), 4,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [425] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(18), 1,
      sym_comment,
    ACTIONS(70), 4,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [441] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(19), 1,
      sym_comment,
    ACTIONS(72), 4,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [457] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(20), 1,
      sym_comment,
    ACTIONS(55), 4,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [473] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(21), 1,
      sym_comment,
    ACTIONS(74), 4,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [489] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(22), 1,
      sym_comment,
    ACTIONS(76), 4,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [505] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(23), 1,
      sym_comment,
    ACTIONS(78), 4,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [521] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(80), 1,
      sym_right_paren,
    ACTIONS(82), 1,
      aux_sym_parameter_list_token1,
    STATE(24), 1,
      sym_comment,
    STATE(25), 1,
      aux_sym_parameter_list_repeat1,
  [540] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(84), 1,
      sym_right_paren,
    ACTIONS(86), 1,
      aux_sym_parameter_list_token1,
    STATE(25), 2,
      sym_comment,
      aux_sym_parameter_list_repeat1,
  [557] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(89), 1,
      sym_right_paren,
    ACTIONS(91), 1,
      aux_sym_parameter_list_token1,
    STATE(24), 1,
      aux_sym_parameter_list_repeat1,
    STATE(26), 1,
      sym_comment,
  [576] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    ACTIONS(95), 1,
      anon_sym_NULL,
    STATE(27), 1,
      sym_comment,
  [592] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(99), 1,
      anon_sym_NULL,
    STATE(28), 1,
      sym_comment,
  [608] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(101), 1,
      sym_left_paren,
    STATE(18), 1,
      sym_function_impl,
    STATE(29), 1,
      sym_comment,
  [624] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(30), 1,
      sym_comment,
    ACTIONS(84), 2,
      sym_right_paren,
      aux_sym_parameter_list_token1,
  [638] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    ACTIONS(105), 1,
      anon_sym_NULL,
    STATE(31), 1,
      sym_comment,
  [654] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(109), 1,
      sym_ellipsis,
    STATE(32), 1,
      sym_comment,
  [670] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(111), 1,
      sym_ellipsis,
    STATE(33), 1,
      sym_comment,
  [686] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      sym_comment,
  [699] = 4,
    ACTIONS(115), 1,
      aux_sym_string_token3,
    ACTIONS(117), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(119), 1,
      anon_sym_SLASH_STAR,
    STATE(35), 1,
      sym_comment,
  [712] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    STATE(36), 1,
      sym_comment,
  [725] = 4,
    ACTIONS(117), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(119), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(123), 1,
      aux_sym_comment_token1,
    STATE(37), 1,
      sym_comment,
  [738] = 4,
    ACTIONS(117), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(119), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(125), 1,
      aux_sym_comment_token2,
    STATE(38), 1,
      sym_comment,
  [751] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
    STATE(39), 1,
      sym_comment,
  [764] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(89), 1,
      sym_right_paren,
    STATE(40), 1,
      sym_comment,
  [777] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(129), 1,
      sym_right_paren,
    STATE(41), 1,
      sym_comment,
  [790] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(131), 1,
      anon_sym_STAR_SLASH,
    STATE(42), 1,
      sym_comment,
  [803] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
    STATE(43), 1,
      sym_comment,
  [816] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    STATE(44), 1,
      sym_comment,
  [829] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym_comment,
  [842] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
    STATE(46), 1,
      sym_comment,
  [855] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(139), 1,
      sym_right_paren,
    STATE(47), 1,
      sym_comment,
  [868] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(141), 1,
      ts_builtin_sym_end,
    STATE(48), 1,
      sym_comment,
  [881] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(143), 1,
      anon_sym_DQUOTE,
    STATE(49), 1,
      sym_comment,
  [894] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(143), 1,
      anon_sym_SQUOTE,
    STATE(50), 1,
      sym_comment,
  [907] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(145), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      sym_comment,
  [920] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      sym_comment,
  [933] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(147), 1,
      anon_sym_RBRACE,
    STATE(53), 1,
      sym_comment,
  [946] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      sym_comment,
  [959] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(143), 1,
      anon_sym_BQUOTE,
    STATE(55), 1,
      sym_comment,
  [972] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    STATE(56), 1,
      sym_comment,
  [985] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(149), 1,
      sym_right_paren,
    STATE(57), 1,
      sym_comment,
  [998] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(107), 1,
      sym_identifier,
    STATE(58), 1,
      sym_comment,
  [1011] = 4,
    ACTIONS(117), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(119), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(151), 1,
      aux_sym_string_token1,
    STATE(59), 1,
      sym_comment,
  [1024] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(153), 1,
      anon_sym_RBRACE,
    STATE(60), 1,
      sym_comment,
  [1037] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(155), 1,
      anon_sym_RBRACE,
    STATE(61), 1,
      sym_comment,
  [1050] = 4,
    ACTIONS(117), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(119), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(157), 1,
      aux_sym_string_token2,
    STATE(62), 1,
      sym_comment,
  [1063] = 1,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
  [1067] = 1,
    ACTIONS(161), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 44,
  [SMALL_STATE(4)] = 83,
  [SMALL_STATE(5)] = 120,
  [SMALL_STATE(6)] = 157,
  [SMALL_STATE(7)] = 178,
  [SMALL_STATE(8)] = 209,
  [SMALL_STATE(9)] = 237,
  [SMALL_STATE(10)] = 265,
  [SMALL_STATE(11)] = 293,
  [SMALL_STATE(12)] = 314,
  [SMALL_STATE(13)] = 331,
  [SMALL_STATE(14)] = 352,
  [SMALL_STATE(15)] = 371,
  [SMALL_STATE(16)] = 393,
  [SMALL_STATE(17)] = 409,
  [SMALL_STATE(18)] = 425,
  [SMALL_STATE(19)] = 441,
  [SMALL_STATE(20)] = 457,
  [SMALL_STATE(21)] = 473,
  [SMALL_STATE(22)] = 489,
  [SMALL_STATE(23)] = 505,
  [SMALL_STATE(24)] = 521,
  [SMALL_STATE(25)] = 540,
  [SMALL_STATE(26)] = 557,
  [SMALL_STATE(27)] = 576,
  [SMALL_STATE(28)] = 592,
  [SMALL_STATE(29)] = 608,
  [SMALL_STATE(30)] = 624,
  [SMALL_STATE(31)] = 638,
  [SMALL_STATE(32)] = 654,
  [SMALL_STATE(33)] = 670,
  [SMALL_STATE(34)] = 686,
  [SMALL_STATE(35)] = 699,
  [SMALL_STATE(36)] = 712,
  [SMALL_STATE(37)] = 725,
  [SMALL_STATE(38)] = 738,
  [SMALL_STATE(39)] = 751,
  [SMALL_STATE(40)] = 764,
  [SMALL_STATE(41)] = 777,
  [SMALL_STATE(42)] = 790,
  [SMALL_STATE(43)] = 803,
  [SMALL_STATE(44)] = 816,
  [SMALL_STATE(45)] = 829,
  [SMALL_STATE(46)] = 842,
  [SMALL_STATE(47)] = 855,
  [SMALL_STATE(48)] = 868,
  [SMALL_STATE(49)] = 881,
  [SMALL_STATE(50)] = 894,
  [SMALL_STATE(51)] = 907,
  [SMALL_STATE(52)] = 920,
  [SMALL_STATE(53)] = 933,
  [SMALL_STATE(54)] = 946,
  [SMALL_STATE(55)] = 959,
  [SMALL_STATE(56)] = 972,
  [SMALL_STATE(57)] = 985,
  [SMALL_STATE(58)] = 998,
  [SMALL_STATE(59)] = 1011,
  [SMALL_STATE(60)] = 1024,
  [SMALL_STATE(61)] = 1037,
  [SMALL_STATE(62)] = 1050,
  [SMALL_STATE(63)] = 1063,
  [SMALL_STATE(64)] = 1067,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chunk, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_return_statement_repeat1, 2, 0, 0),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_return_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 2, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 6),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_impl, 4, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_impl, 5, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_impl, 6, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 1, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3, 0, 5),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2, 0, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 4, 0, 5),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3, 0, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2, 0, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__last_statement, 1, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 1, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chunk, 2, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 4),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 2),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_clue(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
