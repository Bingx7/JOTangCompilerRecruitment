/*
 * Task 1：请在此实现 SysY2022 词法分析器
 */

%option yylineno

%{
#include "lib/AST.hpp"
#include "yacc/Bison.hpp"
#include "sysy.tab.h"
#include <cstdlib>
#include <cstring>
#define YYSTYPE yy::parser::semantic_type
%}


%option bison-bridge
%x COMMENT
%%

"const"     { return CONST; }
"int"       { return INT; }
"float"     { return FLOAT; }
"void"      { return VOID; }

"if"        { return IF; }
"else"      { return ELSE; }
"while"     { return WHILE; }
"break"     { return BREAK; }
"continue"  { return CONTINUE; }
"return"    { return RETURN; }

[+\-*/%=<>!()[\]{},;] {
    return yytext[0];
}

"<="    { return LE; }
">="    { return GE; }
"=="    { return EQ; }
"!="    { return NE; }
"&&"    { return AND; }
"||"    { return OR; }

[a-zA-Z_][a-zA-Z0-9_]*  {
    yylval->str = strdup(yytext);
    return IDENT;
}
0[xX][0-9a-fA-F]+ {
    yylval->number = strtol(yytext, nullptr, 0);
    return INT_CONST;
}

0[0-7]* {
    yylval->number = strtol(yytext, nullptr, 0);
    return INT_CONST;
}

[1-9][0-9]* {
    yylval->number = strtol(yytext, nullptr, 0);
    return INT_CONST;
}

[0-9]+\.[0-9]*([eE][+-]?[0-9]+)? {
    yylval->float_number = strtof(yytext, nullptr);
    return FLOAT_CONST;
}
\.[0-9]+([eE][+-]?[0-9]+)? {
    yylval->float_number = strtof(yytext, nullptr);
    return FLOAT_CONST;
}
[1-9]+[eE][+-]?[0-9]+ {
    yylval->float_number = strtof(yytext, nullptr);
    return FLOAT_CONST;
}

"//"[^\n]*        {}

"/*" {
    BEGIN(COMMENT);
}

<COMMENT>"*/" {
    BEGIN(INITIAL);
}

<COMMENT>[^*\n]+   { /* skip */ }
<COMMENT>"*"   { /* skip */ }
<COMMENT>\n    { /* skip */ }
[ \t\r\n]+      {}
%%

int yywrap() {
    return 1;
}