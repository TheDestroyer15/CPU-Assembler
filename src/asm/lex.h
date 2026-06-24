#include "../util/util.h"

enum TokenKind{
    OPCODE,
    SYMBOL,
    NUM,
    CHAR,
};



struct Token{
    Token* next;
    TokenKind kind;
};