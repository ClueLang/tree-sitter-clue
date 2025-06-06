#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 88
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 51
#define ALIAS_COUNT 3
#define TOKEN_COUNT 33
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 9

enum ts_symbol_identifiers {
  anon_sym_NULL = 1,
  sym_identifier = 2,
  sym_left_paren = 3,
  sym_right_paren = 4,
  sym_local = 5,
  sym_global = 6,
  anon_sym_SQUOTE = 7,
  aux_sym_string_token1 = 8,
  aux_sym_string_token2 = 9,
  anon_sym_DQUOTE = 10,
  aux_sym_string_token3 = 11,
  anon_sym_BQUOTE = 12,
  aux_sym_string_token4 = 13,
  anon_sym_SEMI = 14,
  sym_shebang = 15,
  anon_sym_LBRACE = 16,
  anon_sym_RBRACE = 17,
  sym_nil = 18,
  anon_sym_true = 19,
  anon_sym_false = 20,
  sym_number = 21,
  sym_ellipsis = 22,
  sym_function_start = 23,
  aux_sym_parameter_list_token1 = 24,
  anon_sym_return = 25,
  anon_sym_COMMA = 26,
  sym_break_statement = 27,
  anon_sym_SLASH_SLASH = 28,
  aux_sym_comment_token1 = 29,
  anon_sym_SLASH_STAR = 30,
  aux_sym_comment_token2 = 31,
  anon_sym_SLASH = 32,
  sym_program = 33,
  sym_string = 34,
  sym__statement = 35,
  sym__last_statement = 36,
  sym__chunk = 37,
  sym__block = 38,
  sym_boolean = 39,
  sym_function = 40,
  sym_parameter_list = 41,
  sym_function_statement = 42,
  sym_return_statement = 43,
  sym_comment = 44,
  aux_sym_program_repeat1 = 45,
  aux_sym_string_repeat1 = 46,
  aux_sym_string_repeat2 = 47,
  aux_sym_string_repeat3 = 48,
  aux_sym_parameter_list_repeat1 = 49,
  aux_sym_return_statement_repeat1 = 50,
  alias_sym_module_return_statement = 51,
  anon_alias_sym_string_content = 52,
  anon_alias_sym_string_end = 53,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_NULL] = "\0",
  [sym_identifier] = "identifier",
  [sym_left_paren] = "function_body_paren",
  [sym_right_paren] = "function_body_paren",
  [sym_local] = "local",
  [sym_global] = "global",
  [anon_sym_SQUOTE] = "string_start",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "string_token2",
  [anon_sym_DQUOTE] = "string_start",
  [aux_sym_string_token3] = "string_token3",
  [anon_sym_BQUOTE] = "string_start",
  [aux_sym_string_token4] = "string_token4",
  [anon_sym_SEMI] = ";",
  [sym_shebang] = "shebang",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_nil] = "nil",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_number] = "number",
  [sym_ellipsis] = "ellipsis",
  [sym_function_start] = "function_start",
  [aux_sym_parameter_list_token1] = "parameter_list_token1",
  [anon_sym_return] = "return",
  [anon_sym_COMMA] = ",",
  [sym_break_statement] = "break_statement",
  [anon_sym_SLASH_SLASH] = "comment_start",
  [aux_sym_comment_token1] = "comment_content",
  [anon_sym_SLASH_STAR] = "comment_start",
  [aux_sym_comment_token2] = "comment_content",
  [anon_sym_SLASH] = "comment_end",
  [sym_program] = "program",
  [sym_string] = "string",
  [sym__statement] = "_statement",
  [sym__last_statement] = "_last_statement",
  [sym__chunk] = "_chunk",
  [sym__block] = "function_body",
  [sym_boolean] = "boolean",
  [sym_function] = "function",
  [sym_parameter_list] = "parameter_list",
  [sym_function_statement] = "function_statement",
  [sym_return_statement] = "return_statement",
  [sym_comment] = "comment",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
  [aux_sym_string_repeat3] = "string_repeat3",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_return_statement_repeat1] = "return_statement_repeat1",
  [alias_sym_module_return_statement] = "module_return_statement",
  [anon_alias_sym_string_content] = "string_content",
  [anon_alias_sym_string_end] = "string_end",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_NULL] = anon_sym_NULL,
  [sym_identifier] = sym_identifier,
  [sym_left_paren] = sym_left_paren,
  [sym_right_paren] = sym_left_paren,
  [sym_local] = sym_local,
  [sym_global] = sym_global,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [anon_sym_DQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token3] = aux_sym_string_token3,
  [anon_sym_BQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token4] = aux_sym_string_token4,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_shebang] = sym_shebang,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_nil] = sym_nil,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_number] = sym_number,
  [sym_ellipsis] = sym_ellipsis,
  [sym_function_start] = sym_function_start,
  [aux_sym_parameter_list_token1] = aux_sym_parameter_list_token1,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_break_statement] = sym_break_statement,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_SLASH,
  [aux_sym_comment_token2] = aux_sym_comment_token1,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_program] = sym_program,
  [sym_string] = sym_string,
  [sym__statement] = sym__statement,
  [sym__last_statement] = sym__last_statement,
  [sym__chunk] = sym__chunk,
  [sym__block] = sym__block,
  [sym_boolean] = sym_boolean,
  [sym_function] = sym_function,
  [sym_parameter_list] = sym_parameter_list,
  [sym_function_statement] = sym_function_statement,
  [sym_return_statement] = sym_return_statement,
  [sym_comment] = sym_comment,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
  [aux_sym_string_repeat3] = aux_sym_string_repeat3,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_return_statement_repeat1] = aux_sym_return_statement_repeat1,
  [alias_sym_module_return_statement] = alias_sym_module_return_statement,
  [anon_alias_sym_string_content] = anon_alias_sym_string_content,
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
  [sym_local] = {
    .visible = true,
    .named = true,
  },
  [sym_global] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token4] = {
    .visible = false,
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
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
  [anon_sym_SLASH] = {
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
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_function_statement] = {
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
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat3] = {
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
  [anon_alias_sym_string_content] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_string_end] = {
    .visible = true,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_content = 1,
  field_end = 2,
  field_name = 3,
  field_start = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_content] = "content",
  [field_end] = "end",
  [field_name] = "name",
  [field_start] = "start",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 2},
  [4] = {.index = 2, .length = 3},
  [6] = {.index = 5, .length = 2},
  [7] = {.index = 2, .length = 3},
  [8] = {.index = 7, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_content, 1},
    {field_start, 0},
  [2] =
    {field_content, 1},
    {field_end, 2},
    {field_start, 0},
  [5] =
    {field_end, 1},
    {field_start, 0},
  [7] =
    {field_name, 2},
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
    [1] = anon_alias_sym_string_end,
  },
  [7] = {
    [1] = anon_alias_sym_string_content,
    [2] = anon_alias_sym_string_end,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_return_statement, 2,
    sym_return_statement,
    alias_sym_module_return_statement,
  aux_sym_string_repeat1, 2,
    aux_sym_string_repeat1,
    anon_alias_sym_string_content,
  aux_sym_string_repeat2, 2,
    aux_sym_string_repeat2,
    anon_alias_sym_string_content,
  aux_sym_string_repeat3, 2,
    aux_sym_string_repeat3,
    anon_alias_sym_string_content,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 4,
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
  [22] = 18,
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
  [36] = 13,
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
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 57,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 81,
  [83] = 83,
  [84] = 68,
  [85] = 77,
  [86] = 17,
  [87] = 16,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(45);
      ADVANCE_MAP(
        0, 46,
        '"', 57,
        '#', 1,
        '\'', 52,
        '(', 48,
        ')', 49,
        ',', 82,
        '.', 10,
        '/', 94,
        '0', 72,
        ';', 65,
        '\\', 44,
        '`', 61,
        'b', 35,
        'f', 14,
        'g', 29,
        'l', 31,
        'n', 23,
        'r', 19,
        't', 33,
        '{', 67,
        '}', 68,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(66);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(57);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(52);
      if (lookahead == '/') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == '/') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '/') ADVANCE(84);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '/') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(93);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '/') ADVANCE(85);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(78);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == '\\') ADVANCE(44);
      if (lookahead == '`') ADVANCE(61);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(25);
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 17:
      if (lookahead == 'b') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(15);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 24:
      if (lookahead == 'k') ADVANCE(83);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 36:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 39:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 40:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 44:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(56);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_NULL);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_left_paren);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_right_paren);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_local);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_global);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '/') ADVANCE(84);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(54);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(53);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_string_token3);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '/') ADVANCE(84);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '/') ADVANCE(59);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(58);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_string_token4);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '/') ADVANCE(84);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == '/') ADVANCE(63);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(62);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_shebang);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(42);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_ellipsis);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_function_start);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_parameter_list_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_break_statement);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(89);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == '/') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(89);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '/') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(89);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(7);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(89);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(7);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '/') ADVANCE(84);
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
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 12},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 12},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 12},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 12},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 88},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 88},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 6},
  [86] = {(TSStateId)(-1)},
  [87] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_NULL] = ACTIONS(1),
    [sym_left_paren] = ACTIONS(1),
    [sym_right_paren] = ACTIONS(1),
    [sym_local] = ACTIONS(1),
    [sym_global] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [aux_sym_string_token2] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_shebang] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_nil] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_ellipsis] = ACTIONS(1),
    [sym_function_start] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_break_statement] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_SLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(59),
    [sym__statement] = STATE(10),
    [sym_function_statement] = STATE(11),
    [sym_return_statement] = STATE(47),
    [sym_comment] = STATE(1),
    [aux_sym_program_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_NULL] = ACTIONS(9),
    [sym_local] = ACTIONS(11),
    [sym_global] = ACTIONS(11),
    [anon_sym_SEMI] = ACTIONS(13),
    [sym_shebang] = ACTIONS(15),
    [anon_sym_return] = ACTIONS(17),
    [anon_sym_SLASH_SLASH] = ACTIONS(19),
    [anon_sym_SLASH_STAR] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_BQUOTE,
    ACTIONS(35), 1,
      sym_function_start,
    STATE(2), 1,
      sym_comment,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 3,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_SEMI,
    ACTIONS(31), 3,
      sym_nil,
      sym_number,
      sym_ellipsis,
    STATE(19), 3,
      sym_string,
      sym_boolean,
      sym_function,
  [41] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_BQUOTE,
    ACTIONS(35), 1,
      sym_function_start,
    STATE(3), 1,
      sym_comment,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 3,
      sym_nil,
      sym_number,
      sym_ellipsis,
    STATE(40), 3,
      sym_string,
      sym_boolean,
      sym_function,
  [77] = 13,
    ACTIONS(13), 1,
      anon_sym_SEMI,
    ACTIONS(17), 1,
      anon_sym_return,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    ACTIONS(41), 1,
      sym_break_statement,
    STATE(4), 1,
      sym_comment,
    STATE(11), 1,
      sym_function_statement,
    STATE(63), 1,
      sym__last_statement,
    STATE(67), 1,
      sym_return_statement,
    STATE(68), 1,
      sym__chunk,
    ACTIONS(11), 2,
      sym_local,
      sym_global,
    STATE(7), 2,
      sym__statement,
      aux_sym_program_repeat1,
  [119] = 13,
    ACTIONS(13), 1,
      anon_sym_SEMI,
    ACTIONS(17), 1,
      anon_sym_return,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(41), 1,
      sym_break_statement,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      sym_comment,
    STATE(11), 1,
      sym_function_statement,
    STATE(63), 1,
      sym__last_statement,
    STATE(67), 1,
      sym_return_statement,
    STATE(84), 1,
      sym__chunk,
    ACTIONS(11), 2,
      sym_local,
      sym_global,
    STATE(7), 2,
      sym__statement,
      aux_sym_program_repeat1,
  [161] = 7,
    ACTIONS(50), 1,
      anon_sym_SEMI,
    ACTIONS(53), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(56), 1,
      anon_sym_SLASH_STAR,
    STATE(11), 1,
      sym_function_statement,
    ACTIONS(47), 2,
      sym_local,
      sym_global,
    STATE(6), 3,
      sym__statement,
      sym_comment,
      aux_sym_program_repeat1,
    ACTIONS(45), 5,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_return,
      sym_break_statement,
  [190] = 12,
    ACTIONS(13), 1,
      anon_sym_SEMI,
    ACTIONS(17), 1,
      anon_sym_return,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(41), 1,
      sym_break_statement,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym_comment,
    STATE(11), 1,
      sym_function_statement,
    STATE(67), 1,
      sym_return_statement,
    STATE(76), 1,
      sym__last_statement,
    ACTIONS(11), 2,
      sym_local,
      sym_global,
    STATE(6), 2,
      sym__statement,
      aux_sym_program_repeat1,
  [229] = 11,
    ACTIONS(13), 1,
      anon_sym_SEMI,
    ACTIONS(17), 1,
      anon_sym_return,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 1,
      anon_sym_NULL,
    STATE(8), 1,
      sym_comment,
    STATE(11), 1,
      sym_function_statement,
    STATE(48), 1,
      sym_return_statement,
    ACTIONS(11), 2,
      sym_local,
      sym_global,
    STATE(6), 2,
      sym__statement,
      aux_sym_program_repeat1,
  [265] = 11,
    ACTIONS(13), 1,
      anon_sym_SEMI,
    ACTIONS(17), 1,
      anon_sym_return,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 1,
      anon_sym_NULL,
    STATE(9), 1,
      sym_comment,
    STATE(11), 1,
      sym_function_statement,
    STATE(55), 1,
      sym_return_statement,
    ACTIONS(11), 2,
      sym_local,
      sym_global,
    STATE(8), 2,
      sym__statement,
      aux_sym_program_repeat1,
  [301] = 11,
    ACTIONS(13), 1,
      anon_sym_SEMI,
    ACTIONS(17), 1,
      anon_sym_return,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 1,
      anon_sym_NULL,
    STATE(10), 1,
      sym_comment,
    STATE(11), 1,
      sym_function_statement,
    STATE(55), 1,
      sym_return_statement,
    ACTIONS(11), 2,
      sym_local,
      sym_global,
    STATE(6), 2,
      sym__statement,
      aux_sym_program_repeat1,
  [337] = 3,
    ACTIONS(71), 1,
      anon_sym_SEMI,
    STATE(11), 1,
      sym_comment,
    ACTIONS(69), 9,
      ts_builtin_sym_end,
      anon_sym_NULL,
      sym_local,
      sym_global,
      anon_sym_RBRACE,
      anon_sym_return,
      sym_break_statement,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [355] = 2,
    STATE(12), 1,
      sym_comment,
    ACTIONS(73), 10,
      ts_builtin_sym_end,
      anon_sym_NULL,
      sym_local,
      sym_global,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_return,
      sym_break_statement,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [371] = 2,
    STATE(13), 1,
      sym_comment,
    ACTIONS(75), 10,
      ts_builtin_sym_end,
      anon_sym_NULL,
      sym_local,
      sym_global,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_return,
      sym_break_statement,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [387] = 2,
    STATE(14), 1,
      sym_comment,
    ACTIONS(77), 10,
      ts_builtin_sym_end,
      anon_sym_NULL,
      sym_local,
      sym_global,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_return,
      sym_break_statement,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [403] = 2,
    STATE(15), 1,
      sym_comment,
    ACTIONS(79), 10,
      ts_builtin_sym_end,
      anon_sym_NULL,
      sym_local,
      sym_global,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_return,
      sym_break_statement,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [419] = 2,
    STATE(16), 1,
      sym_comment,
    ACTIONS(81), 10,
      ts_builtin_sym_end,
      anon_sym_NULL,
      sym_local,
      sym_global,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_return,
      sym_break_statement,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [435] = 2,
    STATE(17), 1,
      sym_comment,
    ACTIONS(83), 10,
      ts_builtin_sym_end,
      anon_sym_NULL,
      sym_local,
      sym_global,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_return,
      sym_break_statement,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [451] = 2,
    STATE(18), 1,
      sym_comment,
    ACTIONS(85), 10,
      ts_builtin_sym_end,
      anon_sym_NULL,
      sym_local,
      sym_global,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_return,
      sym_break_statement,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [467] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(89), 1,
      anon_sym_COMMA,
    STATE(19), 1,
      sym_comment,
    STATE(20), 1,
      aux_sym_return_statement_repeat1,
    ACTIONS(87), 3,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_SEMI,
  [488] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(89), 1,
      anon_sym_COMMA,
    STATE(20), 1,
      sym_comment,
    STATE(21), 1,
      aux_sym_return_statement_repeat1,
    ACTIONS(91), 3,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_SEMI,
  [509] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(95), 1,
      anon_sym_COMMA,
    STATE(21), 2,
      sym_comment,
      aux_sym_return_statement_repeat1,
    ACTIONS(93), 3,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_SEMI,
  [528] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(22), 1,
      sym_comment,
    ACTIONS(85), 4,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [544] = 6,
    ACTIONS(100), 1,
      anon_sym_BQUOTE,
    ACTIONS(102), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(104), 1,
      anon_sym_SLASH_STAR,
    STATE(23), 1,
      sym_comment,
    STATE(27), 1,
      aux_sym_string_repeat3,
    ACTIONS(98), 2,
      aux_sym_string_token2,
      aux_sym_string_token4,
  [564] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(24), 1,
      sym_comment,
    ACTIONS(106), 4,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [580] = 6,
    ACTIONS(102), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(104), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    STATE(25), 1,
      sym_comment,
    STATE(31), 1,
      aux_sym_string_repeat1,
    ACTIONS(110), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [600] = 6,
    ACTIONS(102), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(104), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    STATE(26), 1,
      sym_comment,
    STATE(32), 1,
      aux_sym_string_repeat2,
    ACTIONS(112), 2,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [620] = 6,
    ACTIONS(102), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(104), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(108), 1,
      anon_sym_BQUOTE,
    STATE(27), 1,
      sym_comment,
    STATE(33), 1,
      aux_sym_string_repeat3,
    ACTIONS(98), 2,
      aux_sym_string_token2,
      aux_sym_string_token4,
  [640] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(114), 1,
      sym_identifier,
    ACTIONS(116), 1,
      sym_right_paren,
    ACTIONS(118), 1,
      sym_ellipsis,
    STATE(28), 1,
      sym_comment,
    STATE(70), 1,
      sym_parameter_list,
  [662] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(114), 1,
      sym_identifier,
    ACTIONS(118), 1,
      sym_ellipsis,
    ACTIONS(120), 1,
      sym_right_paren,
    STATE(29), 1,
      sym_comment,
    STATE(78), 1,
      sym_parameter_list,
  [684] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(30), 1,
      sym_comment,
    ACTIONS(122), 4,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [700] = 5,
    ACTIONS(102), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(104), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(124), 1,
      anon_sym_SQUOTE,
    ACTIONS(126), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(31), 2,
      sym_comment,
      aux_sym_string_repeat1,
  [718] = 5,
    ACTIONS(102), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(104), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(132), 1,
      anon_sym_DQUOTE,
    ACTIONS(129), 2,
      aux_sym_string_token2,
      aux_sym_string_token3,
    STATE(32), 2,
      sym_comment,
      aux_sym_string_repeat2,
  [736] = 5,
    ACTIONS(102), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(104), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(137), 1,
      anon_sym_BQUOTE,
    ACTIONS(134), 2,
      aux_sym_string_token2,
      aux_sym_string_token4,
    STATE(33), 2,
      sym_comment,
      aux_sym_string_repeat3,
  [754] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(34), 1,
      sym_comment,
    ACTIONS(139), 4,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [770] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(35), 1,
      sym_comment,
    ACTIONS(141), 4,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [786] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(36), 1,
      sym_comment,
    ACTIONS(75), 4,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [802] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(37), 1,
      sym_comment,
    ACTIONS(143), 4,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [818] = 6,
    ACTIONS(100), 1,
      anon_sym_SQUOTE,
    ACTIONS(102), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(104), 1,
      anon_sym_SLASH_STAR,
    STATE(25), 1,
      aux_sym_string_repeat1,
    STATE(38), 1,
      sym_comment,
    ACTIONS(110), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [838] = 6,
    ACTIONS(100), 1,
      anon_sym_DQUOTE,
    ACTIONS(102), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(104), 1,
      anon_sym_SLASH_STAR,
    STATE(26), 1,
      aux_sym_string_repeat2,
    STATE(39), 1,
      sym_comment,
    ACTIONS(112), 2,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [858] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(40), 1,
      sym_comment,
    ACTIONS(93), 4,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [874] = 4,
    ACTIONS(102), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(104), 1,
      anon_sym_SLASH_STAR,
    STATE(41), 1,
      sym_comment,
    ACTIONS(145), 3,
      aux_sym_string_token2,
      anon_sym_BQUOTE,
      aux_sym_string_token4,
  [889] = 4,
    ACTIONS(102), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(104), 1,
      anon_sym_SLASH_STAR,
    STATE(42), 1,
      sym_comment,
    ACTIONS(147), 3,
      anon_sym_SQUOTE,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [904] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(149), 1,
      sym_right_paren,
    ACTIONS(151), 1,
      aux_sym_parameter_list_token1,
    STATE(43), 2,
      sym_comment,
      aux_sym_parameter_list_repeat1,
  [921] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(154), 1,
      sym_right_paren,
    ACTIONS(156), 1,
      aux_sym_parameter_list_token1,
    STATE(43), 1,
      aux_sym_parameter_list_repeat1,
    STATE(44), 1,
      sym_comment,
  [940] = 4,
    ACTIONS(102), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(104), 1,
      anon_sym_SLASH_STAR,
    STATE(45), 1,
      sym_comment,
    ACTIONS(158), 3,
      aux_sym_string_token2,
      anon_sym_DQUOTE,
      aux_sym_string_token3,
  [955] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(160), 1,
      sym_right_paren,
    ACTIONS(162), 1,
      aux_sym_parameter_list_token1,
    STATE(44), 1,
      aux_sym_parameter_list_repeat1,
    STATE(46), 1,
      sym_comment,
  [974] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(164), 1,
      ts_builtin_sym_end,
    ACTIONS(166), 1,
      anon_sym_NULL,
    STATE(47), 1,
      sym_comment,
  [990] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(168), 1,
      ts_builtin_sym_end,
    ACTIONS(170), 1,
      anon_sym_NULL,
    STATE(48), 1,
      sym_comment,
  [1006] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(172), 1,
      anon_sym_LBRACE,
    STATE(14), 1,
      sym__block,
    STATE(49), 1,
      sym_comment,
  [1022] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(50), 1,
      sym_comment,
    ACTIONS(149), 2,
      sym_right_paren,
      aux_sym_parameter_list_token1,
  [1036] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(174), 1,
      sym_identifier,
    ACTIONS(176), 1,
      sym_ellipsis,
    STATE(51), 1,
      sym_comment,
  [1052] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(174), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym_ellipsis,
    STATE(52), 1,
      sym_comment,
  [1068] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(172), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      sym__block,
    STATE(53), 1,
      sym_comment,
  [1084] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    STATE(37), 1,
      sym__block,
    STATE(54), 1,
      sym_comment,
  [1100] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(182), 1,
      ts_builtin_sym_end,
    ACTIONS(184), 1,
      anon_sym_NULL,
    STATE(55), 1,
      sym_comment,
  [1116] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    STATE(35), 1,
      sym__block,
    STATE(56), 1,
      sym_comment,
  [1132] = 4,
    ACTIONS(102), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(104), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(186), 1,
      aux_sym_comment_token1,
    STATE(57), 1,
      sym_comment,
  [1145] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(188), 1,
      sym_left_paren,
    STATE(58), 1,
      sym_comment,
  [1158] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(190), 1,
      ts_builtin_sym_end,
    STATE(59), 1,
      sym_comment,
  [1171] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(160), 1,
      sym_right_paren,
    STATE(60), 1,
      sym_comment,
  [1184] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(192), 1,
      sym_identifier,
    STATE(61), 1,
      sym_comment,
  [1197] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(194), 1,
      sym_function_start,
    STATE(62), 1,
      sym_comment,
  [1210] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    STATE(63), 1,
      sym_comment,
  [1223] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(196), 1,
      sym_right_paren,
    STATE(64), 1,
      sym_comment,
  [1236] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(198), 1,
      sym_left_paren,
    STATE(65), 1,
      sym_comment,
  [1249] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
    STATE(66), 1,
      sym_comment,
  [1262] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(202), 1,
      anon_sym_SEMI,
    STATE(67), 1,
      sym_comment,
  [1275] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(204), 1,
      anon_sym_RBRACE,
    STATE(68), 1,
      sym_comment,
  [1288] = 4,
    ACTIONS(102), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(104), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(206), 1,
      aux_sym_comment_token1,
    STATE(69), 1,
      sym_comment,
  [1301] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(208), 1,
      sym_right_paren,
    STATE(70), 1,
      sym_comment,
  [1314] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    STATE(71), 1,
      sym_comment,
  [1327] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(210), 1,
      sym_right_paren,
    STATE(72), 1,
      sym_comment,
  [1340] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(174), 1,
      sym_identifier,
    STATE(73), 1,
      sym_comment,
  [1353] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(212), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      sym_comment,
  [1366] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(214), 1,
      ts_builtin_sym_end,
    STATE(75), 1,
      sym_comment,
  [1379] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(216), 1,
      anon_sym_RBRACE,
    STATE(76), 1,
      sym_comment,
  [1392] = 4,
    ACTIONS(102), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(104), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(218), 1,
      aux_sym_comment_token2,
    STATE(77), 1,
      sym_comment,
  [1405] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(220), 1,
      sym_right_paren,
    STATE(78), 1,
      sym_comment,
  [1418] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(222), 1,
      ts_builtin_sym_end,
    STATE(79), 1,
      sym_comment,
  [1431] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(224), 1,
      ts_builtin_sym_end,
    STATE(80), 1,
      sym_comment,
  [1444] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(226), 1,
      anon_sym_SLASH,
    STATE(81), 1,
      sym_comment,
  [1457] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(228), 1,
      anon_sym_SLASH,
    STATE(82), 1,
      sym_comment,
  [1470] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    STATE(83), 1,
      sym_comment,
  [1483] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(230), 1,
      anon_sym_RBRACE,
    STATE(84), 1,
      sym_comment,
  [1496] = 4,
    ACTIONS(102), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(104), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(232), 1,
      aux_sym_comment_token2,
    STATE(85), 1,
      sym_comment,
  [1509] = 1,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
  [1513] = 1,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 41,
  [SMALL_STATE(4)] = 77,
  [SMALL_STATE(5)] = 119,
  [SMALL_STATE(6)] = 161,
  [SMALL_STATE(7)] = 190,
  [SMALL_STATE(8)] = 229,
  [SMALL_STATE(9)] = 265,
  [SMALL_STATE(10)] = 301,
  [SMALL_STATE(11)] = 337,
  [SMALL_STATE(12)] = 355,
  [SMALL_STATE(13)] = 371,
  [SMALL_STATE(14)] = 387,
  [SMALL_STATE(15)] = 403,
  [SMALL_STATE(16)] = 419,
  [SMALL_STATE(17)] = 435,
  [SMALL_STATE(18)] = 451,
  [SMALL_STATE(19)] = 467,
  [SMALL_STATE(20)] = 488,
  [SMALL_STATE(21)] = 509,
  [SMALL_STATE(22)] = 528,
  [SMALL_STATE(23)] = 544,
  [SMALL_STATE(24)] = 564,
  [SMALL_STATE(25)] = 580,
  [SMALL_STATE(26)] = 600,
  [SMALL_STATE(27)] = 620,
  [SMALL_STATE(28)] = 640,
  [SMALL_STATE(29)] = 662,
  [SMALL_STATE(30)] = 684,
  [SMALL_STATE(31)] = 700,
  [SMALL_STATE(32)] = 718,
  [SMALL_STATE(33)] = 736,
  [SMALL_STATE(34)] = 754,
  [SMALL_STATE(35)] = 770,
  [SMALL_STATE(36)] = 786,
  [SMALL_STATE(37)] = 802,
  [SMALL_STATE(38)] = 818,
  [SMALL_STATE(39)] = 838,
  [SMALL_STATE(40)] = 858,
  [SMALL_STATE(41)] = 874,
  [SMALL_STATE(42)] = 889,
  [SMALL_STATE(43)] = 904,
  [SMALL_STATE(44)] = 921,
  [SMALL_STATE(45)] = 940,
  [SMALL_STATE(46)] = 955,
  [SMALL_STATE(47)] = 974,
  [SMALL_STATE(48)] = 990,
  [SMALL_STATE(49)] = 1006,
  [SMALL_STATE(50)] = 1022,
  [SMALL_STATE(51)] = 1036,
  [SMALL_STATE(52)] = 1052,
  [SMALL_STATE(53)] = 1068,
  [SMALL_STATE(54)] = 1084,
  [SMALL_STATE(55)] = 1100,
  [SMALL_STATE(56)] = 1116,
  [SMALL_STATE(57)] = 1132,
  [SMALL_STATE(58)] = 1145,
  [SMALL_STATE(59)] = 1158,
  [SMALL_STATE(60)] = 1171,
  [SMALL_STATE(61)] = 1184,
  [SMALL_STATE(62)] = 1197,
  [SMALL_STATE(63)] = 1210,
  [SMALL_STATE(64)] = 1223,
  [SMALL_STATE(65)] = 1236,
  [SMALL_STATE(66)] = 1249,
  [SMALL_STATE(67)] = 1262,
  [SMALL_STATE(68)] = 1275,
  [SMALL_STATE(69)] = 1288,
  [SMALL_STATE(70)] = 1301,
  [SMALL_STATE(71)] = 1314,
  [SMALL_STATE(72)] = 1327,
  [SMALL_STATE(73)] = 1340,
  [SMALL_STATE(74)] = 1353,
  [SMALL_STATE(75)] = 1366,
  [SMALL_STATE(76)] = 1379,
  [SMALL_STATE(77)] = 1392,
  [SMALL_STATE(78)] = 1405,
  [SMALL_STATE(79)] = 1418,
  [SMALL_STATE(80)] = 1431,
  [SMALL_STATE(81)] = 1444,
  [SMALL_STATE(82)] = 1457,
  [SMALL_STATE(83)] = 1470,
  [SMALL_STATE(84)] = 1483,
  [SMALL_STATE(85)] = 1496,
  [SMALL_STATE(86)] = 1509,
  [SMALL_STATE(87)] = 1513,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chunk, 1, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 2, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_statement, 7, 0, 8),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_statement, 6, 0, 8),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 4),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 3, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_return_statement_repeat1, 2, 0, 0),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_return_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 6),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 7),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2, 0, 0), SHIFT_REPEAT(45),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2, 0, 0),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat3, 2, 0, 0), SHIFT_REPEAT(41),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat3, 2, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 4, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 5, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat3, 1, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 1, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 1, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3, 0, 5),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2, 0, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [190] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3, 0, 3),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__last_statement, 2, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 4, 0, 5),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chunk, 2, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2, 0, 1),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
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
