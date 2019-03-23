#ifndef exppar_h
#define exppar_h 1

//-----------------------------------------------------------------------------
//--------------------------------------------------------------------
// Author 1:    George Dosher                                          
// Student ID:  *20431693
// E-Mail:      gdosher@uco.edu
// Author 2:    Jon Hyde 
// Student ID:  *20450725
// E-mail:      jhyde4@uco.edu	                                        
// Course:      CMSC 4023 - Programming Languages
// CRN:         22057
// Project:     p02
// Due:         March 25, 2019 
// Account:     tt073
//--------------------------------------------------------------------
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
