#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 15
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 15
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_fn = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_let = 4,
  anon_sym_EQ = 5,
  sym_number = 6,
  sym_identifier = 7,
  sym_source_file = 8,
  sym__expression = 9,
  sym__declaration = 10,
  sym_fn_declaration = 11,
  sym_param_list = 12,
  sym_var_declaration = 13,
  aux_sym_source_file_repeat1 = 14,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_fn] = "fn",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_let] = "let",
  [anon_sym_EQ] = "=",
  [sym_number] = "number",
  [sym_identifier] = "identifier",
  [sym_source_file] = "source_file",
  [sym__expression] = "_expression",
  [sym__declaration] = "_declaration",
  [sym_fn_declaration] = "fn_declaration",
  [sym_param_list] = "param_list",
  [sym_var_declaration] = "var_declaration",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_number] = sym_number,
  [sym_identifier] = sym_identifier,
  [sym_source_file] = sym_source_file,
  [sym__expression] = sym__expression,
  [sym__declaration] = sym__declaration,
  [sym_fn_declaration] = sym_fn_declaration,
  [sym_param_list] = sym_param_list,
  [sym_var_declaration] = sym_var_declaration,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_fn_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_param_list] = {
    .visible = true,
    .named = true,
  },
  [sym_var_declaration] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      if (lookahead == '(') ADVANCE(8);
      if (lookahead == ')') ADVANCE(9);
      if (lookahead == '=') ADVANCE(11);
      if (lookahead == 'f') ADVANCE(2);
      if (lookahead == 'l') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 1:
      if (lookahead == 'e') ADVANCE(3);
      END_STATE();
    case 2:
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 3:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 4:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
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
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(11),
    [sym__declaration] = STATE(2),
    [sym_fn_declaration] = STATE(2),
    [sym_var_declaration] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_fn] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(5), 1,
      anon_sym_fn,
    ACTIONS(7), 1,
      anon_sym_let,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    STATE(3), 4,
      sym__declaration,
      sym_fn_declaration,
      sym_var_declaration,
      aux_sym_source_file_repeat1,
  [16] = 4,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      anon_sym_fn,
    ACTIONS(16), 1,
      anon_sym_let,
    STATE(3), 4,
      sym__declaration,
      sym_fn_declaration,
      sym_var_declaration,
      aux_sym_source_file_repeat1,
  [32] = 1,
    ACTIONS(19), 3,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_let,
  [38] = 2,
    STATE(6), 1,
      sym__expression,
    ACTIONS(21), 2,
      sym_number,
      sym_identifier,
  [46] = 1,
    ACTIONS(23), 3,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_let,
  [52] = 1,
    ACTIONS(25), 3,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_let,
  [58] = 2,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    STATE(4), 1,
      sym_param_list,
  [65] = 1,
    ACTIONS(29), 1,
      sym_identifier,
  [69] = 1,
    ACTIONS(31), 1,
      sym_identifier,
  [73] = 1,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
  [77] = 1,
    ACTIONS(35), 1,
      anon_sym_EQ,
  [81] = 1,
    ACTIONS(37), 1,
      sym_identifier,
  [85] = 1,
    ACTIONS(39), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 16,
  [SMALL_STATE(4)] = 32,
  [SMALL_STATE(5)] = 38,
  [SMALL_STATE(6)] = 46,
  [SMALL_STATE(7)] = 52,
  [SMALL_STATE(8)] = 58,
  [SMALL_STATE(9)] = 65,
  [SMALL_STATE(10)] = 69,
  [SMALL_STATE(11)] = 73,
  [SMALL_STATE(12)] = 77,
  [SMALL_STATE(13)] = 81,
  [SMALL_STATE(14)] = 85,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_declaration, 3),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 4),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [33] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_f(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
