#ifndef exppar_h
#define exppar_h 1

//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------

#ifdef __cplusplus
extern "C"
#endif
int yyparse (void);
class Parser: public Lexer 
{
  public:
    Parser(FILE* i):Lexer(i){};
    ~Parser();
    int Parse();
};
#endif
