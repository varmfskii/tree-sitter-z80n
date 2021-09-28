#include <tree_sitter/parser.h>
#include <stdio.h>
#include <ctype.h>

#define TS(X) tree_sitter_z80n_assembly_external_scanner_##X

enum TokenType { NL, WS };

void *TS(create)() {
  return NULL;
}

void TS(destroy)(void *payload) {
}

unsigned TS(serialize)(void *payload, char *buffer) {
  return 0;
}

void TS(deserialize)(void *payload, const char *buffer, unsigned length) {
}

bool TS(scan)(void *payload, TSLexer *lexer, const bool *valid_symbols) {
  int c = lexer->lookahead;

  if (!isspace(lexer->lookahead)) return 0;
  lexer->result_symbol = WS;
  while(isspace(lexer->lookahead)
	&& lexer->lookahead!='\n' && lexer->lookahead!='\r')
      lexer->advance(lexer, 0);
  if (lexer->lookahead=='\n' || lexer->lookahead=='\r') {
    lexer->result_symbol = NL;
    while(lexer->lookahead=='\n' || lexer->lookahead=='\r')
      lexer->advance(lexer, 0);
  }
  return 1;
}




  
