#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 99
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  sym_label = 1,
  aux_sym_stuff_token1 = 2,
  sym_if_op = 3,
  sym_else_op = 4,
  sym_elseif_op = 5,
  sym_endif_op = 6,
  sym_z80_op = 7,
  sym_z80n_op = 8,
  sym_user_op = 9,
  sym_nl = 10,
  sym_ws = 11,
  sym_program = 12,
  sym_block = 13,
  sym_line = 14,
  sym_empty_line = 15,
  sym_label_line = 16,
  sym_nolabel_line = 17,
  sym_full_line = 18,
  sym_stuff = 19,
  sym_op = 20,
  sym_if_block = 21,
  sym_if_line = 22,
  sym_expr = 23,
  sym_else_block = 24,
  sym_else_line = 25,
  sym_elseif_line = 26,
  sym_endif_line = 27,
  aux_sym_program_repeat1 = 28,
  aux_sym_stuff_repeat1 = 29,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_label] = "label",
  [aux_sym_stuff_token1] = "stuff_token1",
  [sym_if_op] = "if_op",
  [sym_else_op] = "else_op",
  [sym_elseif_op] = "elseif_op",
  [sym_endif_op] = "endif_op",
  [sym_z80_op] = "z80_op",
  [sym_z80n_op] = "z80n_op",
  [sym_user_op] = "user_op",
  [sym_nl] = "nl",
  [sym_ws] = "ws",
  [sym_program] = "program",
  [sym_block] = "block",
  [sym_line] = "line",
  [sym_empty_line] = "empty_line",
  [sym_label_line] = "label_line",
  [sym_nolabel_line] = "nolabel_line",
  [sym_full_line] = "full_line",
  [sym_stuff] = "stuff",
  [sym_op] = "op",
  [sym_if_block] = "if_block",
  [sym_if_line] = "if_line",
  [sym_expr] = "expr",
  [sym_else_block] = "else_block",
  [sym_else_line] = "else_line",
  [sym_elseif_line] = "elseif_line",
  [sym_endif_line] = "endif_line",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_stuff_repeat1] = "stuff_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_label] = sym_label,
  [aux_sym_stuff_token1] = aux_sym_stuff_token1,
  [sym_if_op] = sym_if_op,
  [sym_else_op] = sym_else_op,
  [sym_elseif_op] = sym_elseif_op,
  [sym_endif_op] = sym_endif_op,
  [sym_z80_op] = sym_z80_op,
  [sym_z80n_op] = sym_z80n_op,
  [sym_user_op] = sym_user_op,
  [sym_nl] = sym_nl,
  [sym_ws] = sym_ws,
  [sym_program] = sym_program,
  [sym_block] = sym_block,
  [sym_line] = sym_line,
  [sym_empty_line] = sym_empty_line,
  [sym_label_line] = sym_label_line,
  [sym_nolabel_line] = sym_nolabel_line,
  [sym_full_line] = sym_full_line,
  [sym_stuff] = sym_stuff,
  [sym_op] = sym_op,
  [sym_if_block] = sym_if_block,
  [sym_if_line] = sym_if_line,
  [sym_expr] = sym_expr,
  [sym_else_block] = sym_else_block,
  [sym_else_line] = sym_else_line,
  [sym_elseif_line] = sym_elseif_line,
  [sym_endif_line] = sym_endif_line,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_stuff_repeat1] = aux_sym_stuff_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_stuff_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_if_op] = {
    .visible = true,
    .named = true,
  },
  [sym_else_op] = {
    .visible = true,
    .named = true,
  },
  [sym_elseif_op] = {
    .visible = true,
    .named = true,
  },
  [sym_endif_op] = {
    .visible = true,
    .named = true,
  },
  [sym_z80_op] = {
    .visible = true,
    .named = true,
  },
  [sym_z80n_op] = {
    .visible = true,
    .named = true,
  },
  [sym_user_op] = {
    .visible = true,
    .named = true,
  },
  [sym_nl] = {
    .visible = true,
    .named = true,
  },
  [sym_ws] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_line] = {
    .visible = true,
    .named = true,
  },
  [sym_empty_line] = {
    .visible = true,
    .named = true,
  },
  [sym_label_line] = {
    .visible = true,
    .named = true,
  },
  [sym_nolabel_line] = {
    .visible = true,
    .named = true,
  },
  [sym_full_line] = {
    .visible = true,
    .named = true,
  },
  [sym_stuff] = {
    .visible = true,
    .named = true,
  },
  [sym_op] = {
    .visible = true,
    .named = true,
  },
  [sym_if_block] = {
    .visible = true,
    .named = true,
  },
  [sym_if_line] = {
    .visible = true,
    .named = true,
  },
  [sym_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_else_block] = {
    .visible = true,
    .named = true,
  },
  [sym_else_line] = {
    .visible = true,
    .named = true,
  },
  [sym_elseif_line] = {
    .visible = true,
    .named = true,
  },
  [sym_endif_line] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_stuff_repeat1] = {
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
      if (eof) ADVANCE(5);
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(18);
      if (lookahead == 'l') ADVANCE(15);
      if (lookahead == 'm') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 1:
      if (lookahead == 'e') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(18);
      if (lookahead == 'l') ADVANCE(15);
      if (lookahead == 'm') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 2:
      if (lookahead == 'i') ADVANCE(18);
      if (lookahead == 'l') ADVANCE(15);
      if (lookahead == 'm') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 3:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 4:
      if (eof) ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_label);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == ':') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_stuff_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_if_op);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_else_op);
      if (lookahead == 'i') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_elseif_op);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_endif_op);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_z80_op);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_z80n_op);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_user_op);
      if (lookahead == 'd') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_user_op);
      if (lookahead == 'd') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_user_op);
      if (lookahead == 'e') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_user_op);
      if (lookahead == 'f') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_user_op);
      if (lookahead == 'f') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_user_op);
      if (lookahead == 'f') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_user_op);
      if (lookahead == 'i') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_user_op);
      if (lookahead == 'l') ADVANCE(25);
      if (lookahead == 'n') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_user_op);
      if (lookahead == 'l') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_user_op);
      if (lookahead == 'n') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_user_op);
      if (lookahead == 's') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_user_op);
      if (lookahead == 'u') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_user_op);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 4, .external_lex_state = 1},
  [2] = {.lex_state = 4, .external_lex_state = 1},
  [3] = {.lex_state = 4, .external_lex_state = 1},
  [4] = {.lex_state = 4, .external_lex_state = 1},
  [5] = {.lex_state = 4, .external_lex_state = 1},
  [6] = {.lex_state = 4, .external_lex_state = 1},
  [7] = {.lex_state = 4, .external_lex_state = 1},
  [8] = {.lex_state = 4, .external_lex_state = 1},
  [9] = {.lex_state = 4, .external_lex_state = 1},
  [10] = {.lex_state = 4, .external_lex_state = 1},
  [11] = {.lex_state = 4, .external_lex_state = 1},
  [12] = {.lex_state = 4, .external_lex_state = 1},
  [13] = {.lex_state = 4, .external_lex_state = 1},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 4, .external_lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 4, .external_lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 4, .external_lex_state = 1},
  [29] = {.lex_state = 4, .external_lex_state = 1},
  [30] = {.lex_state = 4, .external_lex_state = 1},
  [31] = {.lex_state = 4, .external_lex_state = 1},
  [32] = {.lex_state = 4, .external_lex_state = 1},
  [33] = {.lex_state = 4, .external_lex_state = 1},
  [34] = {.lex_state = 4, .external_lex_state = 1},
  [35] = {.lex_state = 4, .external_lex_state = 1},
  [36] = {.lex_state = 4, .external_lex_state = 1},
  [37] = {.lex_state = 4, .external_lex_state = 1},
  [38] = {.lex_state = 4, .external_lex_state = 1},
  [39] = {.lex_state = 4, .external_lex_state = 1},
  [40] = {.lex_state = 4, .external_lex_state = 1},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 4, .external_lex_state = 1},
  [45] = {.lex_state = 4, .external_lex_state = 1},
  [46] = {.lex_state = 4, .external_lex_state = 1},
  [47] = {.lex_state = 4, .external_lex_state = 1},
  [48] = {.lex_state = 4, .external_lex_state = 1},
  [49] = {.lex_state = 0, .external_lex_state = 1},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0, .external_lex_state = 1},
  [52] = {.lex_state = 0, .external_lex_state = 1},
  [53] = {.lex_state = 4, .external_lex_state = 2},
  [54] = {.lex_state = 4, .external_lex_state = 2},
  [55] = {.lex_state = 0, .external_lex_state = 1},
  [56] = {.lex_state = 0, .external_lex_state = 1},
  [57] = {.lex_state = 0, .external_lex_state = 1},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 0, .external_lex_state = 1},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 0, .external_lex_state = 1},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 0, .external_lex_state = 1},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 4, .external_lex_state = 2},
  [66] = {.lex_state = 4, .external_lex_state = 2},
  [67] = {.lex_state = 4, .external_lex_state = 2},
  [68] = {.lex_state = 4, .external_lex_state = 2},
  [69] = {.lex_state = 4, .external_lex_state = 2},
  [70] = {.lex_state = 4, .external_lex_state = 2},
  [71] = {.lex_state = 4, .external_lex_state = 2},
  [72] = {.lex_state = 0, .external_lex_state = 1},
  [73] = {.lex_state = 4, .external_lex_state = 2},
  [74] = {.lex_state = 4, .external_lex_state = 2},
  [75] = {.lex_state = 4, .external_lex_state = 2},
  [76] = {.lex_state = 0, .external_lex_state = 1},
  [77] = {.lex_state = 0, .external_lex_state = 1},
  [78] = {.lex_state = 0, .external_lex_state = 3},
  [79] = {.lex_state = 0, .external_lex_state = 3},
  [80] = {.lex_state = 0, .external_lex_state = 3},
  [81] = {.lex_state = 0, .external_lex_state = 3},
  [82] = {.lex_state = 0, .external_lex_state = 3},
  [83] = {.lex_state = 0, .external_lex_state = 2},
  [84] = {.lex_state = 0, .external_lex_state = 3},
  [85] = {.lex_state = 0, .external_lex_state = 2},
  [86] = {.lex_state = 0, .external_lex_state = 3},
  [87] = {.lex_state = 0, .external_lex_state = 3},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 0, .external_lex_state = 3},
  [90] = {.lex_state = 0, .external_lex_state = 3},
  [91] = {.lex_state = 0, .external_lex_state = 3},
  [92] = {.lex_state = 0, .external_lex_state = 3},
  [93] = {.lex_state = 0, .external_lex_state = 3},
  [94] = {.lex_state = 0, .external_lex_state = 2},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0, .external_lex_state = 3},
  [97] = {.lex_state = 0, .external_lex_state = 3},
  [98] = {.lex_state = 0, .external_lex_state = 2},
};

enum {
  ts_external_token_nl = 0,
  ts_external_token_ws = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_nl] = sym_nl,
  [ts_external_token_ws] = sym_ws,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_nl] = true,
    [ts_external_token_ws] = true,
  },
  [2] = {
    [ts_external_token_ws] = true,
  },
  [3] = {
    [ts_external_token_nl] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_if_op] = ACTIONS(1),
    [sym_else_op] = ACTIONS(1),
    [sym_elseif_op] = ACTIONS(1),
    [sym_endif_op] = ACTIONS(1),
    [sym_z80_op] = ACTIONS(1),
    [sym_z80n_op] = ACTIONS(1),
    [sym_user_op] = ACTIONS(1),
    [sym_nl] = ACTIONS(1),
    [sym_ws] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(95),
    [sym_block] = STATE(7),
    [sym_line] = STATE(37),
    [sym_empty_line] = STATE(39),
    [sym_label_line] = STATE(39),
    [sym_nolabel_line] = STATE(39),
    [sym_full_line] = STATE(39),
    [sym_if_block] = STATE(29),
    [sym_if_line] = STATE(12),
    [aux_sym_program_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_label] = ACTIONS(5),
    [sym_nl] = ACTIONS(7),
    [sym_ws] = ACTIONS(9),
  },
  [2] = {
    [sym_block] = STATE(5),
    [sym_line] = STATE(37),
    [sym_empty_line] = STATE(39),
    [sym_label_line] = STATE(39),
    [sym_nolabel_line] = STATE(39),
    [sym_full_line] = STATE(39),
    [sym_if_block] = STATE(29),
    [sym_if_line] = STATE(12),
    [sym_else_block] = STATE(75),
    [sym_else_line] = STATE(9),
    [sym_elseif_line] = STATE(8),
    [sym_endif_line] = STATE(53),
    [aux_sym_program_repeat1] = STATE(5),
    [sym_label] = ACTIONS(11),
    [sym_nl] = ACTIONS(7),
    [sym_ws] = ACTIONS(13),
  },
  [3] = {
    [sym_block] = STATE(5),
    [sym_line] = STATE(37),
    [sym_empty_line] = STATE(39),
    [sym_label_line] = STATE(39),
    [sym_nolabel_line] = STATE(39),
    [sym_full_line] = STATE(39),
    [sym_if_block] = STATE(29),
    [sym_if_line] = STATE(12),
    [sym_else_block] = STATE(35),
    [sym_else_line] = STATE(11),
    [sym_elseif_line] = STATE(10),
    [sym_endif_line] = STATE(34),
    [aux_sym_program_repeat1] = STATE(5),
    [sym_label] = ACTIONS(15),
    [sym_nl] = ACTIONS(7),
    [sym_ws] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(7), 1,
      sym_nl,
    ACTIONS(19), 1,
      sym_label,
    ACTIONS(21), 1,
      sym_ws,
    STATE(12), 1,
      sym_if_line,
    STATE(29), 1,
      sym_if_block,
    STATE(35), 1,
      sym_endif_line,
    STATE(37), 1,
      sym_line,
    STATE(5), 2,
      sym_block,
      aux_sym_program_repeat1,
    STATE(39), 4,
      sym_empty_line,
      sym_label_line,
      sym_nolabel_line,
      sym_full_line,
  [32] = 9,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      sym_label,
    ACTIONS(28), 1,
      sym_nl,
    ACTIONS(31), 1,
      sym_ws,
    STATE(12), 1,
      sym_if_line,
    STATE(29), 1,
      sym_if_block,
    STATE(37), 1,
      sym_line,
    STATE(5), 2,
      sym_block,
      aux_sym_program_repeat1,
    STATE(39), 4,
      sym_empty_line,
      sym_label_line,
      sym_nolabel_line,
      sym_full_line,
  [64] = 9,
    ACTIONS(7), 1,
      sym_nl,
    ACTIONS(34), 1,
      sym_label,
    ACTIONS(36), 1,
      sym_ws,
    STATE(12), 1,
      sym_if_line,
    STATE(29), 1,
      sym_if_block,
    STATE(37), 1,
      sym_line,
    STATE(75), 1,
      sym_endif_line,
    STATE(5), 2,
      sym_block,
      aux_sym_program_repeat1,
    STATE(39), 4,
      sym_empty_line,
      sym_label_line,
      sym_nolabel_line,
      sym_full_line,
  [96] = 9,
    ACTIONS(5), 1,
      sym_label,
    ACTIONS(7), 1,
      sym_nl,
    ACTIONS(9), 1,
      sym_ws,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    STATE(12), 1,
      sym_if_line,
    STATE(29), 1,
      sym_if_block,
    STATE(37), 1,
      sym_line,
    STATE(5), 2,
      sym_block,
      aux_sym_program_repeat1,
    STATE(39), 4,
      sym_empty_line,
      sym_label_line,
      sym_nolabel_line,
      sym_full_line,
  [128] = 8,
    ACTIONS(5), 1,
      sym_label,
    ACTIONS(7), 1,
      sym_nl,
    ACTIONS(9), 1,
      sym_ws,
    STATE(12), 1,
      sym_if_line,
    STATE(29), 1,
      sym_if_block,
    STATE(37), 1,
      sym_line,
    STATE(2), 2,
      sym_block,
      aux_sym_program_repeat1,
    STATE(39), 4,
      sym_empty_line,
      sym_label_line,
      sym_nolabel_line,
      sym_full_line,
  [157] = 8,
    ACTIONS(5), 1,
      sym_label,
    ACTIONS(7), 1,
      sym_nl,
    ACTIONS(9), 1,
      sym_ws,
    STATE(12), 1,
      sym_if_line,
    STATE(29), 1,
      sym_if_block,
    STATE(37), 1,
      sym_line,
    STATE(6), 2,
      sym_block,
      aux_sym_program_repeat1,
    STATE(39), 4,
      sym_empty_line,
      sym_label_line,
      sym_nolabel_line,
      sym_full_line,
  [186] = 8,
    ACTIONS(5), 1,
      sym_label,
    ACTIONS(7), 1,
      sym_nl,
    ACTIONS(9), 1,
      sym_ws,
    STATE(12), 1,
      sym_if_line,
    STATE(29), 1,
      sym_if_block,
    STATE(37), 1,
      sym_line,
    STATE(3), 2,
      sym_block,
      aux_sym_program_repeat1,
    STATE(39), 4,
      sym_empty_line,
      sym_label_line,
      sym_nolabel_line,
      sym_full_line,
  [215] = 8,
    ACTIONS(5), 1,
      sym_label,
    ACTIONS(7), 1,
      sym_nl,
    ACTIONS(9), 1,
      sym_ws,
    STATE(12), 1,
      sym_if_line,
    STATE(29), 1,
      sym_if_block,
    STATE(37), 1,
      sym_line,
    STATE(4), 2,
      sym_block,
      aux_sym_program_repeat1,
    STATE(39), 4,
      sym_empty_line,
      sym_label_line,
      sym_nolabel_line,
      sym_full_line,
  [244] = 8,
    ACTIONS(40), 1,
      sym_label,
    ACTIONS(42), 1,
      sym_nl,
    ACTIONS(44), 1,
      sym_ws,
    STATE(13), 1,
      sym_if_line,
    STATE(23), 1,
      sym_block,
    STATE(66), 1,
      sym_line,
    STATE(68), 1,
      sym_if_block,
    STATE(67), 4,
      sym_empty_line,
      sym_label_line,
      sym_nolabel_line,
      sym_full_line,
  [272] = 8,
    ACTIONS(40), 1,
      sym_label,
    ACTIONS(42), 1,
      sym_nl,
    ACTIONS(44), 1,
      sym_ws,
    STATE(13), 1,
      sym_if_line,
    STATE(26), 1,
      sym_block,
    STATE(66), 1,
      sym_line,
    STATE(68), 1,
      sym_if_block,
    STATE(67), 4,
      sym_empty_line,
      sym_label_line,
      sym_nolabel_line,
      sym_full_line,
  [300] = 8,
    ACTIONS(46), 1,
      sym_if_op,
    ACTIONS(48), 1,
      sym_else_op,
    ACTIONS(50), 1,
      sym_elseif_op,
    ACTIONS(52), 1,
      sym_endif_op,
    ACTIONS(56), 1,
      sym_user_op,
    STATE(51), 1,
      sym_op,
    STATE(86), 1,
      sym_stuff,
    ACTIONS(54), 2,
      sym_z80_op,
      sym_z80n_op,
  [326] = 8,
    ACTIONS(56), 1,
      sym_user_op,
    ACTIONS(58), 1,
      sym_if_op,
    ACTIONS(60), 1,
      sym_else_op,
    ACTIONS(62), 1,
      sym_elseif_op,
    ACTIONS(64), 1,
      sym_endif_op,
    STATE(51), 1,
      sym_op,
    STATE(91), 1,
      sym_stuff,
    ACTIONS(54), 2,
      sym_z80_op,
      sym_z80n_op,
  [352] = 8,
    ACTIONS(56), 1,
      sym_user_op,
    ACTIONS(58), 1,
      sym_if_op,
    ACTIONS(60), 1,
      sym_else_op,
    ACTIONS(62), 1,
      sym_elseif_op,
    ACTIONS(66), 1,
      sym_endif_op,
    STATE(51), 1,
      sym_op,
    STATE(91), 1,
      sym_stuff,
    ACTIONS(54), 2,
      sym_z80_op,
      sym_z80n_op,
  [378] = 8,
    ACTIONS(46), 1,
      sym_if_op,
    ACTIONS(48), 1,
      sym_else_op,
    ACTIONS(50), 1,
      sym_elseif_op,
    ACTIONS(56), 1,
      sym_user_op,
    ACTIONS(68), 1,
      sym_endif_op,
    STATE(51), 1,
      sym_op,
    STATE(86), 1,
      sym_stuff,
    ACTIONS(54), 2,
      sym_z80_op,
      sym_z80n_op,
  [404] = 6,
    ACTIONS(46), 1,
      sym_if_op,
    ACTIONS(52), 1,
      sym_endif_op,
    ACTIONS(56), 1,
      sym_user_op,
    STATE(51), 1,
      sym_op,
    STATE(86), 1,
      sym_stuff,
    ACTIONS(54), 2,
      sym_z80_op,
      sym_z80n_op,
  [424] = 6,
    ACTIONS(46), 1,
      sym_if_op,
    ACTIONS(56), 1,
      sym_user_op,
    ACTIONS(68), 1,
      sym_endif_op,
    STATE(51), 1,
      sym_op,
    STATE(86), 1,
      sym_stuff,
    ACTIONS(54), 2,
      sym_z80_op,
      sym_z80n_op,
  [444] = 6,
    ACTIONS(56), 1,
      sym_user_op,
    ACTIONS(58), 1,
      sym_if_op,
    ACTIONS(64), 1,
      sym_endif_op,
    STATE(51), 1,
      sym_op,
    STATE(91), 1,
      sym_stuff,
    ACTIONS(54), 2,
      sym_z80_op,
      sym_z80n_op,
  [464] = 6,
    ACTIONS(56), 1,
      sym_user_op,
    ACTIONS(58), 1,
      sym_if_op,
    ACTIONS(66), 1,
      sym_endif_op,
    STATE(51), 1,
      sym_op,
    STATE(91), 1,
      sym_stuff,
    ACTIONS(54), 2,
      sym_z80_op,
      sym_z80n_op,
  [484] = 5,
    ACTIONS(46), 1,
      sym_if_op,
    ACTIONS(56), 1,
      sym_user_op,
    STATE(51), 1,
      sym_op,
    STATE(80), 1,
      sym_stuff,
    ACTIONS(54), 2,
      sym_z80_op,
      sym_z80n_op,
  [501] = 6,
    ACTIONS(70), 1,
      sym_label,
    ACTIONS(72), 1,
      sym_ws,
    STATE(10), 1,
      sym_elseif_line,
    STATE(11), 1,
      sym_else_line,
    STATE(32), 1,
      sym_else_block,
    STATE(34), 1,
      sym_endif_line,
  [520] = 5,
    ACTIONS(56), 1,
      sym_user_op,
    ACTIONS(58), 1,
      sym_if_op,
    STATE(51), 1,
      sym_op,
    STATE(78), 1,
      sym_stuff,
    ACTIONS(54), 2,
      sym_z80_op,
      sym_z80n_op,
  [537] = 5,
    ACTIONS(56), 1,
      sym_user_op,
    ACTIONS(58), 1,
      sym_if_op,
    STATE(51), 1,
      sym_op,
    STATE(91), 1,
      sym_stuff,
    ACTIONS(54), 2,
      sym_z80_op,
      sym_z80n_op,
  [554] = 6,
    ACTIONS(74), 1,
      sym_label,
    ACTIONS(76), 1,
      sym_ws,
    STATE(8), 1,
      sym_elseif_line,
    STATE(9), 1,
      sym_else_line,
    STATE(53), 1,
      sym_endif_line,
    STATE(71), 1,
      sym_else_block,
  [573] = 5,
    ACTIONS(46), 1,
      sym_if_op,
    ACTIONS(56), 1,
      sym_user_op,
    STATE(51), 1,
      sym_op,
    STATE(86), 1,
      sym_stuff,
    ACTIONS(54), 2,
      sym_z80_op,
      sym_z80n_op,
  [590] = 1,
    ACTIONS(78), 4,
      sym_nl,
      sym_ws,
      ts_builtin_sym_end,
      sym_label,
  [597] = 1,
    ACTIONS(80), 4,
      sym_nl,
      sym_ws,
      ts_builtin_sym_end,
      sym_label,
  [604] = 1,
    ACTIONS(82), 4,
      sym_nl,
      sym_ws,
      ts_builtin_sym_end,
      sym_label,
  [611] = 1,
    ACTIONS(84), 4,
      sym_nl,
      sym_ws,
      ts_builtin_sym_end,
      sym_label,
  [618] = 1,
    ACTIONS(86), 4,
      sym_nl,
      sym_ws,
      ts_builtin_sym_end,
      sym_label,
  [625] = 1,
    ACTIONS(88), 4,
      sym_nl,
      sym_ws,
      ts_builtin_sym_end,
      sym_label,
  [632] = 1,
    ACTIONS(90), 4,
      sym_nl,
      sym_ws,
      ts_builtin_sym_end,
      sym_label,
  [639] = 1,
    ACTIONS(92), 4,
      sym_nl,
      sym_ws,
      ts_builtin_sym_end,
      sym_label,
  [646] = 1,
    ACTIONS(94), 4,
      sym_nl,
      sym_ws,
      ts_builtin_sym_end,
      sym_label,
  [653] = 1,
    ACTIONS(80), 4,
      sym_nl,
      sym_ws,
      ts_builtin_sym_end,
      sym_label,
  [660] = 1,
    ACTIONS(96), 4,
      sym_nl,
      sym_ws,
      ts_builtin_sym_end,
      sym_label,
  [667] = 1,
    ACTIONS(98), 4,
      sym_nl,
      sym_ws,
      ts_builtin_sym_end,
      sym_label,
  [674] = 1,
    ACTIONS(100), 3,
      sym_nl,
      sym_ws,
      sym_label,
  [680] = 3,
    ACTIONS(48), 1,
      sym_else_op,
    ACTIONS(102), 1,
      sym_elseif_op,
    ACTIONS(104), 1,
      sym_endif_op,
  [690] = 3,
    ACTIONS(60), 1,
      sym_else_op,
    ACTIONS(106), 1,
      sym_elseif_op,
    ACTIONS(108), 1,
      sym_endif_op,
  [700] = 3,
    ACTIONS(60), 1,
      sym_else_op,
    ACTIONS(106), 1,
      sym_elseif_op,
    ACTIONS(110), 1,
      sym_endif_op,
  [710] = 1,
    ACTIONS(112), 3,
      sym_nl,
      sym_ws,
      sym_label,
  [716] = 1,
    ACTIONS(114), 3,
      sym_nl,
      sym_ws,
      sym_label,
  [722] = 1,
    ACTIONS(116), 3,
      sym_nl,
      sym_ws,
      sym_label,
  [728] = 1,
    ACTIONS(118), 3,
      sym_nl,
      sym_ws,
      sym_label,
  [734] = 1,
    ACTIONS(120), 3,
      sym_nl,
      sym_ws,
      sym_label,
  [740] = 3,
    ACTIONS(122), 1,
      sym_nl,
    ACTIONS(124), 1,
      sym_ws,
    STATE(49), 1,
      aux_sym_stuff_repeat1,
  [750] = 3,
    ACTIONS(48), 1,
      sym_else_op,
    ACTIONS(102), 1,
      sym_elseif_op,
    ACTIONS(127), 1,
      sym_endif_op,
  [760] = 3,
    ACTIONS(129), 1,
      sym_nl,
    ACTIONS(131), 1,
      sym_ws,
    STATE(52), 1,
      aux_sym_stuff_repeat1,
  [770] = 3,
    ACTIONS(131), 1,
      sym_ws,
    ACTIONS(133), 1,
      sym_nl,
    STATE(49), 1,
      aux_sym_stuff_repeat1,
  [780] = 1,
    ACTIONS(90), 2,
      sym_ws,
      sym_label,
  [785] = 1,
    ACTIONS(94), 2,
      sym_ws,
      sym_label,
  [790] = 2,
    ACTIONS(135), 1,
      sym_nl,
    ACTIONS(137), 1,
      sym_ws,
  [797] = 2,
    ACTIONS(135), 1,
      sym_nl,
    ACTIONS(139), 1,
      sym_ws,
  [804] = 2,
    ACTIONS(135), 1,
      sym_nl,
    ACTIONS(141), 1,
      sym_ws,
  [811] = 2,
    ACTIONS(143), 1,
      aux_sym_stuff_token1,
    STATE(92), 1,
      sym_expr,
  [818] = 2,
    ACTIONS(135), 1,
      sym_nl,
    ACTIONS(145), 1,
      sym_ws,
  [825] = 2,
    ACTIONS(143), 1,
      aux_sym_stuff_token1,
    STATE(89), 1,
      sym_expr,
  [832] = 1,
    ACTIONS(147), 2,
      sym_nl,
      sym_ws,
  [837] = 2,
    ACTIONS(143), 1,
      aux_sym_stuff_token1,
    STATE(97), 1,
      sym_expr,
  [844] = 1,
    ACTIONS(147), 2,
      sym_nl,
      sym_ws,
  [849] = 2,
    ACTIONS(143), 1,
      aux_sym_stuff_token1,
    STATE(82), 1,
      sym_expr,
  [856] = 1,
    ACTIONS(84), 2,
      sym_ws,
      sym_label,
  [861] = 1,
    ACTIONS(80), 2,
      sym_ws,
      sym_label,
  [866] = 1,
    ACTIONS(98), 2,
      sym_ws,
      sym_label,
  [871] = 1,
    ACTIONS(80), 2,
      sym_ws,
      sym_label,
  [876] = 1,
    ACTIONS(88), 2,
      sym_ws,
      sym_label,
  [881] = 1,
    ACTIONS(82), 2,
      sym_ws,
      sym_label,
  [886] = 1,
    ACTIONS(86), 2,
      sym_ws,
      sym_label,
  [891] = 1,
    ACTIONS(122), 2,
      sym_nl,
      sym_ws,
  [896] = 1,
    ACTIONS(78), 2,
      sym_ws,
      sym_label,
  [901] = 1,
    ACTIONS(96), 2,
      sym_ws,
      sym_label,
  [906] = 1,
    ACTIONS(92), 2,
      sym_ws,
      sym_label,
  [911] = 2,
    ACTIONS(135), 1,
      sym_nl,
    ACTIONS(149), 1,
      sym_ws,
  [918] = 2,
    ACTIONS(151), 1,
      sym_nl,
    ACTIONS(153), 1,
      sym_ws,
  [925] = 1,
    ACTIONS(155), 1,
      sym_nl,
  [929] = 1,
    ACTIONS(157), 1,
      sym_nl,
  [933] = 1,
    ACTIONS(159), 1,
      sym_nl,
  [937] = 1,
    ACTIONS(161), 1,
      sym_nl,
  [941] = 1,
    ACTIONS(163), 1,
      sym_nl,
  [945] = 1,
    ACTIONS(165), 1,
      sym_ws,
  [949] = 1,
    ACTIONS(167), 1,
      sym_nl,
  [953] = 1,
    ACTIONS(169), 1,
      sym_ws,
  [957] = 1,
    ACTIONS(171), 1,
      sym_nl,
  [961] = 1,
    ACTIONS(173), 1,
      sym_nl,
  [965] = 1,
    ACTIONS(175), 1,
      aux_sym_stuff_token1,
  [969] = 1,
    ACTIONS(177), 1,
      sym_nl,
  [973] = 1,
    ACTIONS(179), 1,
      sym_nl,
  [977] = 1,
    ACTIONS(181), 1,
      sym_nl,
  [981] = 1,
    ACTIONS(183), 1,
      sym_nl,
  [985] = 1,
    ACTIONS(185), 1,
      sym_nl,
  [989] = 1,
    ACTIONS(187), 1,
      sym_ws,
  [993] = 1,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
  [997] = 1,
    ACTIONS(191), 1,
      sym_nl,
  [1001] = 1,
    ACTIONS(193), 1,
      sym_nl,
  [1005] = 1,
    ACTIONS(195), 1,
      sym_ws,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 32,
  [SMALL_STATE(6)] = 64,
  [SMALL_STATE(7)] = 96,
  [SMALL_STATE(8)] = 128,
  [SMALL_STATE(9)] = 157,
  [SMALL_STATE(10)] = 186,
  [SMALL_STATE(11)] = 215,
  [SMALL_STATE(12)] = 244,
  [SMALL_STATE(13)] = 272,
  [SMALL_STATE(14)] = 300,
  [SMALL_STATE(15)] = 326,
  [SMALL_STATE(16)] = 352,
  [SMALL_STATE(17)] = 378,
  [SMALL_STATE(18)] = 404,
  [SMALL_STATE(19)] = 424,
  [SMALL_STATE(20)] = 444,
  [SMALL_STATE(21)] = 464,
  [SMALL_STATE(22)] = 484,
  [SMALL_STATE(23)] = 501,
  [SMALL_STATE(24)] = 520,
  [SMALL_STATE(25)] = 537,
  [SMALL_STATE(26)] = 554,
  [SMALL_STATE(27)] = 573,
  [SMALL_STATE(28)] = 590,
  [SMALL_STATE(29)] = 597,
  [SMALL_STATE(30)] = 604,
  [SMALL_STATE(31)] = 611,
  [SMALL_STATE(32)] = 618,
  [SMALL_STATE(33)] = 625,
  [SMALL_STATE(34)] = 632,
  [SMALL_STATE(35)] = 639,
  [SMALL_STATE(36)] = 646,
  [SMALL_STATE(37)] = 653,
  [SMALL_STATE(38)] = 660,
  [SMALL_STATE(39)] = 667,
  [SMALL_STATE(40)] = 674,
  [SMALL_STATE(41)] = 680,
  [SMALL_STATE(42)] = 690,
  [SMALL_STATE(43)] = 700,
  [SMALL_STATE(44)] = 710,
  [SMALL_STATE(45)] = 716,
  [SMALL_STATE(46)] = 722,
  [SMALL_STATE(47)] = 728,
  [SMALL_STATE(48)] = 734,
  [SMALL_STATE(49)] = 740,
  [SMALL_STATE(50)] = 750,
  [SMALL_STATE(51)] = 760,
  [SMALL_STATE(52)] = 770,
  [SMALL_STATE(53)] = 780,
  [SMALL_STATE(54)] = 785,
  [SMALL_STATE(55)] = 790,
  [SMALL_STATE(56)] = 797,
  [SMALL_STATE(57)] = 804,
  [SMALL_STATE(58)] = 811,
  [SMALL_STATE(59)] = 818,
  [SMALL_STATE(60)] = 825,
  [SMALL_STATE(61)] = 832,
  [SMALL_STATE(62)] = 837,
  [SMALL_STATE(63)] = 844,
  [SMALL_STATE(64)] = 849,
  [SMALL_STATE(65)] = 856,
  [SMALL_STATE(66)] = 861,
  [SMALL_STATE(67)] = 866,
  [SMALL_STATE(68)] = 871,
  [SMALL_STATE(69)] = 876,
  [SMALL_STATE(70)] = 881,
  [SMALL_STATE(71)] = 886,
  [SMALL_STATE(72)] = 891,
  [SMALL_STATE(73)] = 896,
  [SMALL_STATE(74)] = 901,
  [SMALL_STATE(75)] = 906,
  [SMALL_STATE(76)] = 911,
  [SMALL_STATE(77)] = 918,
  [SMALL_STATE(78)] = 925,
  [SMALL_STATE(79)] = 929,
  [SMALL_STATE(80)] = 933,
  [SMALL_STATE(81)] = 937,
  [SMALL_STATE(82)] = 941,
  [SMALL_STATE(83)] = 945,
  [SMALL_STATE(84)] = 949,
  [SMALL_STATE(85)] = 953,
  [SMALL_STATE(86)] = 957,
  [SMALL_STATE(87)] = 961,
  [SMALL_STATE(88)] = 965,
  [SMALL_STATE(89)] = 969,
  [SMALL_STATE(90)] = 973,
  [SMALL_STATE(91)] = 977,
  [SMALL_STATE(92)] = 981,
  [SMALL_STATE(93)] = 985,
  [SMALL_STATE(94)] = 989,
  [SMALL_STATE(95)] = 993,
  [SMALL_STATE(96)] = 997,
  [SMALL_STATE(97)] = 1001,
  [SMALL_STATE(98)] = 1005,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(59),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(31),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(25),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_line, 4),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nolabel_line, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_line, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_block, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_line, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_block, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_block, 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endif_line, 4),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endif_line, 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_line, 4),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_line, 5),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_line, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elseif_line, 5),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elseif_line, 6),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_line, 4),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stuff_repeat1, 2),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stuff_repeat1, 2), SHIFT_REPEAT(88),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stuff, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stuff, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [189] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_z80n_assembly_external_scanner_create(void);
void tree_sitter_z80n_assembly_external_scanner_destroy(void *);
bool tree_sitter_z80n_assembly_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_z80n_assembly_external_scanner_serialize(void *, char *);
void tree_sitter_z80n_assembly_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_z80n_assembly(void) {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_z80n_assembly_external_scanner_create,
      tree_sitter_z80n_assembly_external_scanner_destroy,
      tree_sitter_z80n_assembly_external_scanner_scan,
      tree_sitter_z80n_assembly_external_scanner_serialize,
      tree_sitter_z80n_assembly_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
