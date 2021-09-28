#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 100
#define LARGE_STATE_COUNT 14
#define SYMBOL_COUNT 62
#define ALIAS_COUNT 0
#define TOKEN_COUNT 43
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  sym_label = 1,
  aux_sym_stuff_token1 = 2,
  aux_sym_z80_op_token1 = 3,
  anon_sym_and = 4,
  anon_sym_bit = 5,
  anon_sym_call = 6,
  anon_sym_ccf = 7,
  aux_sym_z80_op_token2 = 8,
  anon_sym_cpl = 9,
  anon_sym_daa = 10,
  anon_sym_dec = 11,
  aux_sym_z80_op_token3 = 12,
  anon_sym_djnz = 13,
  aux_sym_z80_op_token4 = 14,
  anon_sym_halt = 15,
  anon_sym_im = 16,
  aux_sym_z80_op_token5 = 17,
  aux_sym_z80_op_token6 = 18,
  aux_sym_z80_op_token7 = 19,
  anon_sym_neg = 20,
  anon_sym_nop = 21,
  anon_sym_or = 22,
  aux_sym_z80_op_token8 = 23,
  aux_sym_z80_op_token9 = 24,
  anon_sym_pop = 25,
  anon_sym_push = 26,
  anon_sym_res = 27,
  aux_sym_z80_op_token10 = 28,
  aux_sym_z80_op_token11 = 29,
  aux_sym_z80_op_token12 = 30,
  anon_sym_srl = 31,
  anon_sym_sub = 32,
  anon_sym_xor = 33,
  anon_sym_sl1 = 34,
  sym_z80n_op = 35,
  sym_user_op = 36,
  sym_if_op = 37,
  sym_else_op = 38,
  sym_elseif_op = 39,
  sym_endif_op = 40,
  sym_nl = 41,
  sym_ws = 42,
  sym_program = 43,
  sym_block = 44,
  sym_line = 45,
  sym_empty_line = 46,
  sym_label_line = 47,
  sym_nolabel_line = 48,
  sym_full_line = 49,
  sym_stuff = 50,
  sym_op = 51,
  sym_z80_op = 52,
  sym_if_block = 53,
  sym_if_line = 54,
  sym_expr = 55,
  sym_else_block = 56,
  sym_else_line = 57,
  sym_elseif_line = 58,
  sym_endif_line = 59,
  aux_sym_program_repeat1 = 60,
  aux_sym_stuff_repeat1 = 61,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_label] = "label",
  [aux_sym_stuff_token1] = "stuff_token1",
  [aux_sym_z80_op_token1] = "z80_op_token1",
  [anon_sym_and] = "and",
  [anon_sym_bit] = "bit",
  [anon_sym_call] = "call",
  [anon_sym_ccf] = "ccf",
  [aux_sym_z80_op_token2] = "z80_op_token2",
  [anon_sym_cpl] = "cpl",
  [anon_sym_daa] = "daa",
  [anon_sym_dec] = "dec",
  [aux_sym_z80_op_token3] = "z80_op_token3",
  [anon_sym_djnz] = "djnz",
  [aux_sym_z80_op_token4] = "z80_op_token4",
  [anon_sym_halt] = "halt",
  [anon_sym_im] = "im",
  [aux_sym_z80_op_token5] = "z80_op_token5",
  [aux_sym_z80_op_token6] = "z80_op_token6",
  [aux_sym_z80_op_token7] = "z80_op_token7",
  [anon_sym_neg] = "neg",
  [anon_sym_nop] = "nop",
  [anon_sym_or] = "or",
  [aux_sym_z80_op_token8] = "z80_op_token8",
  [aux_sym_z80_op_token9] = "z80_op_token9",
  [anon_sym_pop] = "pop",
  [anon_sym_push] = "push",
  [anon_sym_res] = "res",
  [aux_sym_z80_op_token10] = "z80_op_token10",
  [aux_sym_z80_op_token11] = "z80_op_token11",
  [aux_sym_z80_op_token12] = "z80_op_token12",
  [anon_sym_srl] = "srl",
  [anon_sym_sub] = "sub",
  [anon_sym_xor] = "xor",
  [anon_sym_sl1] = "sl1",
  [sym_z80n_op] = "z80n_op",
  [sym_user_op] = "user_op",
  [sym_if_op] = "if_op",
  [sym_else_op] = "else_op",
  [sym_elseif_op] = "elseif_op",
  [sym_endif_op] = "endif_op",
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
  [sym_z80_op] = "z80_op",
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
  [aux_sym_z80_op_token1] = aux_sym_z80_op_token1,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_bit] = anon_sym_bit,
  [anon_sym_call] = anon_sym_call,
  [anon_sym_ccf] = anon_sym_ccf,
  [aux_sym_z80_op_token2] = aux_sym_z80_op_token2,
  [anon_sym_cpl] = anon_sym_cpl,
  [anon_sym_daa] = anon_sym_daa,
  [anon_sym_dec] = anon_sym_dec,
  [aux_sym_z80_op_token3] = aux_sym_z80_op_token3,
  [anon_sym_djnz] = anon_sym_djnz,
  [aux_sym_z80_op_token4] = aux_sym_z80_op_token4,
  [anon_sym_halt] = anon_sym_halt,
  [anon_sym_im] = anon_sym_im,
  [aux_sym_z80_op_token5] = aux_sym_z80_op_token5,
  [aux_sym_z80_op_token6] = aux_sym_z80_op_token6,
  [aux_sym_z80_op_token7] = aux_sym_z80_op_token7,
  [anon_sym_neg] = anon_sym_neg,
  [anon_sym_nop] = anon_sym_nop,
  [anon_sym_or] = anon_sym_or,
  [aux_sym_z80_op_token8] = aux_sym_z80_op_token8,
  [aux_sym_z80_op_token9] = aux_sym_z80_op_token9,
  [anon_sym_pop] = anon_sym_pop,
  [anon_sym_push] = anon_sym_push,
  [anon_sym_res] = anon_sym_res,
  [aux_sym_z80_op_token10] = aux_sym_z80_op_token10,
  [aux_sym_z80_op_token11] = aux_sym_z80_op_token11,
  [aux_sym_z80_op_token12] = aux_sym_z80_op_token12,
  [anon_sym_srl] = anon_sym_srl,
  [anon_sym_sub] = anon_sym_sub,
  [anon_sym_xor] = anon_sym_xor,
  [anon_sym_sl1] = anon_sym_sl1,
  [sym_z80n_op] = sym_z80n_op,
  [sym_user_op] = sym_user_op,
  [sym_if_op] = sym_if_op,
  [sym_else_op] = sym_else_op,
  [sym_elseif_op] = sym_elseif_op,
  [sym_endif_op] = sym_endif_op,
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
  [sym_z80_op] = sym_z80_op,
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
  [aux_sym_z80_op_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_call] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ccf] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_z80_op_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_cpl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_daa] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dec] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_z80_op_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_djnz] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_z80_op_token4] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_halt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_im] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_z80_op_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_z80_op_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_z80_op_token7] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_neg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_z80_op_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_z80_op_token9] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_pop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_push] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_res] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_z80_op_token10] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_z80_op_token11] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_z80_op_token12] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_srl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sl1] = {
    .visible = true,
    .named = false,
  },
  [sym_z80n_op] = {
    .visible = true,
    .named = true,
  },
  [sym_user_op] = {
    .visible = true,
    .named = true,
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
  [sym_z80_op] = {
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
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 'b') ADVANCE(76);
      if (lookahead == 'c') ADVANCE(53);
      if (lookahead == 'd') ADVANCE(56);
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == 'h') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(70);
      if (lookahead == 'j') ADVANCE(101);
      if (lookahead == 'l') ADVANCE(63);
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead == 'o') ADVANCE(90);
      if (lookahead == 'p') ADVANCE(87);
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead == 's') ADVANCE(81);
      if (lookahead == 'x') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 'b') ADVANCE(76);
      if (lookahead == 'c') ADVANCE(53);
      if (lookahead == 'd') ADVANCE(56);
      if (lookahead == 'e') ADVANCE(78);
      if (lookahead == 'h') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(70);
      if (lookahead == 'j') ADVANCE(101);
      if (lookahead == 'l') ADVANCE(63);
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead == 'o') ADVANCE(90);
      if (lookahead == 'p') ADVANCE(87);
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead == 's') ADVANCE(81);
      if (lookahead == 'x') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 'b') ADVANCE(76);
      if (lookahead == 'c') ADVANCE(53);
      if (lookahead == 'd') ADVANCE(56);
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == 'h') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(70);
      if (lookahead == 'j') ADVANCE(101);
      if (lookahead == 'l') ADVANCE(63);
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead == 'o') ADVANCE(90);
      if (lookahead == 'p') ADVANCE(87);
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead == 's') ADVANCE(81);
      if (lookahead == 'x') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(103);
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
      ACCEPT_TOKEN(aux_sym_z80_op_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_and);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_bit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_call);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_ccf);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_z80_op_token2);
      if (lookahead == 'l') ADVANCE(17);
      if (lookahead == 'd' ||
          lookahead == 'i') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_z80_op_token2);
      if (lookahead == 'r') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_z80_op_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_cpl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_daa);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_dec);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_z80_op_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_djnz);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_z80_op_token4);
      if (lookahead == 'x') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_z80_op_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_halt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_im);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_z80_op_token5);
      if (lookahead == 'r') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_z80_op_token5);
      if (lookahead == 'd' ||
          lookahead == 'i') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_z80_op_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_z80_op_token6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_z80_op_token7);
      if (lookahead == 'r') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_z80_op_token7);
      if (lookahead == 'd' ||
          lookahead == 'i') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_z80_op_token7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_neg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_nop);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_or);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_z80_op_token8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_z80_op_token9);
      if (lookahead == 'd' ||
          lookahead == 'i') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_z80_op_token9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_pop);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_push);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_res);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_z80_op_token10);
      if (lookahead == 'i' ||
          lookahead == 'n') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_z80_op_token10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_z80_op_token11);
      if (lookahead == 'a') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_z80_op_token11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_z80_op_token12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_srl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_sub);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_xor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_sl1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_z80n_op);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_user_op);
      if (lookahead == '1') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_user_op);
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead == 'c') ADVANCE(71);
      if (lookahead == 'p') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_user_op);
      if (lookahead == 'a') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_user_op);
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == 'l') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_user_op);
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead == 'e') ADVANCE(60);
      if (lookahead == 'i') ADVANCE(20);
      if (lookahead == 'j') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_user_op);
      if (lookahead == 'a') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_user_op);
      if (lookahead == 'a') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_user_op);
      if (lookahead == 'b') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_user_op);
      if (lookahead == 'c') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_user_op);
      if (lookahead == 'c') ADVANCE(44);
      if (lookahead == 'd') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_user_op);
      if (lookahead == 'd') ADVANCE(102);
      if (lookahead == 'n') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_user_op);
      if (lookahead == 'd') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_user_op);
      if (lookahead == 'd') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_user_op);
      if (lookahead == 'd') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_user_op);
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead == 'o') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_user_op);
      if (lookahead == 'e') ADVANCE(95);
      if (lookahead == 'l' ||
          lookahead == 'r') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_user_op);
      if (lookahead == 'e') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_user_op);
      if (lookahead == 'e') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_user_op);
      if (lookahead == 'f') ADVANCE(104);
      if (lookahead == 'm') ADVANCE(25);
      if (lookahead == 'n') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_user_op);
      if (lookahead == 'f') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_user_op);
      if (lookahead == 'f') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_user_op);
      if (lookahead == 'f') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_user_op);
      if (lookahead == 'g') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_user_op);
      if (lookahead == 'h') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_user_op);
      if (lookahead == 'i') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_user_op);
      if (lookahead == 'i') ADVANCE(20);
      if (lookahead == 'l') ADVANCE(93);
      if (lookahead == 'n') ADVANCE(65);
      if (lookahead == 'x') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_user_op);
      if (lookahead == 'i') ADVANCE(20);
      if (lookahead == 'n') ADVANCE(65);
      if (lookahead == 'x') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_user_op);
      if (lookahead == 'i') ADVANCE(20);
      if (lookahead == 'x') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_user_op);
      if (lookahead == 'i') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_user_op);
      if (lookahead == 'l') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(55);
      if (lookahead == 't') ADVANCE(58);
      if (lookahead == 'u') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_user_op);
      if (lookahead == 'l') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_user_op);
      if (lookahead == 'l') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_user_op);
      if (lookahead == 'l') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_user_op);
      if (lookahead == 'n') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_user_op);
      if (lookahead == 'o') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_user_op);
      if (lookahead == 'o') ADVANCE(89);
      if (lookahead == 'u') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_user_op);
      if (lookahead == 'p') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_user_op);
      if (lookahead == 'p') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_user_op);
      if (lookahead == 'r') ADVANCE(35);
      if (lookahead == 't') ADVANCE(100);
      if (lookahead == 'u') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_user_op);
      if (lookahead == 'r') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_user_op);
      if (lookahead == 'r') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_user_op);
      if (lookahead == 's') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_user_op);
      if (lookahead == 's') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_user_op);
      if (lookahead == 's') ADVANCE(41);
      if (lookahead == 't') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_user_op);
      if (lookahead == 't') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_user_op);
      if (lookahead == 't') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_user_op);
      if (lookahead == 't') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_user_op);
      if (lookahead == 'z') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(103);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_user_op);
      if (lookahead == 'd' ||
          lookahead == 'i') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_user_op);
      if (lookahead == 'p' ||
          lookahead == 'r') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_user_op);
      if (lookahead == 'c' ||
          lookahead == 'd') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_user_op);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_if_op);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_else_op);
      if (lookahead == 'i') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_elseif_op);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_endif_op);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 4, .external_lex_state = 1},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 4, .external_lex_state = 1},
  [15] = {.lex_state = 4, .external_lex_state = 1},
  [16] = {.lex_state = 4, .external_lex_state = 1},
  [17] = {.lex_state = 4, .external_lex_state = 1},
  [18] = {.lex_state = 4, .external_lex_state = 1},
  [19] = {.lex_state = 4, .external_lex_state = 1},
  [20] = {.lex_state = 4, .external_lex_state = 1},
  [21] = {.lex_state = 4, .external_lex_state = 1},
  [22] = {.lex_state = 4, .external_lex_state = 1},
  [23] = {.lex_state = 4, .external_lex_state = 1},
  [24] = {.lex_state = 4, .external_lex_state = 1},
  [25] = {.lex_state = 4, .external_lex_state = 1},
  [26] = {.lex_state = 4, .external_lex_state = 2},
  [27] = {.lex_state = 4, .external_lex_state = 2},
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
  [43] = {.lex_state = 4, .external_lex_state = 1},
  [44] = {.lex_state = 0, .external_lex_state = 1},
  [45] = {.lex_state = 4, .external_lex_state = 1},
  [46] = {.lex_state = 4, .external_lex_state = 1},
  [47] = {.lex_state = 4, .external_lex_state = 1},
  [48] = {.lex_state = 0, .external_lex_state = 1},
  [49] = {.lex_state = 4, .external_lex_state = 1},
  [50] = {.lex_state = 0, .external_lex_state = 1},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 4, .external_lex_state = 2},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 0, .external_lex_state = 1},
  [56] = {.lex_state = 0, .external_lex_state = 1},
  [57] = {.lex_state = 0, .external_lex_state = 1},
  [58] = {.lex_state = 0, .external_lex_state = 1},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 0, .external_lex_state = 1},
  [61] = {.lex_state = 0, .external_lex_state = 1},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 0, .external_lex_state = 1},
  [64] = {.lex_state = 0, .external_lex_state = 1},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 4, .external_lex_state = 2},
  [67] = {.lex_state = 4, .external_lex_state = 2},
  [68] = {.lex_state = 4, .external_lex_state = 2},
  [69] = {.lex_state = 4, .external_lex_state = 2},
  [70] = {.lex_state = 4, .external_lex_state = 2},
  [71] = {.lex_state = 4, .external_lex_state = 2},
  [72] = {.lex_state = 4, .external_lex_state = 2},
  [73] = {.lex_state = 4, .external_lex_state = 2},
  [74] = {.lex_state = 4, .external_lex_state = 2},
  [75] = {.lex_state = 0, .external_lex_state = 1},
  [76] = {.lex_state = 4, .external_lex_state = 2},
  [77] = {.lex_state = 4, .external_lex_state = 2},
  [78] = {.lex_state = 0, .external_lex_state = 1},
  [79] = {.lex_state = 0, .external_lex_state = 3},
  [80] = {.lex_state = 0, .external_lex_state = 3},
  [81] = {.lex_state = 0, .external_lex_state = 3},
  [82] = {.lex_state = 0, .external_lex_state = 3},
  [83] = {.lex_state = 0, .external_lex_state = 3},
  [84] = {.lex_state = 0, .external_lex_state = 2},
  [85] = {.lex_state = 0, .external_lex_state = 3},
  [86] = {.lex_state = 0, .external_lex_state = 3},
  [87] = {.lex_state = 0, .external_lex_state = 3},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 0, .external_lex_state = 3},
  [90] = {.lex_state = 0, .external_lex_state = 3},
  [91] = {.lex_state = 0, .external_lex_state = 3},
  [92] = {.lex_state = 0, .external_lex_state = 2},
  [93] = {.lex_state = 0, .external_lex_state = 3},
  [94] = {.lex_state = 0, .external_lex_state = 3},
  [95] = {.lex_state = 0, .external_lex_state = 3},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0, .external_lex_state = 3},
  [98] = {.lex_state = 0, .external_lex_state = 2},
  [99] = {.lex_state = 0, .external_lex_state = 2},
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
    [aux_sym_z80_op_token1] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_bit] = ACTIONS(1),
    [anon_sym_call] = ACTIONS(1),
    [anon_sym_ccf] = ACTIONS(1),
    [aux_sym_z80_op_token2] = ACTIONS(1),
    [anon_sym_cpl] = ACTIONS(1),
    [anon_sym_daa] = ACTIONS(1),
    [anon_sym_dec] = ACTIONS(1),
    [aux_sym_z80_op_token3] = ACTIONS(1),
    [anon_sym_djnz] = ACTIONS(1),
    [aux_sym_z80_op_token4] = ACTIONS(1),
    [anon_sym_halt] = ACTIONS(1),
    [anon_sym_im] = ACTIONS(1),
    [aux_sym_z80_op_token5] = ACTIONS(1),
    [aux_sym_z80_op_token6] = ACTIONS(1),
    [aux_sym_z80_op_token7] = ACTIONS(1),
    [anon_sym_neg] = ACTIONS(1),
    [anon_sym_nop] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [aux_sym_z80_op_token8] = ACTIONS(1),
    [aux_sym_z80_op_token9] = ACTIONS(1),
    [anon_sym_pop] = ACTIONS(1),
    [anon_sym_push] = ACTIONS(1),
    [anon_sym_res] = ACTIONS(1),
    [aux_sym_z80_op_token10] = ACTIONS(1),
    [aux_sym_z80_op_token11] = ACTIONS(1),
    [aux_sym_z80_op_token12] = ACTIONS(1),
    [anon_sym_srl] = ACTIONS(1),
    [anon_sym_sub] = ACTIONS(1),
    [anon_sym_xor] = ACTIONS(1),
    [anon_sym_sl1] = ACTIONS(1),
    [sym_z80n_op] = ACTIONS(1),
    [sym_user_op] = ACTIONS(1),
    [sym_if_op] = ACTIONS(1),
    [sym_else_op] = ACTIONS(1),
    [sym_elseif_op] = ACTIONS(1),
    [sym_endif_op] = ACTIONS(1),
    [sym_nl] = ACTIONS(1),
    [sym_ws] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(96),
    [sym_block] = STATE(17),
    [sym_line] = STATE(30),
    [sym_empty_line] = STATE(36),
    [sym_label_line] = STATE(36),
    [sym_nolabel_line] = STATE(36),
    [sym_full_line] = STATE(36),
    [sym_if_block] = STATE(37),
    [sym_if_line] = STATE(25),
    [aux_sym_program_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_label] = ACTIONS(5),
    [sym_nl] = ACTIONS(7),
    [sym_ws] = ACTIONS(9),
  },
  [2] = {
    [sym_stuff] = STATE(91),
    [sym_op] = STATE(50),
    [sym_z80_op] = STATE(63),
    [aux_sym_z80_op_token1] = ACTIONS(11),
    [anon_sym_and] = ACTIONS(11),
    [anon_sym_bit] = ACTIONS(11),
    [anon_sym_call] = ACTIONS(11),
    [anon_sym_ccf] = ACTIONS(11),
    [aux_sym_z80_op_token2] = ACTIONS(11),
    [anon_sym_cpl] = ACTIONS(11),
    [anon_sym_daa] = ACTIONS(11),
    [anon_sym_dec] = ACTIONS(11),
    [aux_sym_z80_op_token3] = ACTIONS(11),
    [anon_sym_djnz] = ACTIONS(11),
    [aux_sym_z80_op_token4] = ACTIONS(11),
    [anon_sym_halt] = ACTIONS(11),
    [anon_sym_im] = ACTIONS(11),
    [aux_sym_z80_op_token5] = ACTIONS(11),
    [aux_sym_z80_op_token6] = ACTIONS(11),
    [aux_sym_z80_op_token7] = ACTIONS(11),
    [anon_sym_neg] = ACTIONS(11),
    [anon_sym_nop] = ACTIONS(11),
    [anon_sym_or] = ACTIONS(11),
    [aux_sym_z80_op_token8] = ACTIONS(11),
    [aux_sym_z80_op_token9] = ACTIONS(11),
    [anon_sym_pop] = ACTIONS(11),
    [anon_sym_push] = ACTIONS(11),
    [anon_sym_res] = ACTIONS(11),
    [aux_sym_z80_op_token10] = ACTIONS(11),
    [aux_sym_z80_op_token11] = ACTIONS(11),
    [aux_sym_z80_op_token12] = ACTIONS(11),
    [anon_sym_srl] = ACTIONS(11),
    [anon_sym_sub] = ACTIONS(11),
    [anon_sym_xor] = ACTIONS(11),
    [anon_sym_sl1] = ACTIONS(11),
    [sym_z80n_op] = ACTIONS(13),
    [sym_user_op] = ACTIONS(15),
    [sym_if_op] = ACTIONS(17),
    [sym_else_op] = ACTIONS(19),
    [sym_elseif_op] = ACTIONS(21),
    [sym_endif_op] = ACTIONS(23),
  },
  [3] = {
    [sym_stuff] = STATE(91),
    [sym_op] = STATE(50),
    [sym_z80_op] = STATE(63),
    [aux_sym_z80_op_token1] = ACTIONS(11),
    [anon_sym_and] = ACTIONS(11),
    [anon_sym_bit] = ACTIONS(11),
    [anon_sym_call] = ACTIONS(11),
    [anon_sym_ccf] = ACTIONS(11),
    [aux_sym_z80_op_token2] = ACTIONS(11),
    [anon_sym_cpl] = ACTIONS(11),
    [anon_sym_daa] = ACTIONS(11),
    [anon_sym_dec] = ACTIONS(11),
    [aux_sym_z80_op_token3] = ACTIONS(11),
    [anon_sym_djnz] = ACTIONS(11),
    [aux_sym_z80_op_token4] = ACTIONS(11),
    [anon_sym_halt] = ACTIONS(11),
    [anon_sym_im] = ACTIONS(11),
    [aux_sym_z80_op_token5] = ACTIONS(11),
    [aux_sym_z80_op_token6] = ACTIONS(11),
    [aux_sym_z80_op_token7] = ACTIONS(11),
    [anon_sym_neg] = ACTIONS(11),
    [anon_sym_nop] = ACTIONS(11),
    [anon_sym_or] = ACTIONS(11),
    [aux_sym_z80_op_token8] = ACTIONS(11),
    [aux_sym_z80_op_token9] = ACTIONS(11),
    [anon_sym_pop] = ACTIONS(11),
    [anon_sym_push] = ACTIONS(11),
    [anon_sym_res] = ACTIONS(11),
    [aux_sym_z80_op_token10] = ACTIONS(11),
    [aux_sym_z80_op_token11] = ACTIONS(11),
    [aux_sym_z80_op_token12] = ACTIONS(11),
    [anon_sym_srl] = ACTIONS(11),
    [anon_sym_sub] = ACTIONS(11),
    [anon_sym_xor] = ACTIONS(11),
    [anon_sym_sl1] = ACTIONS(11),
    [sym_z80n_op] = ACTIONS(13),
    [sym_user_op] = ACTIONS(15),
    [sym_if_op] = ACTIONS(17),
    [sym_else_op] = ACTIONS(19),
    [sym_elseif_op] = ACTIONS(21),
    [sym_endif_op] = ACTIONS(25),
  },
  [4] = {
    [sym_stuff] = STATE(86),
    [sym_op] = STATE(50),
    [sym_z80_op] = STATE(63),
    [aux_sym_z80_op_token1] = ACTIONS(11),
    [anon_sym_and] = ACTIONS(11),
    [anon_sym_bit] = ACTIONS(11),
    [anon_sym_call] = ACTIONS(11),
    [anon_sym_ccf] = ACTIONS(11),
    [aux_sym_z80_op_token2] = ACTIONS(11),
    [anon_sym_cpl] = ACTIONS(11),
    [anon_sym_daa] = ACTIONS(11),
    [anon_sym_dec] = ACTIONS(11),
    [aux_sym_z80_op_token3] = ACTIONS(11),
    [anon_sym_djnz] = ACTIONS(11),
    [aux_sym_z80_op_token4] = ACTIONS(11),
    [anon_sym_halt] = ACTIONS(11),
    [anon_sym_im] = ACTIONS(11),
    [aux_sym_z80_op_token5] = ACTIONS(11),
    [aux_sym_z80_op_token6] = ACTIONS(11),
    [aux_sym_z80_op_token7] = ACTIONS(11),
    [anon_sym_neg] = ACTIONS(11),
    [anon_sym_nop] = ACTIONS(11),
    [anon_sym_or] = ACTIONS(11),
    [aux_sym_z80_op_token8] = ACTIONS(11),
    [aux_sym_z80_op_token9] = ACTIONS(11),
    [anon_sym_pop] = ACTIONS(11),
    [anon_sym_push] = ACTIONS(11),
    [anon_sym_res] = ACTIONS(11),
    [aux_sym_z80_op_token10] = ACTIONS(11),
    [aux_sym_z80_op_token11] = ACTIONS(11),
    [aux_sym_z80_op_token12] = ACTIONS(11),
    [anon_sym_srl] = ACTIONS(11),
    [anon_sym_sub] = ACTIONS(11),
    [anon_sym_xor] = ACTIONS(11),
    [anon_sym_sl1] = ACTIONS(11),
    [sym_z80n_op] = ACTIONS(13),
    [sym_user_op] = ACTIONS(15),
    [sym_if_op] = ACTIONS(27),
    [sym_else_op] = ACTIONS(29),
    [sym_elseif_op] = ACTIONS(31),
    [sym_endif_op] = ACTIONS(33),
  },
  [5] = {
    [sym_stuff] = STATE(86),
    [sym_op] = STATE(50),
    [sym_z80_op] = STATE(63),
    [aux_sym_z80_op_token1] = ACTIONS(11),
    [anon_sym_and] = ACTIONS(11),
    [anon_sym_bit] = ACTIONS(11),
    [anon_sym_call] = ACTIONS(11),
    [anon_sym_ccf] = ACTIONS(11),
    [aux_sym_z80_op_token2] = ACTIONS(11),
    [anon_sym_cpl] = ACTIONS(11),
    [anon_sym_daa] = ACTIONS(11),
    [anon_sym_dec] = ACTIONS(11),
    [aux_sym_z80_op_token3] = ACTIONS(11),
    [anon_sym_djnz] = ACTIONS(11),
    [aux_sym_z80_op_token4] = ACTIONS(11),
    [anon_sym_halt] = ACTIONS(11),
    [anon_sym_im] = ACTIONS(11),
    [aux_sym_z80_op_token5] = ACTIONS(11),
    [aux_sym_z80_op_token6] = ACTIONS(11),
    [aux_sym_z80_op_token7] = ACTIONS(11),
    [anon_sym_neg] = ACTIONS(11),
    [anon_sym_nop] = ACTIONS(11),
    [anon_sym_or] = ACTIONS(11),
    [aux_sym_z80_op_token8] = ACTIONS(11),
    [aux_sym_z80_op_token9] = ACTIONS(11),
    [anon_sym_pop] = ACTIONS(11),
    [anon_sym_push] = ACTIONS(11),
    [anon_sym_res] = ACTIONS(11),
    [aux_sym_z80_op_token10] = ACTIONS(11),
    [aux_sym_z80_op_token11] = ACTIONS(11),
    [aux_sym_z80_op_token12] = ACTIONS(11),
    [anon_sym_srl] = ACTIONS(11),
    [anon_sym_sub] = ACTIONS(11),
    [anon_sym_xor] = ACTIONS(11),
    [anon_sym_sl1] = ACTIONS(11),
    [sym_z80n_op] = ACTIONS(13),
    [sym_user_op] = ACTIONS(15),
    [sym_if_op] = ACTIONS(27),
    [sym_else_op] = ACTIONS(29),
    [sym_elseif_op] = ACTIONS(31),
    [sym_endif_op] = ACTIONS(35),
  },
  [6] = {
    [sym_stuff] = STATE(86),
    [sym_op] = STATE(50),
    [sym_z80_op] = STATE(63),
    [aux_sym_z80_op_token1] = ACTIONS(11),
    [anon_sym_and] = ACTIONS(11),
    [anon_sym_bit] = ACTIONS(11),
    [anon_sym_call] = ACTIONS(11),
    [anon_sym_ccf] = ACTIONS(11),
    [aux_sym_z80_op_token2] = ACTIONS(11),
    [anon_sym_cpl] = ACTIONS(11),
    [anon_sym_daa] = ACTIONS(11),
    [anon_sym_dec] = ACTIONS(11),
    [aux_sym_z80_op_token3] = ACTIONS(11),
    [anon_sym_djnz] = ACTIONS(11),
    [aux_sym_z80_op_token4] = ACTIONS(11),
    [anon_sym_halt] = ACTIONS(11),
    [anon_sym_im] = ACTIONS(11),
    [aux_sym_z80_op_token5] = ACTIONS(11),
    [aux_sym_z80_op_token6] = ACTIONS(11),
    [aux_sym_z80_op_token7] = ACTIONS(11),
    [anon_sym_neg] = ACTIONS(11),
    [anon_sym_nop] = ACTIONS(11),
    [anon_sym_or] = ACTIONS(11),
    [aux_sym_z80_op_token8] = ACTIONS(11),
    [aux_sym_z80_op_token9] = ACTIONS(11),
    [anon_sym_pop] = ACTIONS(11),
    [anon_sym_push] = ACTIONS(11),
    [anon_sym_res] = ACTIONS(11),
    [aux_sym_z80_op_token10] = ACTIONS(11),
    [aux_sym_z80_op_token11] = ACTIONS(11),
    [aux_sym_z80_op_token12] = ACTIONS(11),
    [anon_sym_srl] = ACTIONS(11),
    [anon_sym_sub] = ACTIONS(11),
    [anon_sym_xor] = ACTIONS(11),
    [anon_sym_sl1] = ACTIONS(11),
    [sym_z80n_op] = ACTIONS(13),
    [sym_user_op] = ACTIONS(15),
    [sym_if_op] = ACTIONS(27),
    [sym_endif_op] = ACTIONS(35),
  },
  [7] = {
    [sym_stuff] = STATE(91),
    [sym_op] = STATE(50),
    [sym_z80_op] = STATE(63),
    [aux_sym_z80_op_token1] = ACTIONS(11),
    [anon_sym_and] = ACTIONS(11),
    [anon_sym_bit] = ACTIONS(11),
    [anon_sym_call] = ACTIONS(11),
    [anon_sym_ccf] = ACTIONS(11),
    [aux_sym_z80_op_token2] = ACTIONS(11),
    [anon_sym_cpl] = ACTIONS(11),
    [anon_sym_daa] = ACTIONS(11),
    [anon_sym_dec] = ACTIONS(11),
    [aux_sym_z80_op_token3] = ACTIONS(11),
    [anon_sym_djnz] = ACTIONS(11),
    [aux_sym_z80_op_token4] = ACTIONS(11),
    [anon_sym_halt] = ACTIONS(11),
    [anon_sym_im] = ACTIONS(11),
    [aux_sym_z80_op_token5] = ACTIONS(11),
    [aux_sym_z80_op_token6] = ACTIONS(11),
    [aux_sym_z80_op_token7] = ACTIONS(11),
    [anon_sym_neg] = ACTIONS(11),
    [anon_sym_nop] = ACTIONS(11),
    [anon_sym_or] = ACTIONS(11),
    [aux_sym_z80_op_token8] = ACTIONS(11),
    [aux_sym_z80_op_token9] = ACTIONS(11),
    [anon_sym_pop] = ACTIONS(11),
    [anon_sym_push] = ACTIONS(11),
    [anon_sym_res] = ACTIONS(11),
    [aux_sym_z80_op_token10] = ACTIONS(11),
    [aux_sym_z80_op_token11] = ACTIONS(11),
    [aux_sym_z80_op_token12] = ACTIONS(11),
    [anon_sym_srl] = ACTIONS(11),
    [anon_sym_sub] = ACTIONS(11),
    [anon_sym_xor] = ACTIONS(11),
    [anon_sym_sl1] = ACTIONS(11),
    [sym_z80n_op] = ACTIONS(13),
    [sym_user_op] = ACTIONS(15),
    [sym_if_op] = ACTIONS(17),
    [sym_endif_op] = ACTIONS(25),
  },
  [8] = {
    [sym_stuff] = STATE(86),
    [sym_op] = STATE(50),
    [sym_z80_op] = STATE(63),
    [aux_sym_z80_op_token1] = ACTIONS(11),
    [anon_sym_and] = ACTIONS(11),
    [anon_sym_bit] = ACTIONS(11),
    [anon_sym_call] = ACTIONS(11),
    [anon_sym_ccf] = ACTIONS(11),
    [aux_sym_z80_op_token2] = ACTIONS(11),
    [anon_sym_cpl] = ACTIONS(11),
    [anon_sym_daa] = ACTIONS(11),
    [anon_sym_dec] = ACTIONS(11),
    [aux_sym_z80_op_token3] = ACTIONS(11),
    [anon_sym_djnz] = ACTIONS(11),
    [aux_sym_z80_op_token4] = ACTIONS(11),
    [anon_sym_halt] = ACTIONS(11),
    [anon_sym_im] = ACTIONS(11),
    [aux_sym_z80_op_token5] = ACTIONS(11),
    [aux_sym_z80_op_token6] = ACTIONS(11),
    [aux_sym_z80_op_token7] = ACTIONS(11),
    [anon_sym_neg] = ACTIONS(11),
    [anon_sym_nop] = ACTIONS(11),
    [anon_sym_or] = ACTIONS(11),
    [aux_sym_z80_op_token8] = ACTIONS(11),
    [aux_sym_z80_op_token9] = ACTIONS(11),
    [anon_sym_pop] = ACTIONS(11),
    [anon_sym_push] = ACTIONS(11),
    [anon_sym_res] = ACTIONS(11),
    [aux_sym_z80_op_token10] = ACTIONS(11),
    [aux_sym_z80_op_token11] = ACTIONS(11),
    [aux_sym_z80_op_token12] = ACTIONS(11),
    [anon_sym_srl] = ACTIONS(11),
    [anon_sym_sub] = ACTIONS(11),
    [anon_sym_xor] = ACTIONS(11),
    [anon_sym_sl1] = ACTIONS(11),
    [sym_z80n_op] = ACTIONS(13),
    [sym_user_op] = ACTIONS(15),
    [sym_if_op] = ACTIONS(27),
    [sym_endif_op] = ACTIONS(33),
  },
  [9] = {
    [sym_stuff] = STATE(91),
    [sym_op] = STATE(50),
    [sym_z80_op] = STATE(63),
    [aux_sym_z80_op_token1] = ACTIONS(11),
    [anon_sym_and] = ACTIONS(11),
    [anon_sym_bit] = ACTIONS(11),
    [anon_sym_call] = ACTIONS(11),
    [anon_sym_ccf] = ACTIONS(11),
    [aux_sym_z80_op_token2] = ACTIONS(11),
    [anon_sym_cpl] = ACTIONS(11),
    [anon_sym_daa] = ACTIONS(11),
    [anon_sym_dec] = ACTIONS(11),
    [aux_sym_z80_op_token3] = ACTIONS(11),
    [anon_sym_djnz] = ACTIONS(11),
    [aux_sym_z80_op_token4] = ACTIONS(11),
    [anon_sym_halt] = ACTIONS(11),
    [anon_sym_im] = ACTIONS(11),
    [aux_sym_z80_op_token5] = ACTIONS(11),
    [aux_sym_z80_op_token6] = ACTIONS(11),
    [aux_sym_z80_op_token7] = ACTIONS(11),
    [anon_sym_neg] = ACTIONS(11),
    [anon_sym_nop] = ACTIONS(11),
    [anon_sym_or] = ACTIONS(11),
    [aux_sym_z80_op_token8] = ACTIONS(11),
    [aux_sym_z80_op_token9] = ACTIONS(11),
    [anon_sym_pop] = ACTIONS(11),
    [anon_sym_push] = ACTIONS(11),
    [anon_sym_res] = ACTIONS(11),
    [aux_sym_z80_op_token10] = ACTIONS(11),
    [aux_sym_z80_op_token11] = ACTIONS(11),
    [aux_sym_z80_op_token12] = ACTIONS(11),
    [anon_sym_srl] = ACTIONS(11),
    [anon_sym_sub] = ACTIONS(11),
    [anon_sym_xor] = ACTIONS(11),
    [anon_sym_sl1] = ACTIONS(11),
    [sym_z80n_op] = ACTIONS(13),
    [sym_user_op] = ACTIONS(15),
    [sym_if_op] = ACTIONS(17),
    [sym_endif_op] = ACTIONS(23),
  },
  [10] = {
    [sym_stuff] = STATE(91),
    [sym_op] = STATE(50),
    [sym_z80_op] = STATE(63),
    [aux_sym_z80_op_token1] = ACTIONS(11),
    [anon_sym_and] = ACTIONS(11),
    [anon_sym_bit] = ACTIONS(11),
    [anon_sym_call] = ACTIONS(11),
    [anon_sym_ccf] = ACTIONS(11),
    [aux_sym_z80_op_token2] = ACTIONS(11),
    [anon_sym_cpl] = ACTIONS(11),
    [anon_sym_daa] = ACTIONS(11),
    [anon_sym_dec] = ACTIONS(11),
    [aux_sym_z80_op_token3] = ACTIONS(11),
    [anon_sym_djnz] = ACTIONS(11),
    [aux_sym_z80_op_token4] = ACTIONS(11),
    [anon_sym_halt] = ACTIONS(11),
    [anon_sym_im] = ACTIONS(11),
    [aux_sym_z80_op_token5] = ACTIONS(11),
    [aux_sym_z80_op_token6] = ACTIONS(11),
    [aux_sym_z80_op_token7] = ACTIONS(11),
    [anon_sym_neg] = ACTIONS(11),
    [anon_sym_nop] = ACTIONS(11),
    [anon_sym_or] = ACTIONS(11),
    [aux_sym_z80_op_token8] = ACTIONS(11),
    [aux_sym_z80_op_token9] = ACTIONS(11),
    [anon_sym_pop] = ACTIONS(11),
    [anon_sym_push] = ACTIONS(11),
    [anon_sym_res] = ACTIONS(11),
    [aux_sym_z80_op_token10] = ACTIONS(11),
    [aux_sym_z80_op_token11] = ACTIONS(11),
    [aux_sym_z80_op_token12] = ACTIONS(11),
    [anon_sym_srl] = ACTIONS(11),
    [anon_sym_sub] = ACTIONS(11),
    [anon_sym_xor] = ACTIONS(11),
    [anon_sym_sl1] = ACTIONS(11),
    [sym_z80n_op] = ACTIONS(13),
    [sym_user_op] = ACTIONS(15),
    [sym_if_op] = ACTIONS(17),
  },
  [11] = {
    [sym_stuff] = STATE(81),
    [sym_op] = STATE(50),
    [sym_z80_op] = STATE(63),
    [aux_sym_z80_op_token1] = ACTIONS(11),
    [anon_sym_and] = ACTIONS(11),
    [anon_sym_bit] = ACTIONS(11),
    [anon_sym_call] = ACTIONS(11),
    [anon_sym_ccf] = ACTIONS(11),
    [aux_sym_z80_op_token2] = ACTIONS(11),
    [anon_sym_cpl] = ACTIONS(11),
    [anon_sym_daa] = ACTIONS(11),
    [anon_sym_dec] = ACTIONS(11),
    [aux_sym_z80_op_token3] = ACTIONS(11),
    [anon_sym_djnz] = ACTIONS(11),
    [aux_sym_z80_op_token4] = ACTIONS(11),
    [anon_sym_halt] = ACTIONS(11),
    [anon_sym_im] = ACTIONS(11),
    [aux_sym_z80_op_token5] = ACTIONS(11),
    [aux_sym_z80_op_token6] = ACTIONS(11),
    [aux_sym_z80_op_token7] = ACTIONS(11),
    [anon_sym_neg] = ACTIONS(11),
    [anon_sym_nop] = ACTIONS(11),
    [anon_sym_or] = ACTIONS(11),
    [aux_sym_z80_op_token8] = ACTIONS(11),
    [aux_sym_z80_op_token9] = ACTIONS(11),
    [anon_sym_pop] = ACTIONS(11),
    [anon_sym_push] = ACTIONS(11),
    [anon_sym_res] = ACTIONS(11),
    [aux_sym_z80_op_token10] = ACTIONS(11),
    [aux_sym_z80_op_token11] = ACTIONS(11),
    [aux_sym_z80_op_token12] = ACTIONS(11),
    [anon_sym_srl] = ACTIONS(11),
    [anon_sym_sub] = ACTIONS(11),
    [anon_sym_xor] = ACTIONS(11),
    [anon_sym_sl1] = ACTIONS(11),
    [sym_z80n_op] = ACTIONS(13),
    [sym_user_op] = ACTIONS(15),
    [sym_if_op] = ACTIONS(27),
  },
  [12] = {
    [sym_stuff] = STATE(79),
    [sym_op] = STATE(50),
    [sym_z80_op] = STATE(63),
    [aux_sym_z80_op_token1] = ACTIONS(11),
    [anon_sym_and] = ACTIONS(11),
    [anon_sym_bit] = ACTIONS(11),
    [anon_sym_call] = ACTIONS(11),
    [anon_sym_ccf] = ACTIONS(11),
    [aux_sym_z80_op_token2] = ACTIONS(11),
    [anon_sym_cpl] = ACTIONS(11),
    [anon_sym_daa] = ACTIONS(11),
    [anon_sym_dec] = ACTIONS(11),
    [aux_sym_z80_op_token3] = ACTIONS(11),
    [anon_sym_djnz] = ACTIONS(11),
    [aux_sym_z80_op_token4] = ACTIONS(11),
    [anon_sym_halt] = ACTIONS(11),
    [anon_sym_im] = ACTIONS(11),
    [aux_sym_z80_op_token5] = ACTIONS(11),
    [aux_sym_z80_op_token6] = ACTIONS(11),
    [aux_sym_z80_op_token7] = ACTIONS(11),
    [anon_sym_neg] = ACTIONS(11),
    [anon_sym_nop] = ACTIONS(11),
    [anon_sym_or] = ACTIONS(11),
    [aux_sym_z80_op_token8] = ACTIONS(11),
    [aux_sym_z80_op_token9] = ACTIONS(11),
    [anon_sym_pop] = ACTIONS(11),
    [anon_sym_push] = ACTIONS(11),
    [anon_sym_res] = ACTIONS(11),
    [aux_sym_z80_op_token10] = ACTIONS(11),
    [aux_sym_z80_op_token11] = ACTIONS(11),
    [aux_sym_z80_op_token12] = ACTIONS(11),
    [anon_sym_srl] = ACTIONS(11),
    [anon_sym_sub] = ACTIONS(11),
    [anon_sym_xor] = ACTIONS(11),
    [anon_sym_sl1] = ACTIONS(11),
    [sym_z80n_op] = ACTIONS(13),
    [sym_user_op] = ACTIONS(15),
    [sym_if_op] = ACTIONS(17),
  },
  [13] = {
    [sym_stuff] = STATE(86),
    [sym_op] = STATE(50),
    [sym_z80_op] = STATE(63),
    [aux_sym_z80_op_token1] = ACTIONS(11),
    [anon_sym_and] = ACTIONS(11),
    [anon_sym_bit] = ACTIONS(11),
    [anon_sym_call] = ACTIONS(11),
    [anon_sym_ccf] = ACTIONS(11),
    [aux_sym_z80_op_token2] = ACTIONS(11),
    [anon_sym_cpl] = ACTIONS(11),
    [anon_sym_daa] = ACTIONS(11),
    [anon_sym_dec] = ACTIONS(11),
    [aux_sym_z80_op_token3] = ACTIONS(11),
    [anon_sym_djnz] = ACTIONS(11),
    [aux_sym_z80_op_token4] = ACTIONS(11),
    [anon_sym_halt] = ACTIONS(11),
    [anon_sym_im] = ACTIONS(11),
    [aux_sym_z80_op_token5] = ACTIONS(11),
    [aux_sym_z80_op_token6] = ACTIONS(11),
    [aux_sym_z80_op_token7] = ACTIONS(11),
    [anon_sym_neg] = ACTIONS(11),
    [anon_sym_nop] = ACTIONS(11),
    [anon_sym_or] = ACTIONS(11),
    [aux_sym_z80_op_token8] = ACTIONS(11),
    [aux_sym_z80_op_token9] = ACTIONS(11),
    [anon_sym_pop] = ACTIONS(11),
    [anon_sym_push] = ACTIONS(11),
    [anon_sym_res] = ACTIONS(11),
    [aux_sym_z80_op_token10] = ACTIONS(11),
    [aux_sym_z80_op_token11] = ACTIONS(11),
    [aux_sym_z80_op_token12] = ACTIONS(11),
    [anon_sym_srl] = ACTIONS(11),
    [anon_sym_sub] = ACTIONS(11),
    [anon_sym_xor] = ACTIONS(11),
    [anon_sym_sl1] = ACTIONS(11),
    [sym_z80n_op] = ACTIONS(13),
    [sym_user_op] = ACTIONS(15),
    [sym_if_op] = ACTIONS(27),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(7), 1,
      sym_nl,
    ACTIONS(37), 1,
      sym_label,
    ACTIONS(39), 1,
      sym_ws,
    STATE(22), 1,
      sym_elseif_line,
    STATE(23), 1,
      sym_else_line,
    STATE(25), 1,
      sym_if_line,
    STATE(28), 1,
      sym_else_block,
    STATE(30), 1,
      sym_line,
    STATE(34), 1,
      sym_endif_line,
    STATE(37), 1,
      sym_if_block,
    STATE(19), 2,
      sym_block,
      aux_sym_program_repeat1,
    STATE(36), 4,
      sym_empty_line,
      sym_label_line,
      sym_nolabel_line,
      sym_full_line,
  [41] = 12,
    ACTIONS(7), 1,
      sym_nl,
    ACTIONS(41), 1,
      sym_label,
    ACTIONS(43), 1,
      sym_ws,
    STATE(20), 1,
      sym_elseif_line,
    STATE(21), 1,
      sym_else_line,
    STATE(25), 1,
      sym_if_line,
    STATE(30), 1,
      sym_line,
    STATE(37), 1,
      sym_if_block,
    STATE(73), 1,
      sym_endif_line,
    STATE(76), 1,
      sym_else_block,
    STATE(19), 2,
      sym_block,
      aux_sym_program_repeat1,
    STATE(36), 4,
      sym_empty_line,
      sym_label_line,
      sym_nolabel_line,
      sym_full_line,
  [82] = 9,
    ACTIONS(7), 1,
      sym_nl,
    ACTIONS(45), 1,
      sym_label,
    ACTIONS(47), 1,
      sym_ws,
    STATE(25), 1,
      sym_if_line,
    STATE(28), 1,
      sym_endif_line,
    STATE(30), 1,
      sym_line,
    STATE(37), 1,
      sym_if_block,
    STATE(19), 2,
      sym_block,
      aux_sym_program_repeat1,
    STATE(36), 4,
      sym_empty_line,
      sym_label_line,
      sym_nolabel_line,
      sym_full_line,
  [114] = 9,
    ACTIONS(5), 1,
      sym_label,
    ACTIONS(7), 1,
      sym_nl,
    ACTIONS(9), 1,
      sym_ws,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    STATE(25), 1,
      sym_if_line,
    STATE(30), 1,
      sym_line,
    STATE(37), 1,
      sym_if_block,
    STATE(19), 2,
      sym_block,
      aux_sym_program_repeat1,
    STATE(36), 4,
      sym_empty_line,
      sym_label_line,
      sym_nolabel_line,
      sym_full_line,
  [146] = 9,
    ACTIONS(7), 1,
      sym_nl,
    ACTIONS(51), 1,
      sym_label,
    ACTIONS(53), 1,
      sym_ws,
    STATE(25), 1,
      sym_if_line,
    STATE(30), 1,
      sym_line,
    STATE(37), 1,
      sym_if_block,
    STATE(76), 1,
      sym_endif_line,
    STATE(19), 2,
      sym_block,
      aux_sym_program_repeat1,
    STATE(36), 4,
      sym_empty_line,
      sym_label_line,
      sym_nolabel_line,
      sym_full_line,
  [178] = 9,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(57), 1,
      sym_label,
    ACTIONS(60), 1,
      sym_nl,
    ACTIONS(63), 1,
      sym_ws,
    STATE(25), 1,
      sym_if_line,
    STATE(30), 1,
      sym_line,
    STATE(37), 1,
      sym_if_block,
    STATE(19), 2,
      sym_block,
      aux_sym_program_repeat1,
    STATE(36), 4,
      sym_empty_line,
      sym_label_line,
      sym_nolabel_line,
      sym_full_line,
  [210] = 8,
    ACTIONS(5), 1,
      sym_label,
    ACTIONS(7), 1,
      sym_nl,
    ACTIONS(9), 1,
      sym_ws,
    STATE(25), 1,
      sym_if_line,
    STATE(30), 1,
      sym_line,
    STATE(37), 1,
      sym_if_block,
    STATE(15), 2,
      sym_block,
      aux_sym_program_repeat1,
    STATE(36), 4,
      sym_empty_line,
      sym_label_line,
      sym_nolabel_line,
      sym_full_line,
  [239] = 8,
    ACTIONS(5), 1,
      sym_label,
    ACTIONS(7), 1,
      sym_nl,
    ACTIONS(9), 1,
      sym_ws,
    STATE(25), 1,
      sym_if_line,
    STATE(30), 1,
      sym_line,
    STATE(37), 1,
      sym_if_block,
    STATE(18), 2,
      sym_block,
      aux_sym_program_repeat1,
    STATE(36), 4,
      sym_empty_line,
      sym_label_line,
      sym_nolabel_line,
      sym_full_line,
  [268] = 8,
    ACTIONS(5), 1,
      sym_label,
    ACTIONS(7), 1,
      sym_nl,
    ACTIONS(9), 1,
      sym_ws,
    STATE(25), 1,
      sym_if_line,
    STATE(30), 1,
      sym_line,
    STATE(37), 1,
      sym_if_block,
    STATE(14), 2,
      sym_block,
      aux_sym_program_repeat1,
    STATE(36), 4,
      sym_empty_line,
      sym_label_line,
      sym_nolabel_line,
      sym_full_line,
  [297] = 8,
    ACTIONS(5), 1,
      sym_label,
    ACTIONS(7), 1,
      sym_nl,
    ACTIONS(9), 1,
      sym_ws,
    STATE(25), 1,
      sym_if_line,
    STATE(30), 1,
      sym_line,
    STATE(37), 1,
      sym_if_block,
    STATE(16), 2,
      sym_block,
      aux_sym_program_repeat1,
    STATE(36), 4,
      sym_empty_line,
      sym_label_line,
      sym_nolabel_line,
      sym_full_line,
  [326] = 8,
    ACTIONS(66), 1,
      sym_label,
    ACTIONS(68), 1,
      sym_nl,
    ACTIONS(70), 1,
      sym_ws,
    STATE(24), 1,
      sym_if_line,
    STATE(27), 1,
      sym_block,
    STATE(67), 1,
      sym_line,
    STATE(69), 1,
      sym_if_block,
    STATE(68), 4,
      sym_empty_line,
      sym_label_line,
      sym_nolabel_line,
      sym_full_line,
  [354] = 8,
    ACTIONS(66), 1,
      sym_label,
    ACTIONS(68), 1,
      sym_nl,
    ACTIONS(70), 1,
      sym_ws,
    STATE(24), 1,
      sym_if_line,
    STATE(26), 1,
      sym_block,
    STATE(67), 1,
      sym_line,
    STATE(69), 1,
      sym_if_block,
    STATE(68), 4,
      sym_empty_line,
      sym_label_line,
      sym_nolabel_line,
      sym_full_line,
  [382] = 6,
    ACTIONS(72), 1,
      sym_label,
    ACTIONS(74), 1,
      sym_ws,
    STATE(22), 1,
      sym_elseif_line,
    STATE(23), 1,
      sym_else_line,
    STATE(31), 1,
      sym_else_block,
    STATE(34), 1,
      sym_endif_line,
  [401] = 6,
    ACTIONS(76), 1,
      sym_label,
    ACTIONS(78), 1,
      sym_ws,
    STATE(20), 1,
      sym_elseif_line,
    STATE(21), 1,
      sym_else_line,
    STATE(72), 1,
      sym_else_block,
    STATE(73), 1,
      sym_endif_line,
  [420] = 1,
    ACTIONS(80), 4,
      sym_nl,
      sym_ws,
      ts_builtin_sym_end,
      sym_label,
  [427] = 1,
    ACTIONS(82), 4,
      sym_nl,
      sym_ws,
      ts_builtin_sym_end,
      sym_label,
  [434] = 1,
    ACTIONS(84), 4,
      sym_nl,
      sym_ws,
      ts_builtin_sym_end,
      sym_label,
  [441] = 1,
    ACTIONS(86), 4,
      sym_nl,
      sym_ws,
      ts_builtin_sym_end,
      sym_label,
  [448] = 1,
    ACTIONS(88), 4,
      sym_nl,
      sym_ws,
      ts_builtin_sym_end,
      sym_label,
  [455] = 1,
    ACTIONS(90), 4,
      sym_nl,
      sym_ws,
      ts_builtin_sym_end,
      sym_label,
  [462] = 1,
    ACTIONS(92), 4,
      sym_nl,
      sym_ws,
      ts_builtin_sym_end,
      sym_label,
  [469] = 1,
    ACTIONS(94), 4,
      sym_nl,
      sym_ws,
      ts_builtin_sym_end,
      sym_label,
  [476] = 1,
    ACTIONS(96), 4,
      sym_nl,
      sym_ws,
      ts_builtin_sym_end,
      sym_label,
  [483] = 1,
    ACTIONS(84), 4,
      sym_nl,
      sym_ws,
      ts_builtin_sym_end,
      sym_label,
  [490] = 1,
    ACTIONS(98), 4,
      sym_nl,
      sym_ws,
      ts_builtin_sym_end,
      sym_label,
  [497] = 1,
    ACTIONS(100), 4,
      sym_nl,
      sym_ws,
      ts_builtin_sym_end,
      sym_label,
  [504] = 1,
    ACTIONS(102), 3,
      sym_nl,
      sym_ws,
      sym_label,
  [510] = 3,
    ACTIONS(19), 1,
      sym_else_op,
    ACTIONS(104), 1,
      sym_elseif_op,
    ACTIONS(106), 1,
      sym_endif_op,
  [520] = 3,
    ACTIONS(29), 1,
      sym_else_op,
    ACTIONS(108), 1,
      sym_elseif_op,
    ACTIONS(110), 1,
      sym_endif_op,
  [530] = 1,
    ACTIONS(112), 3,
      sym_nl,
      sym_ws,
      sym_label,
  [536] = 3,
    ACTIONS(114), 1,
      sym_nl,
    ACTIONS(116), 1,
      sym_ws,
    STATE(48), 1,
      aux_sym_stuff_repeat1,
  [546] = 1,
    ACTIONS(118), 3,
      sym_nl,
      sym_ws,
      sym_label,
  [552] = 1,
    ACTIONS(120), 3,
      sym_nl,
      sym_ws,
      sym_label,
  [558] = 1,
    ACTIONS(122), 3,
      sym_nl,
      sym_ws,
      sym_label,
  [564] = 3,
    ACTIONS(124), 1,
      sym_nl,
    ACTIONS(126), 1,
      sym_ws,
    STATE(48), 1,
      aux_sym_stuff_repeat1,
  [574] = 1,
    ACTIONS(129), 3,
      sym_nl,
      sym_ws,
      sym_label,
  [580] = 3,
    ACTIONS(116), 1,
      sym_ws,
    ACTIONS(131), 1,
      sym_nl,
    STATE(44), 1,
      aux_sym_stuff_repeat1,
  [590] = 3,
    ACTIONS(19), 1,
      sym_else_op,
    ACTIONS(104), 1,
      sym_elseif_op,
    ACTIONS(133), 1,
      sym_endif_op,
  [600] = 3,
    ACTIONS(29), 1,
      sym_else_op,
    ACTIONS(108), 1,
      sym_elseif_op,
    ACTIONS(135), 1,
      sym_endif_op,
  [610] = 1,
    ACTIONS(94), 2,
      sym_ws,
      sym_label,
  [615] = 2,
    ACTIONS(137), 1,
      aux_sym_stuff_token1,
    STATE(80), 1,
      sym_expr,
  [622] = 2,
    ACTIONS(139), 1,
      sym_nl,
    ACTIONS(141), 1,
      sym_ws,
  [629] = 2,
    ACTIONS(139), 1,
      sym_nl,
    ACTIONS(143), 1,
      sym_ws,
  [636] = 2,
    ACTIONS(139), 1,
      sym_nl,
    ACTIONS(145), 1,
      sym_ws,
  [643] = 2,
    ACTIONS(139), 1,
      sym_nl,
    ACTIONS(147), 1,
      sym_ws,
  [650] = 2,
    ACTIONS(137), 1,
      aux_sym_stuff_token1,
    STATE(93), 1,
      sym_expr,
  [657] = 2,
    ACTIONS(139), 1,
      sym_nl,
    ACTIONS(149), 1,
      sym_ws,
  [664] = 1,
    ACTIONS(151), 2,
      sym_nl,
      sym_ws,
  [669] = 2,
    ACTIONS(137), 1,
      aux_sym_stuff_token1,
    STATE(97), 1,
      sym_expr,
  [676] = 1,
    ACTIONS(153), 2,
      sym_nl,
      sym_ws,
  [681] = 1,
    ACTIONS(153), 2,
      sym_nl,
      sym_ws,
  [686] = 2,
    ACTIONS(137), 1,
      aux_sym_stuff_token1,
    STATE(89), 1,
      sym_expr,
  [693] = 1,
    ACTIONS(82), 2,
      sym_ws,
      sym_label,
  [698] = 1,
    ACTIONS(84), 2,
      sym_ws,
      sym_label,
  [703] = 1,
    ACTIONS(96), 2,
      sym_ws,
      sym_label,
  [708] = 1,
    ACTIONS(84), 2,
      sym_ws,
      sym_label,
  [713] = 1,
    ACTIONS(88), 2,
      sym_ws,
      sym_label,
  [718] = 1,
    ACTIONS(100), 2,
      sym_ws,
      sym_label,
  [723] = 1,
    ACTIONS(86), 2,
      sym_ws,
      sym_label,
  [728] = 1,
    ACTIONS(92), 2,
      sym_ws,
      sym_label,
  [733] = 1,
    ACTIONS(98), 2,
      sym_ws,
      sym_label,
  [738] = 1,
    ACTIONS(124), 2,
      sym_nl,
      sym_ws,
  [743] = 1,
    ACTIONS(80), 2,
      sym_ws,
      sym_label,
  [748] = 1,
    ACTIONS(90), 2,
      sym_ws,
      sym_label,
  [753] = 2,
    ACTIONS(155), 1,
      sym_nl,
    ACTIONS(157), 1,
      sym_ws,
  [760] = 1,
    ACTIONS(159), 1,
      sym_nl,
  [764] = 1,
    ACTIONS(161), 1,
      sym_nl,
  [768] = 1,
    ACTIONS(163), 1,
      sym_nl,
  [772] = 1,
    ACTIONS(165), 1,
      sym_nl,
  [776] = 1,
    ACTIONS(167), 1,
      sym_nl,
  [780] = 1,
    ACTIONS(169), 1,
      sym_ws,
  [784] = 1,
    ACTIONS(171), 1,
      sym_nl,
  [788] = 1,
    ACTIONS(173), 1,
      sym_nl,
  [792] = 1,
    ACTIONS(175), 1,
      sym_nl,
  [796] = 1,
    ACTIONS(177), 1,
      aux_sym_stuff_token1,
  [800] = 1,
    ACTIONS(179), 1,
      sym_nl,
  [804] = 1,
    ACTIONS(181), 1,
      sym_nl,
  [808] = 1,
    ACTIONS(183), 1,
      sym_nl,
  [812] = 1,
    ACTIONS(185), 1,
      sym_ws,
  [816] = 1,
    ACTIONS(187), 1,
      sym_nl,
  [820] = 1,
    ACTIONS(189), 1,
      sym_nl,
  [824] = 1,
    ACTIONS(191), 1,
      sym_nl,
  [828] = 1,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
  [832] = 1,
    ACTIONS(195), 1,
      sym_nl,
  [836] = 1,
    ACTIONS(197), 1,
      sym_ws,
  [840] = 1,
    ACTIONS(199), 1,
      sym_ws,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(14)] = 0,
  [SMALL_STATE(15)] = 41,
  [SMALL_STATE(16)] = 82,
  [SMALL_STATE(17)] = 114,
  [SMALL_STATE(18)] = 146,
  [SMALL_STATE(19)] = 178,
  [SMALL_STATE(20)] = 210,
  [SMALL_STATE(21)] = 239,
  [SMALL_STATE(22)] = 268,
  [SMALL_STATE(23)] = 297,
  [SMALL_STATE(24)] = 326,
  [SMALL_STATE(25)] = 354,
  [SMALL_STATE(26)] = 382,
  [SMALL_STATE(27)] = 401,
  [SMALL_STATE(28)] = 420,
  [SMALL_STATE(29)] = 427,
  [SMALL_STATE(30)] = 434,
  [SMALL_STATE(31)] = 441,
  [SMALL_STATE(32)] = 448,
  [SMALL_STATE(33)] = 455,
  [SMALL_STATE(34)] = 462,
  [SMALL_STATE(35)] = 469,
  [SMALL_STATE(36)] = 476,
  [SMALL_STATE(37)] = 483,
  [SMALL_STATE(38)] = 490,
  [SMALL_STATE(39)] = 497,
  [SMALL_STATE(40)] = 504,
  [SMALL_STATE(41)] = 510,
  [SMALL_STATE(42)] = 520,
  [SMALL_STATE(43)] = 530,
  [SMALL_STATE(44)] = 536,
  [SMALL_STATE(45)] = 546,
  [SMALL_STATE(46)] = 552,
  [SMALL_STATE(47)] = 558,
  [SMALL_STATE(48)] = 564,
  [SMALL_STATE(49)] = 574,
  [SMALL_STATE(50)] = 580,
  [SMALL_STATE(51)] = 590,
  [SMALL_STATE(52)] = 600,
  [SMALL_STATE(53)] = 610,
  [SMALL_STATE(54)] = 615,
  [SMALL_STATE(55)] = 622,
  [SMALL_STATE(56)] = 629,
  [SMALL_STATE(57)] = 636,
  [SMALL_STATE(58)] = 643,
  [SMALL_STATE(59)] = 650,
  [SMALL_STATE(60)] = 657,
  [SMALL_STATE(61)] = 664,
  [SMALL_STATE(62)] = 669,
  [SMALL_STATE(63)] = 676,
  [SMALL_STATE(64)] = 681,
  [SMALL_STATE(65)] = 686,
  [SMALL_STATE(66)] = 693,
  [SMALL_STATE(67)] = 698,
  [SMALL_STATE(68)] = 703,
  [SMALL_STATE(69)] = 708,
  [SMALL_STATE(70)] = 713,
  [SMALL_STATE(71)] = 718,
  [SMALL_STATE(72)] = 723,
  [SMALL_STATE(73)] = 728,
  [SMALL_STATE(74)] = 733,
  [SMALL_STATE(75)] = 738,
  [SMALL_STATE(76)] = 743,
  [SMALL_STATE(77)] = 748,
  [SMALL_STATE(78)] = 753,
  [SMALL_STATE(79)] = 760,
  [SMALL_STATE(80)] = 764,
  [SMALL_STATE(81)] = 768,
  [SMALL_STATE(82)] = 772,
  [SMALL_STATE(83)] = 776,
  [SMALL_STATE(84)] = 780,
  [SMALL_STATE(85)] = 784,
  [SMALL_STATE(86)] = 788,
  [SMALL_STATE(87)] = 792,
  [SMALL_STATE(88)] = 796,
  [SMALL_STATE(89)] = 800,
  [SMALL_STATE(90)] = 804,
  [SMALL_STATE(91)] = 808,
  [SMALL_STATE(92)] = 812,
  [SMALL_STATE(93)] = 816,
  [SMALL_STATE(94)] = 820,
  [SMALL_STATE(95)] = 824,
  [SMALL_STATE(96)] = 828,
  [SMALL_STATE(97)] = 832,
  [SMALL_STATE(98)] = 836,
  [SMALL_STATE(99)] = 840,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(60),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(29),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_block, 3),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_line, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_block, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_line, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endif_line, 4),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_block, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endif_line, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_line, 4),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nolabel_line, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elseif_line, 6),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elseif_line, 5),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stuff, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_line, 5),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_line, 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_line, 4),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stuff_repeat1, 2),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stuff_repeat1, 2), SHIFT_REPEAT(88),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_line, 4),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stuff, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_z80_op, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [193] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
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
