/*
 * Task 1：请在此实现 SysY2022 词法分析器
 */

%option yylineno

%{
#include "sysy.tab.h"
%}

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

[a-zA-Z_][a-zA-Z0-9_]*  {
    yylval.str = strdup(yytext);
    return IDENT;
}
[0-9]*  {
    yylval.number = atoi(yytext);
    return INT_CONST;
}
%%

int yywrap() {
    return 1;
}