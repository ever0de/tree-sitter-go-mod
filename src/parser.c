#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 135
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 48
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  sym_raw_string_literal = 1,
  anon_sym_DQUOTE = 2,
  aux_sym_interpreted_string_literal_token1 = 3,
  sym_escape_sequence = 4,
  sym__identifier = 5,
  anon_sym_module = 6,
  anon_sym_LPAREN = 7,
  anon_sym_LF = 8,
  anon_sym_RPAREN = 9,
  anon_sym_go = 10,
  anon_sym_toolchain = 11,
  anon_sym_require = 12,
  anon_sym_exclude = 13,
  anon_sym_replace = 14,
  anon_sym_EQ_GT = 15,
  anon_sym_retract = 16,
  anon_sym_LBRACK = 17,
  anon_sym_COMMA = 18,
  anon_sym_RBRACK = 19,
  sym_comment = 20,
  sym_source_file = 21,
  sym__directive = 22,
  sym__string_literal = 23,
  sym_interpreted_string_literal = 24,
  sym__string_or_ident = 25,
  sym_module_path = 26,
  sym_go_version = 27,
  sym_version = 28,
  sym_module_directive = 29,
  sym_go_directive = 30,
  sym_toolchain_directive = 31,
  sym_toolchain_name = 32,
  sym_require_directive = 33,
  sym_require_spec = 34,
  sym_exclude_directive = 35,
  sym_exclude_spec = 36,
  sym_replace_directive = 37,
  sym_replace_spec = 38,
  sym_file_path = 39,
  sym_retract_directive = 40,
  sym_retract_spec = 41,
  aux_sym_source_file_repeat1 = 42,
  aux_sym_interpreted_string_literal_repeat1 = 43,
  aux_sym_require_directive_repeat1 = 44,
  aux_sym_exclude_directive_repeat1 = 45,
  aux_sym_replace_directive_repeat1 = 46,
  aux_sym_retract_directive_repeat1 = 47,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_raw_string_literal] = "raw_string_literal",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_interpreted_string_literal_token1] = "interpreted_string_literal_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym__identifier] = "_identifier",
  [anon_sym_module] = "module",
  [anon_sym_LPAREN] = "(",
  [anon_sym_LF] = "\n",
  [anon_sym_RPAREN] = ")",
  [anon_sym_go] = "go",
  [anon_sym_toolchain] = "toolchain",
  [anon_sym_require] = "require",
  [anon_sym_exclude] = "exclude",
  [anon_sym_replace] = "replace",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_retract] = "retract",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__directive] = "_directive",
  [sym__string_literal] = "_string_literal",
  [sym_interpreted_string_literal] = "interpreted_string_literal",
  [sym__string_or_ident] = "_string_or_ident",
  [sym_module_path] = "module_path",
  [sym_go_version] = "go_version",
  [sym_version] = "version",
  [sym_module_directive] = "module_directive",
  [sym_go_directive] = "go_directive",
  [sym_toolchain_directive] = "toolchain_directive",
  [sym_toolchain_name] = "toolchain_name",
  [sym_require_directive] = "require_directive",
  [sym_require_spec] = "require_spec",
  [sym_exclude_directive] = "exclude_directive",
  [sym_exclude_spec] = "exclude_spec",
  [sym_replace_directive] = "replace_directive",
  [sym_replace_spec] = "replace_spec",
  [sym_file_path] = "file_path",
  [sym_retract_directive] = "retract_directive",
  [sym_retract_spec] = "retract_spec",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_interpreted_string_literal_repeat1] = "interpreted_string_literal_repeat1",
  [aux_sym_require_directive_repeat1] = "require_directive_repeat1",
  [aux_sym_exclude_directive_repeat1] = "exclude_directive_repeat1",
  [aux_sym_replace_directive_repeat1] = "replace_directive_repeat1",
  [aux_sym_retract_directive_repeat1] = "retract_directive_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_raw_string_literal] = sym_raw_string_literal,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_interpreted_string_literal_token1] = aux_sym_interpreted_string_literal_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym__identifier] = sym__identifier,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_go] = anon_sym_go,
  [anon_sym_toolchain] = anon_sym_toolchain,
  [anon_sym_require] = anon_sym_require,
  [anon_sym_exclude] = anon_sym_exclude,
  [anon_sym_replace] = anon_sym_replace,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_retract] = anon_sym_retract,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__directive] = sym__directive,
  [sym__string_literal] = sym__string_literal,
  [sym_interpreted_string_literal] = sym_interpreted_string_literal,
  [sym__string_or_ident] = sym__string_or_ident,
  [sym_module_path] = sym_module_path,
  [sym_go_version] = sym_go_version,
  [sym_version] = sym_version,
  [sym_module_directive] = sym_module_directive,
  [sym_go_directive] = sym_go_directive,
  [sym_toolchain_directive] = sym_toolchain_directive,
  [sym_toolchain_name] = sym_toolchain_name,
  [sym_require_directive] = sym_require_directive,
  [sym_require_spec] = sym_require_spec,
  [sym_exclude_directive] = sym_exclude_directive,
  [sym_exclude_spec] = sym_exclude_spec,
  [sym_replace_directive] = sym_replace_directive,
  [sym_replace_spec] = sym_replace_spec,
  [sym_file_path] = sym_file_path,
  [sym_retract_directive] = sym_retract_directive,
  [sym_retract_spec] = sym_retract_spec,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_interpreted_string_literal_repeat1] = aux_sym_interpreted_string_literal_repeat1,
  [aux_sym_require_directive_repeat1] = aux_sym_require_directive_repeat1,
  [aux_sym_exclude_directive_repeat1] = aux_sym_exclude_directive_repeat1,
  [aux_sym_replace_directive_repeat1] = aux_sym_replace_directive_repeat1,
  [aux_sym_retract_directive_repeat1] = aux_sym_retract_directive_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_raw_string_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_interpreted_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_go] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_toolchain] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_require] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exclude] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_replace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_retract] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__directive] = {
    .visible = false,
    .named = true,
  },
  [sym__string_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_interpreted_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__string_or_ident] = {
    .visible = false,
    .named = true,
  },
  [sym_module_path] = {
    .visible = true,
    .named = true,
  },
  [sym_go_version] = {
    .visible = true,
    .named = true,
  },
  [sym_version] = {
    .visible = true,
    .named = true,
  },
  [sym_module_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_go_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_toolchain_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_toolchain_name] = {
    .visible = true,
    .named = true,
  },
  [sym_require_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_require_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_exclude_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_exclude_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_replace_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_replace_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_file_path] = {
    .visible = true,
    .named = true,
  },
  [sym_retract_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_retract_spec] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interpreted_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_require_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_exclude_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_replace_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_retract_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_name = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
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
  [49] = 43,
  [50] = 50,
  [51] = 50,
  [52] = 26,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 54,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 60,
  [63] = 63,
  [64] = 63,
  [65] = 61,
  [66] = 66,
  [67] = 56,
  [68] = 59,
  [69] = 47,
  [70] = 48,
  [71] = 71,
  [72] = 22,
  [73] = 73,
  [74] = 71,
  [75] = 75,
  [76] = 4,
  [77] = 5,
  [78] = 78,
  [79] = 71,
  [80] = 53,
  [81] = 46,
  [82] = 75,
  [83] = 75,
  [84] = 71,
  [85] = 45,
  [86] = 75,
  [87] = 40,
  [88] = 29,
  [89] = 5,
  [90] = 4,
  [91] = 22,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 5,
  [96] = 96,
  [97] = 4,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 22,
  [108] = 108,
  [109] = 92,
  [110] = 110,
  [111] = 93,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 110,
  [117] = 101,
  [118] = 99,
  [119] = 119,
  [120] = 120,
  [121] = 113,
  [122] = 94,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 115,
  [127] = 127,
  [128] = 128,
  [129] = 105,
  [130] = 130,
  [131] = 112,
  [132] = 132,
  [133] = 96,
  [134] = 134,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(56);
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '(') ADVANCE(73);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == ',') ADVANCE(87);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '=') ADVANCE(10);
      if (lookahead == '[') ADVANCE(86);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == '`') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(46);
      if (lookahead == 'g') ADVANCE(35);
      if (lookahead == 'm') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(22);
      if (lookahead == 't') ADVANCE(38);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(55)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == '\\') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"') ADVANCE(60);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '`') ADVANCE(69);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(71);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '/') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '/') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(60);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '[') ADVANCE(86);
      if (lookahead == '`') ADVANCE(69);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != ']') ADVANCE(71);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(60);
      if (lookahead == ')') ADVANCE(77);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '[') ADVANCE(86);
      if (lookahead == '`') ADVANCE(69);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != ']') ADVANCE(71);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(60);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '=') ADVANCE(68);
      if (lookahead == '`') ADVANCE(69);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(71);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(60);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '`') ADVANCE(69);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(71);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(89);
      END_STATE();
    case 10:
      if (lookahead == '>') ADVANCE(83);
      END_STATE();
    case 11:
      if (lookahead == 'U') ADVANCE(54);
      if (lookahead == 'u') ADVANCE(50);
      if (lookahead == 'x') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 12:
      if (lookahead == '`') ADVANCE(57);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(33);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(27);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(42);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(25);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(45);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(24);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 27:
      if (lookahead == 'h') ADVANCE(13);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 35:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 39:
      if (lookahead == 'p') ADVANCE(30);
      if (lookahead == 'q') ADVANCE(43);
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 43:
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 44:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 45:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 46:
      if (lookahead == 'x') ADVANCE(16);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      END_STATE();
    case 55:
      if (eof) ADVANCE(56);
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '(') ADVANCE(73);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == ',') ADVANCE(87);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '=') ADVANCE(10);
      if (lookahead == '[') ADVANCE(86);
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == '`') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(46);
      if (lookahead == 'g') ADVANCE(35);
      if (lookahead == 'm') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(22);
      if (lookahead == 't') ADVANCE(38);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(55)
      END_STATE();
    case 56:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_raw_string_literal);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_raw_string_literal);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(71);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(71);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_interpreted_string_literal_token1);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(63);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_interpreted_string_literal_token1);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_interpreted_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(71);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '>') ADVANCE(84);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(71);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '`') ADVANCE(58);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(12);
      if (lookahead != 0) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(71);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(71);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_go);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_toolchain);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_require);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_exclude);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_replace);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(71);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_retract);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(89);
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
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 8},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 8},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 8},
  [63] = {.lex_state = 8},
  [64] = {.lex_state = 8},
  [65] = {.lex_state = 8},
  [66] = {.lex_state = 8},
  [67] = {.lex_state = 8},
  [68] = {.lex_state = 8},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 7},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 7},
  [77] = {.lex_state = 7},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 8},
  [90] = {.lex_state = 8},
  [91] = {.lex_state = 8},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 3},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_raw_string_literal] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_go] = ACTIONS(1),
    [anon_sym_toolchain] = ACTIONS(1),
    [anon_sym_require] = ACTIONS(1),
    [anon_sym_exclude] = ACTIONS(1),
    [anon_sym_replace] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_retract] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(127),
    [sym__directive] = STATE(3),
    [sym_module_directive] = STATE(3),
    [sym_go_directive] = STATE(3),
    [sym_toolchain_directive] = STATE(3),
    [sym_require_directive] = STATE(3),
    [sym_exclude_directive] = STATE(3),
    [sym_replace_directive] = STATE(3),
    [sym_retract_directive] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_module] = ACTIONS(7),
    [anon_sym_go] = ACTIONS(9),
    [anon_sym_toolchain] = ACTIONS(11),
    [anon_sym_require] = ACTIONS(13),
    [anon_sym_exclude] = ACTIONS(15),
    [anon_sym_replace] = ACTIONS(17),
    [anon_sym_retract] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_module,
    ACTIONS(26), 1,
      anon_sym_go,
    ACTIONS(29), 1,
      anon_sym_toolchain,
    ACTIONS(32), 1,
      anon_sym_require,
    ACTIONS(35), 1,
      anon_sym_exclude,
    ACTIONS(38), 1,
      anon_sym_replace,
    ACTIONS(41), 1,
      anon_sym_retract,
    STATE(2), 9,
      sym__directive,
      sym_module_directive,
      sym_go_directive,
      sym_toolchain_directive,
      sym_require_directive,
      sym_exclude_directive,
      sym_replace_directive,
      sym_retract_directive,
      aux_sym_source_file_repeat1,
  [39] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_module,
    ACTIONS(9), 1,
      anon_sym_go,
    ACTIONS(11), 1,
      anon_sym_toolchain,
    ACTIONS(13), 1,
      anon_sym_require,
    ACTIONS(15), 1,
      anon_sym_exclude,
    ACTIONS(17), 1,
      anon_sym_replace,
    ACTIONS(19), 1,
      anon_sym_retract,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    STATE(2), 9,
      sym__directive,
      sym_module_directive,
      sym_go_directive,
      sym_toolchain_directive,
      sym_require_directive,
      sym_exclude_directive,
      sym_replace_directive,
      sym_retract_directive,
      aux_sym_source_file_repeat1,
  [78] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 11,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_go,
      anon_sym_toolchain,
      anon_sym_require,
      anon_sym_exclude,
      anon_sym_replace,
      anon_sym_EQ_GT,
      anon_sym_retract,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [95] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 11,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_go,
      anon_sym_toolchain,
      anon_sym_require,
      anon_sym_exclude,
      anon_sym_replace,
      anon_sym_EQ_GT,
      anon_sym_retract,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [112] = 8,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    ACTIONS(54), 1,
      anon_sym_RPAREN,
    ACTIONS(56), 1,
      anon_sym_LBRACK,
    ACTIONS(58), 1,
      sym_comment,
    STATE(111), 1,
      sym_version,
    ACTIONS(50), 2,
      sym_raw_string_literal,
      sym__identifier,
    STATE(7), 2,
      sym_retract_spec,
      aux_sym_retract_directive_repeat1,
    STATE(109), 3,
      sym__string_literal,
      sym_interpreted_string_literal,
      sym__string_or_ident,
  [141] = 8,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(66), 1,
      anon_sym_RPAREN,
    ACTIONS(68), 1,
      anon_sym_LBRACK,
    STATE(111), 1,
      sym_version,
    ACTIONS(60), 2,
      sym_raw_string_literal,
      sym__identifier,
    STATE(7), 2,
      sym_retract_spec,
      aux_sym_retract_directive_repeat1,
    STATE(109), 3,
      sym__string_literal,
      sym_interpreted_string_literal,
      sym__string_or_ident,
  [170] = 8,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    ACTIONS(56), 1,
      anon_sym_LBRACK,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    STATE(111), 1,
      sym_version,
    ACTIONS(50), 2,
      sym_raw_string_literal,
      sym__identifier,
    STATE(6), 2,
      sym_retract_spec,
      aux_sym_retract_directive_repeat1,
    STATE(109), 3,
      sym__string_literal,
      sym_interpreted_string_literal,
      sym__string_or_ident,
  [199] = 7,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    STATE(64), 1,
      sym_module_path,
    ACTIONS(73), 2,
      sym_raw_string_literal,
      sym__identifier,
    STATE(12), 2,
      sym_exclude_spec,
      aux_sym_exclude_directive_repeat1,
    STATE(91), 3,
      sym__string_literal,
      sym_interpreted_string_literal,
      sym__string_or_ident,
  [225] = 8,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    STATE(32), 1,
      sym_retract_spec,
    STATE(93), 1,
      sym_version,
    ACTIONS(50), 2,
      sym_raw_string_literal,
      sym__identifier,
    STATE(109), 3,
      sym__string_literal,
      sym_interpreted_string_literal,
      sym__string_or_ident,
  [253] = 7,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    STATE(65), 1,
      sym_module_path,
    ACTIONS(73), 2,
      sym_raw_string_literal,
      sym__identifier,
    STATE(14), 2,
      sym_require_spec,
      aux_sym_require_directive_repeat1,
    STATE(91), 3,
      sym__string_literal,
      sym_interpreted_string_literal,
      sym__string_or_ident,
  [279] = 7,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    STATE(64), 1,
      sym_module_path,
    ACTIONS(73), 2,
      sym_raw_string_literal,
      sym__identifier,
    STATE(16), 2,
      sym_exclude_spec,
      aux_sym_exclude_directive_repeat1,
    STATE(91), 3,
      sym__string_literal,
      sym_interpreted_string_literal,
      sym__string_or_ident,
  [305] = 7,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    ACTIONS(93), 1,
      sym_comment,
    STATE(52), 1,
      sym_module_path,
    ACTIONS(87), 2,
      sym_raw_string_literal,
      sym__identifier,
    STATE(17), 2,
      sym_replace_spec,
      aux_sym_replace_directive_repeat1,
    STATE(72), 3,
      sym__string_literal,
      sym_interpreted_string_literal,
      sym__string_or_ident,
  [331] = 7,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
    STATE(65), 1,
      sym_module_path,
    ACTIONS(95), 2,
      sym_raw_string_literal,
      sym__identifier,
    STATE(14), 2,
      sym_require_spec,
      aux_sym_require_directive_repeat1,
    STATE(91), 3,
      sym__string_literal,
      sym_interpreted_string_literal,
      sym__string_or_ident,
  [357] = 7,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    STATE(65), 1,
      sym_module_path,
    ACTIONS(73), 2,
      sym_raw_string_literal,
      sym__identifier,
    STATE(11), 2,
      sym_require_spec,
      aux_sym_require_directive_repeat1,
    STATE(91), 3,
      sym__string_literal,
      sym_interpreted_string_literal,
      sym__string_or_ident,
  [383] = 7,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      anon_sym_RPAREN,
    STATE(64), 1,
      sym_module_path,
    ACTIONS(105), 2,
      sym_raw_string_literal,
      sym__identifier,
    STATE(16), 2,
      sym_exclude_spec,
      aux_sym_exclude_directive_repeat1,
    STATE(91), 3,
      sym__string_literal,
      sym_interpreted_string_literal,
      sym__string_or_ident,
  [409] = 7,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(113), 1,
      anon_sym_RPAREN,
    ACTIONS(115), 1,
      sym_comment,
    STATE(52), 1,
      sym_module_path,
    ACTIONS(87), 2,
      sym_raw_string_literal,
      sym__identifier,
    STATE(18), 2,
      sym_replace_spec,
      aux_sym_replace_directive_repeat1,
    STATE(72), 3,
      sym__string_literal,
      sym_interpreted_string_literal,
      sym__string_or_ident,
  [435] = 7,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(123), 1,
      anon_sym_RPAREN,
    ACTIONS(125), 1,
      sym_comment,
    STATE(52), 1,
      sym_module_path,
    ACTIONS(117), 2,
      sym_raw_string_literal,
      sym__identifier,
    STATE(18), 2,
      sym_replace_spec,
      aux_sym_replace_directive_repeat1,
    STATE(72), 3,
      sym__string_literal,
      sym_interpreted_string_literal,
      sym__string_or_ident,
  [461] = 7,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym_module_path,
    STATE(27), 1,
      sym_replace_spec,
    ACTIONS(87), 2,
      sym_raw_string_literal,
      sym__identifier,
    STATE(72), 3,
      sym__string_literal,
      sym_interpreted_string_literal,
      sym__string_or_ident,
  [486] = 7,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    STATE(25), 1,
      sym_exclude_spec,
    STATE(63), 1,
      sym_module_path,
    ACTIONS(73), 2,
      sym_raw_string_literal,
      sym__identifier,
    STATE(91), 3,
      sym__string_literal,
      sym_interpreted_string_literal,
      sym__string_or_ident,
  [511] = 7,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_require_spec,
    STATE(61), 1,
      sym_module_path,
    ACTIONS(73), 2,
      sym_raw_string_literal,
      sym__identifier,
    STATE(91), 3,
      sym__string_literal,
      sym_interpreted_string_literal,
      sym__string_or_ident,
  [536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 8,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_go,
      anon_sym_toolchain,
      anon_sym_require,
      anon_sym_exclude,
      anon_sym_replace,
      anon_sym_retract,
  [550] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 8,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_go,
      anon_sym_toolchain,
      anon_sym_require,
      anon_sym_exclude,
      anon_sym_replace,
      anon_sym_retract,
  [564] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 8,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_go,
      anon_sym_toolchain,
      anon_sym_require,
      anon_sym_exclude,
      anon_sym_replace,
      anon_sym_retract,
  [578] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 8,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_go,
      anon_sym_toolchain,
      anon_sym_require,
      anon_sym_exclude,
      anon_sym_replace,
      anon_sym_retract,
  [592] = 6,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_DQUOTE,
    ACTIONS(146), 1,
      anon_sym_EQ_GT,
    STATE(112), 1,
      sym_version,
    ACTIONS(142), 2,
      sym_raw_string_literal,
      sym__identifier,
    STATE(92), 3,
      sym__string_literal,
      sym_interpreted_string_literal,
      sym__string_or_ident,
  [614] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 8,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_go,
      anon_sym_toolchain,
      anon_sym_require,
      anon_sym_exclude,
      anon_sym_replace,
      anon_sym_retract,
  [628] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 8,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_go,
      anon_sym_toolchain,
      anon_sym_require,
      anon_sym_exclude,
      anon_sym_replace,
      anon_sym_retract,
  [642] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 8,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_go,
      anon_sym_toolchain,
      anon_sym_require,
      anon_sym_exclude,
      anon_sym_replace,
      anon_sym_retract,
  [656] = 6,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_DQUOTE,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    STATE(44), 1,
      sym_module_path,
    ACTIONS(154), 2,
      sym_raw_string_literal,
      sym__identifier,
    STATE(22), 3,
      sym__string_literal,
      sym_interpreted_string_literal,
      sym__string_or_ident,
  [678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 8,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_go,
      anon_sym_toolchain,
      anon_sym_require,
      anon_sym_exclude,
      anon_sym_replace,
      anon_sym_retract,
  [692] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 8,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_go,
      anon_sym_toolchain,
      anon_sym_require,
      anon_sym_exclude,
      anon_sym_replace,
      anon_sym_retract,
  [706] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 8,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_go,
      anon_sym_toolchain,
      anon_sym_require,
      anon_sym_exclude,
      anon_sym_replace,
      anon_sym_retract,
  [720] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 8,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_go,
      anon_sym_toolchain,
      anon_sym_require,
      anon_sym_exclude,
      anon_sym_replace,
      anon_sym_retract,
  [734] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 8,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_go,
      anon_sym_toolchain,
      anon_sym_require,
      anon_sym_exclude,
      anon_sym_replace,
      anon_sym_retract,
  [748] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 8,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_go,
      anon_sym_toolchain,
      anon_sym_require,
      anon_sym_exclude,
      anon_sym_replace,
      anon_sym_retract,
  [762] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 8,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_go,
      anon_sym_toolchain,
      anon_sym_require,
      anon_sym_exclude,
      anon_sym_replace,
      anon_sym_retract,
  [776] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 8,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_go,
      anon_sym_toolchain,
      anon_sym_require,
      anon_sym_exclude,
      anon_sym_replace,
      anon_sym_retract,
  [790] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 8,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_go,
      anon_sym_toolchain,
      anon_sym_require,
      anon_sym_exclude,
      anon_sym_replace,
      anon_sym_retract,
  [804] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 8,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_go,
      anon_sym_toolchain,
      anon_sym_require,
      anon_sym_exclude,
      anon_sym_replace,
      anon_sym_retract,
  [818] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 8,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_go,
      anon_sym_toolchain,
      anon_sym_require,
      anon_sym_exclude,
      anon_sym_replace,
      anon_sym_retract,
  [832] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 8,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_go,
      anon_sym_toolchain,
      anon_sym_require,
      anon_sym_exclude,
      anon_sym_replace,
      anon_sym_retract,
  [846] = 7,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_raw_string_literal,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      sym__identifier,
    STATE(62), 1,
      sym_module_path,
    STATE(126), 1,
      sym_file_path,
    STATE(91), 3,
      sym__string_literal,
      sym_interpreted_string_literal,
      sym__string_or_ident,
  [870] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 8,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_go,
      anon_sym_toolchain,
      anon_sym_require,
      anon_sym_exclude,
      anon_sym_replace,
      anon_sym_retract,
  [884] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 8,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_go,
      anon_sym_toolchain,
      anon_sym_require,
      anon_sym_exclude,
      anon_sym_replace,
      anon_sym_retract,
  [898] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 8,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_go,
      anon_sym_toolchain,
      anon_sym_require,
      anon_sym_exclude,
      anon_sym_replace,
      anon_sym_retract,
  [912] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 8,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_go,
      anon_sym_toolchain,
      anon_sym_require,
      anon_sym_exclude,
      anon_sym_replace,
      anon_sym_retract,
  [926] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 8,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_go,
      anon_sym_toolchain,
      anon_sym_require,
      anon_sym_exclude,
      anon_sym_replace,
      anon_sym_retract,
  [940] = 7,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_raw_string_literal,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      sym__identifier,
    STATE(60), 1,
      sym_module_path,
    STATE(115), 1,
      sym_file_path,
    STATE(91), 3,
      sym__string_literal,
      sym_interpreted_string_literal,
      sym__string_or_ident,
  [964] = 7,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_raw_string_literal,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      sym__identifier,
    STATE(59), 1,
      sym_module_path,
    STATE(116), 1,
      sym_file_path,
    STATE(91), 3,
      sym__string_literal,
      sym_interpreted_string_literal,
      sym__string_or_ident,
  [988] = 7,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_raw_string_literal,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      sym__identifier,
    STATE(68), 1,
      sym_module_path,
    STATE(110), 1,
      sym_file_path,
    STATE(91), 3,
      sym__string_literal,
      sym_interpreted_string_literal,
      sym__string_or_ident,
  [1012] = 6,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_EQ_GT,
    STATE(131), 1,
      sym_version,
    ACTIONS(142), 2,
      sym_raw_string_literal,
      sym__identifier,
    STATE(92), 3,
      sym__string_literal,
      sym_interpreted_string_literal,
      sym__string_or_ident,
  [1034] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 8,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_go,
      anon_sym_toolchain,
      anon_sym_require,
      anon_sym_exclude,
      anon_sym_replace,
      anon_sym_retract,
  [1048] = 5,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_DQUOTE,
    STATE(105), 1,
      sym_version,
    ACTIONS(142), 2,
      sym_raw_string_literal,
      sym__identifier,
    STATE(92), 3,
      sym__string_literal,
      sym_interpreted_string_literal,
      sym__string_or_ident,
  [1067] = 5,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    ACTIONS(58), 1,
      sym_comment,
    STATE(134), 1,
      sym_module_path,
    ACTIONS(198), 2,
      sym_raw_string_literal,
      sym__identifier,
    STATE(107), 3,
      sym__string_literal,
      sym_interpreted_string_literal,
      sym__string_or_ident,
  [1086] = 5,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_DQUOTE,
    STATE(133), 1,
      sym_version,
    ACTIONS(142), 2,
      sym_raw_string_literal,
      sym__identifier,
    STATE(92), 3,
      sym__string_literal,
      sym_interpreted_string_literal,
      sym__string_or_ident,
  [1105] = 5,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_DQUOTE,
    STATE(129), 1,
      sym_version,
    ACTIONS(142), 2,
      sym_raw_string_literal,
      sym__identifier,
    STATE(92), 3,
      sym__string_literal,
      sym_interpreted_string_literal,
      sym__string_or_ident,
  [1124] = 5,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_DQUOTE,
    STATE(38), 1,
      sym_toolchain_name,
    ACTIONS(200), 2,
      sym_raw_string_literal,
      sym__identifier,
    STATE(39), 3,
      sym__string_literal,
      sym_interpreted_string_literal,
      sym__string_or_ident,
  [1143] = 5,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    ACTIONS(58), 1,
      sym_comment,
    STATE(117), 1,
      sym_version,
    ACTIONS(50), 2,
      sym_raw_string_literal,
      sym__identifier,
    STATE(109), 3,
      sym__string_literal,
      sym_interpreted_string_literal,
      sym__string_or_ident,
  [1162] = 5,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    ACTIONS(58), 1,
      sym_comment,
    STATE(116), 1,
      sym_version,
    ACTIONS(50), 2,
      sym_raw_string_literal,
      sym__identifier,
    STATE(109), 3,
      sym__string_literal,
      sym_interpreted_string_literal,
      sym__string_or_ident,
  [1181] = 5,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    ACTIONS(58), 1,
      sym_comment,
    STATE(121), 1,
      sym_version,
    ACTIONS(50), 2,
      sym_raw_string_literal,
      sym__identifier,
    STATE(109), 3,
      sym__string_literal,
      sym_interpreted_string_literal,
      sym__string_or_ident,
  [1200] = 5,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    ACTIONS(58), 1,
      sym_comment,
    STATE(110), 1,
      sym_version,
    ACTIONS(50), 2,
      sym_raw_string_literal,
      sym__identifier,
    STATE(109), 3,
      sym__string_literal,
      sym_interpreted_string_literal,
      sym__string_or_ident,
  [1219] = 5,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    ACTIONS(58), 1,
      sym_comment,
    STATE(122), 1,
      sym_version,
    ACTIONS(50), 2,
      sym_raw_string_literal,
      sym__identifier,
    STATE(109), 3,
      sym__string_literal,
      sym_interpreted_string_literal,
      sym__string_or_ident,
  [1238] = 5,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    ACTIONS(58), 1,
      sym_comment,
    STATE(94), 1,
      sym_version,
    ACTIONS(50), 2,
      sym_raw_string_literal,
      sym__identifier,
    STATE(109), 3,
      sym__string_literal,
      sym_interpreted_string_literal,
      sym__string_or_ident,
  [1257] = 5,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    ACTIONS(58), 1,
      sym_comment,
    STATE(113), 1,
      sym_version,
    ACTIONS(50), 2,
      sym_raw_string_literal,
      sym__identifier,
    STATE(109), 3,
      sym__string_literal,
      sym_interpreted_string_literal,
      sym__string_or_ident,
  [1276] = 5,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    ACTIONS(58), 1,
      sym_comment,
    STATE(100), 1,
      sym_go_version,
    ACTIONS(202), 2,
      sym_raw_string_literal,
      sym__identifier,
    STATE(98), 3,
      sym__string_literal,
      sym_interpreted_string_literal,
      sym__string_or_ident,
  [1295] = 5,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_DQUOTE,
    STATE(96), 1,
      sym_version,
    ACTIONS(142), 2,
      sym_raw_string_literal,
      sym__identifier,
    STATE(92), 3,
      sym__string_literal,
      sym_interpreted_string_literal,
      sym__string_or_ident,
  [1314] = 5,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    ACTIONS(58), 1,
      sym_comment,
    STATE(101), 1,
      sym_version,
    ACTIONS(50), 2,
      sym_raw_string_literal,
      sym__identifier,
    STATE(109), 3,
      sym__string_literal,
      sym_interpreted_string_literal,
      sym__string_or_ident,
  [1333] = 3,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_LBRACK,
    ACTIONS(204), 4,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      sym__identifier,
      anon_sym_RPAREN,
  [1346] = 3,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(206), 4,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      sym__identifier,
      anon_sym_RPAREN,
  [1359] = 4,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
    STATE(78), 1,
      aux_sym_interpreted_string_literal_repeat1,
    ACTIONS(210), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [1373] = 2,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(212), 4,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      sym__identifier,
      anon_sym_EQ_GT,
  [1383] = 3,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_LF,
    ACTIONS(214), 3,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      sym__identifier,
  [1395] = 4,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_DQUOTE,
    STATE(78), 1,
      aux_sym_interpreted_string_literal_repeat1,
    ACTIONS(210), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [1409] = 4,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    STATE(74), 1,
      aux_sym_interpreted_string_literal_repeat1,
    ACTIONS(222), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [1423] = 2,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(224), 4,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      sym__identifier,
      anon_sym_EQ_GT,
  [1433] = 2,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(226), 4,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      sym__identifier,
      anon_sym_EQ_GT,
  [1443] = 4,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_DQUOTE,
    STATE(78), 1,
      aux_sym_interpreted_string_literal_repeat1,
    ACTIONS(230), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [1457] = 4,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_DQUOTE,
    STATE(78), 1,
      aux_sym_interpreted_string_literal_repeat1,
    ACTIONS(210), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [1471] = 2,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(235), 4,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      sym__identifier,
      anon_sym_RPAREN,
  [1481] = 2,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(237), 4,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      sym__identifier,
      anon_sym_RPAREN,
  [1491] = 4,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_DQUOTE,
    STATE(79), 1,
      aux_sym_interpreted_string_literal_repeat1,
    ACTIONS(241), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [1505] = 4,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_DQUOTE,
    STATE(84), 1,
      aux_sym_interpreted_string_literal_repeat1,
    ACTIONS(245), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [1519] = 4,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_DQUOTE,
    STATE(78), 1,
      aux_sym_interpreted_string_literal_repeat1,
    ACTIONS(210), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [1533] = 1,
    ACTIONS(249), 5,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      sym__identifier,
      anon_sym_RPAREN,
      sym_comment,
  [1541] = 4,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    STATE(71), 1,
      aux_sym_interpreted_string_literal_repeat1,
    ACTIONS(253), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [1555] = 1,
    ACTIONS(255), 5,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      sym__identifier,
      anon_sym_RPAREN,
      sym_comment,
  [1563] = 1,
    ACTIONS(257), 5,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      sym__identifier,
      anon_sym_RPAREN,
      sym_comment,
  [1571] = 2,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(226), 3,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      sym__identifier,
  [1580] = 2,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(224), 3,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      sym__identifier,
  [1589] = 2,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(212), 3,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      sym__identifier,
  [1598] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 3,
      anon_sym_EQ_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1607] = 2,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_LF,
  [1614] = 2,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LF,
  [1621] = 2,
    ACTIONS(48), 1,
      anon_sym_LF,
    ACTIONS(58), 1,
      sym_comment,
  [1628] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_COMMA,
  [1635] = 2,
    ACTIONS(46), 1,
      anon_sym_LF,
    ACTIONS(58), 1,
      sym_comment,
  [1642] = 2,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_LF,
  [1649] = 2,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_LF,
  [1656] = 2,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_LF,
  [1663] = 2,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_LF,
  [1670] = 2,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_LF,
  [1677] = 2,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_LF,
  [1684] = 2,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_LF,
  [1691] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_RBRACK,
  [1698] = 2,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_LF,
  [1705] = 2,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_LF,
  [1712] = 2,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_LF,
  [1719] = 2,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_LF,
  [1726] = 2,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_LF,
  [1733] = 2,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_LF,
  [1740] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_EQ_GT,
  [1747] = 2,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_LF,
  [1754] = 2,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_LF,
  [1761] = 2,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_LF,
  [1768] = 2,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_LF,
  [1775] = 2,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_LF,
  [1782] = 2,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_LF,
  [1789] = 2,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_LF,
  [1796] = 2,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_LF,
  [1803] = 2,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_LF,
  [1810] = 2,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_LF,
  [1817] = 2,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_LF,
  [1824] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_RPAREN,
  [1831] = 2,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_LF,
  [1838] = 2,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_LF,
  [1845] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      ts_builtin_sym_end,
  [1852] = 2,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_LF,
  [1859] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_RBRACK,
  [1866] = 2,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_LF,
  [1873] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_EQ_GT,
  [1880] = 2,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_LF,
  [1887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_COMMA,
  [1894] = 2,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 39,
  [SMALL_STATE(4)] = 78,
  [SMALL_STATE(5)] = 95,
  [SMALL_STATE(6)] = 112,
  [SMALL_STATE(7)] = 141,
  [SMALL_STATE(8)] = 170,
  [SMALL_STATE(9)] = 199,
  [SMALL_STATE(10)] = 225,
  [SMALL_STATE(11)] = 253,
  [SMALL_STATE(12)] = 279,
  [SMALL_STATE(13)] = 305,
  [SMALL_STATE(14)] = 331,
  [SMALL_STATE(15)] = 357,
  [SMALL_STATE(16)] = 383,
  [SMALL_STATE(17)] = 409,
  [SMALL_STATE(18)] = 435,
  [SMALL_STATE(19)] = 461,
  [SMALL_STATE(20)] = 486,
  [SMALL_STATE(21)] = 511,
  [SMALL_STATE(22)] = 536,
  [SMALL_STATE(23)] = 550,
  [SMALL_STATE(24)] = 564,
  [SMALL_STATE(25)] = 578,
  [SMALL_STATE(26)] = 592,
  [SMALL_STATE(27)] = 614,
  [SMALL_STATE(28)] = 628,
  [SMALL_STATE(29)] = 642,
  [SMALL_STATE(30)] = 656,
  [SMALL_STATE(31)] = 678,
  [SMALL_STATE(32)] = 692,
  [SMALL_STATE(33)] = 706,
  [SMALL_STATE(34)] = 720,
  [SMALL_STATE(35)] = 734,
  [SMALL_STATE(36)] = 748,
  [SMALL_STATE(37)] = 762,
  [SMALL_STATE(38)] = 776,
  [SMALL_STATE(39)] = 790,
  [SMALL_STATE(40)] = 804,
  [SMALL_STATE(41)] = 818,
  [SMALL_STATE(42)] = 832,
  [SMALL_STATE(43)] = 846,
  [SMALL_STATE(44)] = 870,
  [SMALL_STATE(45)] = 884,
  [SMALL_STATE(46)] = 898,
  [SMALL_STATE(47)] = 912,
  [SMALL_STATE(48)] = 926,
  [SMALL_STATE(49)] = 940,
  [SMALL_STATE(50)] = 964,
  [SMALL_STATE(51)] = 988,
  [SMALL_STATE(52)] = 1012,
  [SMALL_STATE(53)] = 1034,
  [SMALL_STATE(54)] = 1048,
  [SMALL_STATE(55)] = 1067,
  [SMALL_STATE(56)] = 1086,
  [SMALL_STATE(57)] = 1105,
  [SMALL_STATE(58)] = 1124,
  [SMALL_STATE(59)] = 1143,
  [SMALL_STATE(60)] = 1162,
  [SMALL_STATE(61)] = 1181,
  [SMALL_STATE(62)] = 1200,
  [SMALL_STATE(63)] = 1219,
  [SMALL_STATE(64)] = 1238,
  [SMALL_STATE(65)] = 1257,
  [SMALL_STATE(66)] = 1276,
  [SMALL_STATE(67)] = 1295,
  [SMALL_STATE(68)] = 1314,
  [SMALL_STATE(69)] = 1333,
  [SMALL_STATE(70)] = 1346,
  [SMALL_STATE(71)] = 1359,
  [SMALL_STATE(72)] = 1373,
  [SMALL_STATE(73)] = 1383,
  [SMALL_STATE(74)] = 1395,
  [SMALL_STATE(75)] = 1409,
  [SMALL_STATE(76)] = 1423,
  [SMALL_STATE(77)] = 1433,
  [SMALL_STATE(78)] = 1443,
  [SMALL_STATE(79)] = 1457,
  [SMALL_STATE(80)] = 1471,
  [SMALL_STATE(81)] = 1481,
  [SMALL_STATE(82)] = 1491,
  [SMALL_STATE(83)] = 1505,
  [SMALL_STATE(84)] = 1519,
  [SMALL_STATE(85)] = 1533,
  [SMALL_STATE(86)] = 1541,
  [SMALL_STATE(87)] = 1555,
  [SMALL_STATE(88)] = 1563,
  [SMALL_STATE(89)] = 1571,
  [SMALL_STATE(90)] = 1580,
  [SMALL_STATE(91)] = 1589,
  [SMALL_STATE(92)] = 1598,
  [SMALL_STATE(93)] = 1607,
  [SMALL_STATE(94)] = 1614,
  [SMALL_STATE(95)] = 1621,
  [SMALL_STATE(96)] = 1628,
  [SMALL_STATE(97)] = 1635,
  [SMALL_STATE(98)] = 1642,
  [SMALL_STATE(99)] = 1649,
  [SMALL_STATE(100)] = 1656,
  [SMALL_STATE(101)] = 1663,
  [SMALL_STATE(102)] = 1670,
  [SMALL_STATE(103)] = 1677,
  [SMALL_STATE(104)] = 1684,
  [SMALL_STATE(105)] = 1691,
  [SMALL_STATE(106)] = 1698,
  [SMALL_STATE(107)] = 1705,
  [SMALL_STATE(108)] = 1712,
  [SMALL_STATE(109)] = 1719,
  [SMALL_STATE(110)] = 1726,
  [SMALL_STATE(111)] = 1733,
  [SMALL_STATE(112)] = 1740,
  [SMALL_STATE(113)] = 1747,
  [SMALL_STATE(114)] = 1754,
  [SMALL_STATE(115)] = 1761,
  [SMALL_STATE(116)] = 1768,
  [SMALL_STATE(117)] = 1775,
  [SMALL_STATE(118)] = 1782,
  [SMALL_STATE(119)] = 1789,
  [SMALL_STATE(120)] = 1796,
  [SMALL_STATE(121)] = 1803,
  [SMALL_STATE(122)] = 1810,
  [SMALL_STATE(123)] = 1817,
  [SMALL_STATE(124)] = 1824,
  [SMALL_STATE(125)] = 1831,
  [SMALL_STATE(126)] = 1838,
  [SMALL_STATE(127)] = 1845,
  [SMALL_STATE(128)] = 1852,
  [SMALL_STATE(129)] = 1859,
  [SMALL_STATE(130)] = 1866,
  [SMALL_STATE(131)] = 1873,
  [SMALL_STATE(132)] = 1880,
  [SMALL_STATE(133)] = 1887,
  [SMALL_STATE(134)] = 1894,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(30),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(66),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(58),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted_string_literal, 3),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted_string_literal, 2),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_retract_directive_repeat1, 2), SHIFT_REPEAT(109),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_retract_directive_repeat1, 2), SHIFT_REPEAT(75),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_retract_directive_repeat1, 2),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_retract_directive_repeat1, 2), SHIFT_REPEAT(56),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_require_directive_repeat1, 2), SHIFT_REPEAT(91),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_require_directive_repeat1, 2), SHIFT_REPEAT(82),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_require_directive_repeat1, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_exclude_directive_repeat1, 2), SHIFT_REPEAT(91),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_exclude_directive_repeat1, 2), SHIFT_REPEAT(82),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_exclude_directive_repeat1, 2),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_replace_directive_repeat1, 2), SHIFT_REPEAT(72),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_replace_directive_repeat1, 2), SHIFT_REPEAT(83),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_replace_directive_repeat1, 2),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_replace_directive_repeat1, 2), SHIFT_REPEAT(18),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_path, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_go_directive, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_directive, 6),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exclude_directive, 2),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replace_directive, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retract_directive, 5),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replace_spec, 4),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replace_directive, 5),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retract_directive, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_require_directive, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exclude_directive, 6),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replace_directive, 6),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exclude_directive, 5),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_require_directive, 6),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_toolchain_directive, 2, .production_id = 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_toolchain_name, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replace_spec, 5),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_require_directive, 5),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retract_directive, 6),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_directive, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replace_spec, 6),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exclude_spec, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retract_spec, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retract_spec, 6),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_require_spec, 3),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retract_spec, 2),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retract_spec, 6),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_path, 1),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_or_ident, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 1),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted_string_literal, 3),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted_string_literal, 2),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 2),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 2), SHIFT_REPEAT(78),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_require_spec, 3),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exclude_spec, 3),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replace_spec, 6),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replace_spec, 5),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replace_spec, 4),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_go_version, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [321] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
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

TS_PUBLIC const TSLanguage *tree_sitter_gomod() {
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
