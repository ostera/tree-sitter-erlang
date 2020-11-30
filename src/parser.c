#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 37
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 43
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  aux_sym_quoted_atom_token1 = 1,
  aux_sym_quoted_atom_token2 = 2,
  sym_unquoted_atom = 3,
  sym_integer = 4,
  sym_float = 5,
  sym_char = 6,
  sym_string = 7,
  aux_sym_binary_string_token1 = 8,
  aux_sym_binary_string_token2 = 9,
  aux_sym_bin_sized_token1 = 10,
  aux_sym_bin_type_list_token1 = 11,
  anon_sym_DASH = 12,
  anon_sym_big = 13,
  anon_sym_binary = 14,
  anon_sym_bits = 15,
  anon_sym_bitstring = 16,
  anon_sym_bytes = 17,
  anon_sym_float = 18,
  anon_sym_integer = 19,
  anon_sym_little = 20,
  anon_sym_native = 21,
  anon_sym_signed = 22,
  anon_sym_unsigned = 23,
  anon_sym_utf16 = 24,
  anon_sym_utf32 = 25,
  anon_sym_utf8 = 26,
  anon_sym_LBRACE = 27,
  anon_sym_COMMA = 28,
  anon_sym_RBRACE = 29,
  sym_source_file = 30,
  sym__structure_item = 31,
  sym_term = 32,
  sym_atom = 33,
  sym_quoted_atom = 34,
  sym_binary_string = 35,
  sym_bin_sized = 36,
  sym_bin_type_list = 37,
  sym_bin_type = 38,
  sym_tuple = 39,
  aux_sym_source_file_repeat1 = 40,
  aux_sym_bin_type_list_repeat1 = 41,
  aux_sym_tuple_repeat1 = 42,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_quoted_atom_token1] = "quoted_atom_token1",
  [aux_sym_quoted_atom_token2] = "quoted_atom_token2",
  [sym_unquoted_atom] = "unquoted_atom",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_char] = "char",
  [sym_string] = "string",
  [aux_sym_binary_string_token1] = "binary_string_token1",
  [aux_sym_binary_string_token2] = "binary_string_token2",
  [aux_sym_bin_sized_token1] = "bin_sized_token1",
  [aux_sym_bin_type_list_token1] = "bin_type_list_token1",
  [anon_sym_DASH] = "-",
  [anon_sym_big] = "big",
  [anon_sym_binary] = "binary",
  [anon_sym_bits] = "bits",
  [anon_sym_bitstring] = "bitstring",
  [anon_sym_bytes] = "bytes",
  [anon_sym_float] = "float",
  [anon_sym_integer] = "integer",
  [anon_sym_little] = "little",
  [anon_sym_native] = "native",
  [anon_sym_signed] = "signed",
  [anon_sym_unsigned] = "unsigned",
  [anon_sym_utf16] = "utf16",
  [anon_sym_utf32] = "utf32",
  [anon_sym_utf8] = "utf8",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [sym_source_file] = "source_file",
  [sym__structure_item] = "_structure_item",
  [sym_term] = "term",
  [sym_atom] = "atom",
  [sym_quoted_atom] = "quoted_atom",
  [sym_binary_string] = "binary_string",
  [sym_bin_sized] = "bin_sized",
  [sym_bin_type_list] = "bin_type_list",
  [sym_bin_type] = "bin_type",
  [sym_tuple] = "tuple",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_bin_type_list_repeat1] = "bin_type_list_repeat1",
  [aux_sym_tuple_repeat1] = "tuple_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_quoted_atom_token1] = aux_sym_quoted_atom_token1,
  [aux_sym_quoted_atom_token2] = aux_sym_quoted_atom_token2,
  [sym_unquoted_atom] = sym_unquoted_atom,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [sym_char] = sym_char,
  [sym_string] = sym_string,
  [aux_sym_binary_string_token1] = aux_sym_binary_string_token1,
  [aux_sym_binary_string_token2] = aux_sym_binary_string_token2,
  [aux_sym_bin_sized_token1] = aux_sym_bin_sized_token1,
  [aux_sym_bin_type_list_token1] = aux_sym_bin_type_list_token1,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_big] = anon_sym_big,
  [anon_sym_binary] = anon_sym_binary,
  [anon_sym_bits] = anon_sym_bits,
  [anon_sym_bitstring] = anon_sym_bitstring,
  [anon_sym_bytes] = anon_sym_bytes,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_integer] = anon_sym_integer,
  [anon_sym_little] = anon_sym_little,
  [anon_sym_native] = anon_sym_native,
  [anon_sym_signed] = anon_sym_signed,
  [anon_sym_unsigned] = anon_sym_unsigned,
  [anon_sym_utf16] = anon_sym_utf16,
  [anon_sym_utf32] = anon_sym_utf32,
  [anon_sym_utf8] = anon_sym_utf8,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_source_file] = sym_source_file,
  [sym__structure_item] = sym__structure_item,
  [sym_term] = sym_term,
  [sym_atom] = sym_atom,
  [sym_quoted_atom] = sym_quoted_atom,
  [sym_binary_string] = sym_binary_string,
  [sym_bin_sized] = sym_bin_sized,
  [sym_bin_type_list] = sym_bin_type_list,
  [sym_bin_type] = sym_bin_type,
  [sym_tuple] = sym_tuple,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_bin_type_list_repeat1] = aux_sym_bin_type_list_repeat1,
  [aux_sym_tuple_repeat1] = aux_sym_tuple_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_quoted_atom_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_atom_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_unquoted_atom] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_binary_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_binary_string_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bin_sized_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bin_type_list_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_big] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_binary] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bits] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bitstring] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_integer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_little] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_native] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_signed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unsigned] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_utf16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_utf32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_utf8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__structure_item] = {
    .visible = false,
    .named = true,
  },
  [sym_term] = {
    .visible = true,
    .named = true,
  },
  [sym_atom] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_atom] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_string] = {
    .visible = true,
    .named = true,
  },
  [sym_bin_sized] = {
    .visible = true,
    .named = true,
  },
  [sym_bin_type_list] = {
    .visible = true,
    .named = true,
  },
  [sym_bin_type] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bin_type_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tuple_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_value = 1,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[2] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_value, 0},
};

static TSSymbol ts_alias_sequences[2][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool aux_sym_quoted_atom_token2_character_set_1(int32_t lookahead) {
  return
    ('!' <= lookahead && lookahead <= '#') ||
    lookahead == '%' ||
    lookahead == '&' ||
    ('(' <= lookahead && lookahead <= '*') ||
    lookahead == '.' ||
    ('0' <= lookahead && lookahead <= '9') ||
    ('@' <= lookahead && lookahead <= '[') ||
    (']' <= lookahead && lookahead <= '_') ||
    ('a' <= lookahead && lookahead <= '{') ||
    lookahead == '}';
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(59);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '$') ADVANCE(57);
      if (lookahead == '\'') ADVANCE(60);
      if (lookahead == ',') ADVANCE(151);
      if (lookahead == '-') ADVANCE(121);
      if (lookahead == '/') ADVANCE(120);
      if (lookahead == ':') ADVANCE(119);
      if (lookahead == '<') ADVANCE(5);
      if (lookahead == '>') ADVANCE(6);
      if (lookahead == 'b') ADVANCE(83);
      if (lookahead == 'f') ADVANCE(89);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == 'l') ADVANCE(86);
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead == 's') ADVANCE(84);
      if (lookahead == 'u') ADVANCE(91);
      if (lookahead == '{') ADVANCE(150);
      if (lookahead == '}') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '1') ADVANCE(4);
      if (lookahead == '3') ADVANCE(3);
      if (lookahead == '8') ADVANCE(148);
      END_STATE();
    case 3:
      if (lookahead == '2') ADVANCE(146);
      END_STATE();
    case 4:
      if (lookahead == '6') ADVANCE(144);
      END_STATE();
    case 5:
      if (lookahead == '<') ADVANCE(117);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(118);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 10:
      if (lookahead == 'b') ADVANCE(26);
      if (lookahead == 'f') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(38);
      if (lookahead == 'l') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(8);
      if (lookahead == 's') ADVANCE(27);
      if (lookahead == 'u') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(140);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(142);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 20:
      if (lookahead == 'f') ADVANCE(2);
      END_STATE();
    case 21:
      if (lookahead == 'g') ADVANCE(122);
      if (lookahead == 'n') ADVANCE(7);
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 22:
      if (lookahead == 'g') ADVANCE(128);
      END_STATE();
    case 23:
      if (lookahead == 'g') ADVANCE(36);
      END_STATE();
    case 24:
      if (lookahead == 'g') ADVANCE(19);
      END_STATE();
    case 25:
      if (lookahead == 'g') ADVANCE(37);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(21);
      if (lookahead == 'y') ADVANCE(46);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(45);
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 43:
      if (lookahead == 's') ADVANCE(127);
      END_STATE();
    case 44:
      if (lookahead == 's') ADVANCE(130);
      END_STATE();
    case 45:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 52:
      if (lookahead == 'v') ADVANCE(15);
      END_STATE();
    case 53:
      if (lookahead == 'y') ADVANCE(124);
      END_STATE();
    case 54:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54)
      if (aux_sym_quoted_atom_token2_character_set_1(lookahead)) ADVANCE(61);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 57:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(115);
      END_STATE();
    case 58:
      if (eof) ADVANCE(59);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '$') ADVANCE(57);
      if (lookahead == '\'') ADVANCE(60);
      if (lookahead == ',') ADVANCE(151);
      if (lookahead == '<') ADVANCE(5);
      if (lookahead == '{') ADVANCE(150);
      if (lookahead == '}') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token1);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_quoted_atom_token2);
      if (aux_sym_quoted_atom_token2_character_set_1(lookahead)) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == '1') ADVANCE(64);
      if (lookahead == '3') ADVANCE(63);
      if (lookahead == '8') ADVANCE(149);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == '2') ADVANCE(147);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == '6') ADVANCE(145);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'a') ADVANCE(97);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'a') ADVANCE(107);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'a') ADVANCE(104);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'd') ADVANCE(141);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'd') ADVANCE(143);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'e') ADVANCE(68);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'e') ADVANCE(137);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'e') ADVANCE(139);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'e') ADVANCE(69);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'e') ADVANCE(101);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'f') ADVANCE(62);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'g') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(65);
      if (lookahead == 't') ADVANCE(100);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'g') ADVANCE(129);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'g') ADVANCE(93);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'g') ADVANCE(76);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'g') ADVANCE(94);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'i') ADVANCE(78);
      if (lookahead == 'y') ADVANCE(103);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'i') ADVANCE(80);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'i') ADVANCE(109);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'i') ADVANCE(92);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'i') ADVANCE(82);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'l') ADVANCE(96);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'l') ADVANCE(71);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'n') ADVANCE(102);
      if (lookahead == 't') ADVANCE(77);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'n') ADVANCE(79);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'n') ADVANCE(74);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'n') ADVANCE(106);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'o') ADVANCE(67);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'r') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'r') ADVANCE(135);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'r') ADVANCE(87);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 's') ADVANCE(126);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 's') ADVANCE(131);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 's') ADVANCE(88);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 't') ADVANCE(75);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 't') ADVANCE(133);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 't') ADVANCE(90);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 't') ADVANCE(73);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 't') ADVANCE(85);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 't') ADVANCE(105);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'v') ADVANCE(72);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == 'y') ADVANCE(125);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_unquoted_atom);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'e') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_binary_string_token1);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_binary_string_token2);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_bin_sized_token1);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_bin_type_list_token1);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_big);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_big);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_binary);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_binary);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_bits);
      if (lookahead == 't') ADVANCE(99);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_bits);
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_bitstring);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_bitstring);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_bytes);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_integer);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_little);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_little);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_native);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_native);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_signed);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_signed);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_unsigned);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_unsigned);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_utf16);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_utf16);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_utf32);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_utf32);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_utf8);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_utf8);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 58},
  [2] = {.lex_state = 58},
  [3] = {.lex_state = 58},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 58},
  [7] = {.lex_state = 58},
  [8] = {.lex_state = 58},
  [9] = {.lex_state = 58},
  [10] = {.lex_state = 58},
  [11] = {.lex_state = 58},
  [12] = {.lex_state = 58},
  [13] = {.lex_state = 58},
  [14] = {.lex_state = 58},
  [15] = {.lex_state = 58},
  [16] = {.lex_state = 58},
  [17] = {.lex_state = 58},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 54},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_quoted_atom_token1] = ACTIONS(1),
    [sym_unquoted_atom] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_char] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [aux_sym_binary_string_token1] = ACTIONS(1),
    [aux_sym_binary_string_token2] = ACTIONS(1),
    [aux_sym_bin_sized_token1] = ACTIONS(1),
    [aux_sym_bin_type_list_token1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_big] = ACTIONS(1),
    [anon_sym_binary] = ACTIONS(1),
    [anon_sym_bits] = ACTIONS(1),
    [anon_sym_bitstring] = ACTIONS(1),
    [anon_sym_bytes] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_integer] = ACTIONS(1),
    [anon_sym_little] = ACTIONS(1),
    [anon_sym_native] = ACTIONS(1),
    [anon_sym_signed] = ACTIONS(1),
    [anon_sym_unsigned] = ACTIONS(1),
    [anon_sym_utf16] = ACTIONS(1),
    [anon_sym_utf32] = ACTIONS(1),
    [anon_sym_utf8] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(35),
    [sym__structure_item] = STATE(2),
    [sym_term] = STATE(2),
    [sym_atom] = STATE(14),
    [sym_quoted_atom] = STATE(11),
    [sym_binary_string] = STATE(14),
    [sym_tuple] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_quoted_atom_token1] = ACTIONS(5),
    [sym_unquoted_atom] = ACTIONS(7),
    [sym_integer] = ACTIONS(9),
    [sym_float] = ACTIONS(11),
    [sym_char] = ACTIONS(11),
    [sym_string] = ACTIONS(11),
    [aux_sym_binary_string_token1] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(5), 1,
      aux_sym_quoted_atom_token1,
    ACTIONS(7), 1,
      sym_unquoted_atom,
    ACTIONS(9), 1,
      sym_integer,
    ACTIONS(13), 1,
      aux_sym_binary_string_token1,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      sym_quoted_atom,
    ACTIONS(11), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(3), 3,
      sym__structure_item,
      sym_term,
      aux_sym_source_file_repeat1,
    STATE(14), 3,
      sym_atom,
      sym_binary_string,
      sym_tuple,
  [37] = 10,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      aux_sym_quoted_atom_token1,
    ACTIONS(24), 1,
      sym_unquoted_atom,
    ACTIONS(27), 1,
      sym_integer,
    ACTIONS(33), 1,
      aux_sym_binary_string_token1,
    ACTIONS(36), 1,
      anon_sym_LBRACE,
    STATE(11), 1,
      sym_quoted_atom,
    ACTIONS(30), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(3), 3,
      sym__structure_item,
      sym_term,
      aux_sym_source_file_repeat1,
    STATE(14), 3,
      sym_atom,
      sym_binary_string,
      sym_tuple,
  [74] = 3,
    ACTIONS(41), 1,
      anon_sym_bits,
    STATE(30), 1,
      sym_bin_type,
    ACTIONS(39), 13,
      anon_sym_big,
      anon_sym_binary,
      anon_sym_bitstring,
      anon_sym_bytes,
      anon_sym_float,
      anon_sym_integer,
      anon_sym_little,
      anon_sym_native,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_utf16,
      anon_sym_utf32,
      anon_sym_utf8,
  [96] = 3,
    ACTIONS(41), 1,
      anon_sym_bits,
    STATE(22), 1,
      sym_bin_type,
    ACTIONS(39), 13,
      anon_sym_big,
      anon_sym_binary,
      anon_sym_bitstring,
      anon_sym_bytes,
      anon_sym_float,
      anon_sym_integer,
      anon_sym_little,
      anon_sym_native,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_utf16,
      anon_sym_utf32,
      anon_sym_utf8,
  [118] = 10,
    ACTIONS(5), 1,
      aux_sym_quoted_atom_token1,
    ACTIONS(7), 1,
      sym_unquoted_atom,
    ACTIONS(9), 1,
      sym_integer,
    ACTIONS(13), 1,
      aux_sym_binary_string_token1,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(11), 1,
      sym_quoted_atom,
    STATE(23), 1,
      sym_term,
    ACTIONS(11), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(14), 3,
      sym_atom,
      sym_binary_string,
      sym_tuple,
  [153] = 9,
    ACTIONS(5), 1,
      aux_sym_quoted_atom_token1,
    ACTIONS(7), 1,
      sym_unquoted_atom,
    ACTIONS(9), 1,
      sym_integer,
    ACTIONS(13), 1,
      aux_sym_binary_string_token1,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    STATE(11), 1,
      sym_quoted_atom,
    STATE(29), 1,
      sym_term,
    ACTIONS(11), 3,
      sym_float,
      sym_char,
      sym_string,
    STATE(14), 3,
      sym_atom,
      sym_binary_string,
      sym_tuple,
  [185] = 2,
    ACTIONS(47), 1,
      sym_integer,
    ACTIONS(45), 10,
      ts_builtin_sym_end,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      aux_sym_binary_string_token1,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [201] = 2,
    ACTIONS(51), 1,
      sym_integer,
    ACTIONS(49), 10,
      ts_builtin_sym_end,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      aux_sym_binary_string_token1,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [217] = 2,
    ACTIONS(55), 1,
      sym_integer,
    ACTIONS(53), 10,
      ts_builtin_sym_end,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      aux_sym_binary_string_token1,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [233] = 2,
    ACTIONS(59), 1,
      sym_integer,
    ACTIONS(57), 10,
      ts_builtin_sym_end,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      aux_sym_binary_string_token1,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [249] = 2,
    ACTIONS(63), 1,
      sym_integer,
    ACTIONS(61), 10,
      ts_builtin_sym_end,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      aux_sym_binary_string_token1,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [265] = 2,
    ACTIONS(67), 1,
      sym_integer,
    ACTIONS(65), 10,
      ts_builtin_sym_end,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      aux_sym_binary_string_token1,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [281] = 2,
    ACTIONS(71), 1,
      sym_integer,
    ACTIONS(69), 10,
      ts_builtin_sym_end,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      aux_sym_binary_string_token1,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [297] = 2,
    ACTIONS(75), 1,
      sym_integer,
    ACTIONS(73), 10,
      ts_builtin_sym_end,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      aux_sym_binary_string_token1,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [313] = 2,
    ACTIONS(79), 1,
      sym_integer,
    ACTIONS(77), 10,
      ts_builtin_sym_end,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      aux_sym_binary_string_token1,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [329] = 2,
    ACTIONS(83), 1,
      sym_integer,
    ACTIONS(81), 10,
      ts_builtin_sym_end,
      aux_sym_quoted_atom_token1,
      sym_unquoted_atom,
      sym_float,
      sym_char,
      sym_string,
      aux_sym_binary_string_token1,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [345] = 5,
    ACTIONS(85), 1,
      aux_sym_binary_string_token2,
    ACTIONS(87), 1,
      aux_sym_bin_sized_token1,
    ACTIONS(89), 1,
      aux_sym_bin_type_list_token1,
    STATE(20), 1,
      sym_bin_sized,
    STATE(32), 1,
      sym_bin_type_list,
  [361] = 3,
    ACTIONS(91), 1,
      sym_integer,
    ACTIONS(95), 1,
      aux_sym_binary_string_token2,
    ACTIONS(93), 2,
      sym_float,
      sym_string,
  [372] = 3,
    ACTIONS(89), 1,
      aux_sym_bin_type_list_token1,
    ACTIONS(97), 1,
      aux_sym_binary_string_token2,
    STATE(34), 1,
      sym_bin_type_list,
  [382] = 3,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    STATE(24), 1,
      aux_sym_tuple_repeat1,
  [392] = 3,
    ACTIONS(103), 1,
      aux_sym_binary_string_token2,
    ACTIONS(105), 1,
      anon_sym_DASH,
    STATE(25), 1,
      aux_sym_bin_type_list_repeat1,
  [402] = 3,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      aux_sym_tuple_repeat1,
  [412] = 3,
    ACTIONS(109), 1,
      anon_sym_COMMA,
    ACTIONS(112), 1,
      anon_sym_RBRACE,
    STATE(24), 1,
      aux_sym_tuple_repeat1,
  [422] = 3,
    ACTIONS(105), 1,
      anon_sym_DASH,
    ACTIONS(114), 1,
      aux_sym_binary_string_token2,
    STATE(26), 1,
      aux_sym_bin_type_list_repeat1,
  [432] = 3,
    ACTIONS(116), 1,
      aux_sym_binary_string_token2,
    ACTIONS(118), 1,
      anon_sym_DASH,
    STATE(26), 1,
      aux_sym_bin_type_list_repeat1,
  [442] = 1,
    ACTIONS(121), 2,
      aux_sym_binary_string_token2,
      aux_sym_bin_type_list_token1,
  [447] = 1,
    ACTIONS(123), 2,
      aux_sym_binary_string_token2,
      anon_sym_DASH,
  [452] = 1,
    ACTIONS(112), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [457] = 1,
    ACTIONS(116), 2,
      aux_sym_binary_string_token2,
      anon_sym_DASH,
  [462] = 1,
    ACTIONS(125), 1,
      aux_sym_quoted_atom_token2,
  [466] = 1,
    ACTIONS(97), 1,
      aux_sym_binary_string_token2,
  [470] = 1,
    ACTIONS(127), 1,
      sym_integer,
  [474] = 1,
    ACTIONS(129), 1,
      aux_sym_binary_string_token2,
  [478] = 1,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
  [482] = 1,
    ACTIONS(133), 1,
      aux_sym_quoted_atom_token1,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 37,
  [SMALL_STATE(4)] = 74,
  [SMALL_STATE(5)] = 96,
  [SMALL_STATE(6)] = 118,
  [SMALL_STATE(7)] = 153,
  [SMALL_STATE(8)] = 185,
  [SMALL_STATE(9)] = 201,
  [SMALL_STATE(10)] = 217,
  [SMALL_STATE(11)] = 233,
  [SMALL_STATE(12)] = 249,
  [SMALL_STATE(13)] = 265,
  [SMALL_STATE(14)] = 281,
  [SMALL_STATE(15)] = 297,
  [SMALL_STATE(16)] = 313,
  [SMALL_STATE(17)] = 329,
  [SMALL_STATE(18)] = 345,
  [SMALL_STATE(19)] = 361,
  [SMALL_STATE(20)] = 372,
  [SMALL_STATE(21)] = 382,
  [SMALL_STATE(22)] = 392,
  [SMALL_STATE(23)] = 402,
  [SMALL_STATE(24)] = 412,
  [SMALL_STATE(25)] = 422,
  [SMALL_STATE(26)] = 432,
  [SMALL_STATE(27)] = 442,
  [SMALL_STATE(28)] = 447,
  [SMALL_STATE(29)] = 452,
  [SMALL_STATE(30)] = 457,
  [SMALL_STATE(31)] = 462,
  [SMALL_STATE(32)] = 466,
  [SMALL_STATE(33)] = 470,
  [SMALL_STATE(34)] = 474,
  [SMALL_STATE(35)] = 478,
  [SMALL_STATE(36)] = 482,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(31),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_string, 4),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_string, 4),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_string, 5),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_string, 5),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 1, .production_id = 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 1, .production_id = 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_string, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_string, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_atom, 3),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_atom, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_string, 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_string, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_type_list, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(7),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_type_list, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bin_type_list_repeat1, 2),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bin_type_list_repeat1, 2), SHIFT_REPEAT(4),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_sized, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_type, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [131] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_erlang(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const uint16_t *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .field_count = FIELD_COUNT,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .field_names = ts_field_names,
    .large_state_count = LARGE_STATE_COUNT,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .state_count = STATE_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
