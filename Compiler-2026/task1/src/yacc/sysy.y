/*
 * Task 1：请在此实现 SysY2022 语法分析器及 AST 构造语义动作
 */

extern int yylineno;

%{
#include "AST.hpp"
%}


%union {
    int number;
    char* str;
    float float_number;

    CompUnit* compUnit;
    BaseAST* ast;

    VarDecl* varDecl;
    VarDef* varDef;
    VarDefList* varDefList;

    ConstDecl* constDecl;
    ConstDef* constDef;
    ConstDefList* constDefList;

    InitVal* initVal;
    InitValList* initValList;
    ArrayList* arrayList;

    LVal* lval;
    UnaryExp* unaryExp;
    MulExp* mulExp;
    AddExp* addExp;
    RelExp* relExp;
    EqExp* eqExp;
    LAndExp* lAndExp;
    LOrExp* lOrExp;

    FuncDef* funcDef;
    FuncParam* funcParam;
    FuncParamList* funcParamList;

    Block* block;
    BlockItemList* blockItemList;

    FuncCall* funcCall;
    FuncRParamList* funcRParamList;

    Type type;
}

%token <number> INT_CONST
%token <str> IDENT
%token <float_number> FLOAT_CONST

%type <compUnit> CompUnit

%type <ast> Item Decl BlockItem Stmt
%type <ast> ReturnStmt BreakStmt ContinueStmt ExpStmt
%type <ast> AssignStmt IfStmt WhileStmt
%type <ast> PrimaryExp Number

%type <varDecl> VarDecl
%type <varDef> VarDef
%type <varDefList> VarDefList

%type <constDecl> ConstDecl
%type <constDef> ConstDef
%type <constDefList> ConstDefList

%type <initVal> InitVal
%type <initValList> InitValList
%type <arrayList> ArrayList

%type <lval> LVal
%type <unaryExp> UnaryExp
%type <mulExp> MulExp
%type <addExp> AddExp Exp ConstExp

%type <relExp> RelExp
%type <eqExp> EqExp
%type <lAndExp> LAndExp
%type <lOrExp> LOrExp Cond

%type <type> BType FuncType UnaryOp

%type <funcDef> FuncDef
%type <funcParam> FuncParam
%type <funcParamList> FuncParamList
%type <funcCall> FuncCall
%type <funcRParamList> FuncRParamList

%type <block> Block
%type <blockItemList> BlockItemList
%token CONST
%token INT
%token FLOAT
%token VOID
%token IF
%token ELSE
%token WHILE
%token BREAK
%token CONTINUE
%token RETURN
%token LE GE EQ NE AND OR

%%


CompUnit:
        Item{
            $$ = new CompUnit($1);
    }
    |   CompUnit Item{
            $1->pushBack($2);
            $$ = $1;
};

BType:
        INT  {$$ = SY_INT;}
    |   FLOAT  {$$ = SY_FLOAT;};

VarDefList:
        VarDef{
            $$ = new VarDefList($1);
        }
    |   VarDefList ',' VarDef{
        $1->pushBack($3);
        $$ = $1;
};



VarDef:
        IDENT{
            $$ = new VarDef($1);
            free($1);
        }
    |   IDENT '=' InitVal{
            $$ = new VarDef($1,nullptr,$3);
            free($1);
        }
    |   IDENT ArrayList {
          $$ = new VarDef($1, $2, nullptr);
          free($1);
      }

    |   IDENT ArrayList '=' InitVal {
            $$ = new VarDef($1, $2, $4);
            free($1);
};

ArrayList:
        '[' ConstExp ']'{
            $$ = new ArrayList($2);
        }
    |   ArrayList '[' ConstExp ']'{
        $1->pushBack($3);
        $$ = $1;
};

InitVal:
        Exp{
            $$ = new InitVal($1);
        }
    |   '{' '}'{
            $$ = new InitVal();
    }
    |   '{' InitValList '}'{
        $$ = new InitVal($2);
;}

InitValList:
        InitVal{
            $$ = new InitValList($1);
        }
    |   InitValList ',' InitVal{
            $1->pushBack($3);
            $$ = $1;
};

MulExp:
        UnaryExp{
            $$ = new MulExp($1);
        }
    |   MulExp '*' UnaryExp{
            $1->pushBack(SY_MUL);
            $1->pushBack($3);
            $$ = $1;
    }
    |   MulExp '/' UnaryExp{
            $1->pushBack(SY_DIV);
            $1->pushBack($3);
            $$ = $1;
    }
    |   MulExp '%' UnaryExp{
            $1->pushBack(SY_MOD);
            $1->pushBack($3);
            $$ = $1;
}; 

Number:
        INT_CONST {
            $$ = new ConValue<int>($1);
        }
    |   FLOAT_CONST{
            $$ = new ConValue<float>($1);
    }

UnaryOp:
        '+'     { $$ = SY_ADD; }
    |   '-'     { $$ = SY_SUB; }
    |   '!'     { $$ = SY_NOT; }
;

UnaryExp:
        PrimaryExp {
          $$ = new UnaryExp($1);
      }
    |   UnaryOp UnaryExp {
          $2->pushFront($1);
          $$ = $2;
        }
    |   FuncCall{
            $$ = new UnaryExp($1);
    }
;

AddExp:
        MulExp{
            $$ = new AddExp($1);
        }
    |   AddExp '+' MulExp{
            $1->pushBack(SY_ADD);
            $1->pushBack($3);
            $$ = $1;
    }
    |   AddExp '-' MulExp{
            $1->pushBack(SY_SUB);
            $1->pushBack($3);
            $$ = $1;       
};

RelExp:
        AddExp{
            $$ = new RelExp($1);
        }
    |   RelExp '<' AddExp{
            $1->pushBack(SY_LESS);
            $1->pushBack($3);
            $$ = $1;
    }
    |   RelExp '>' AddExp{
            $1->pushBack(SY_GREAT);
            $1->pushBack($3);
            $$ = $1;
    }
    |   RelExp LE AddExp{
            $1->pushBack(SY_LESSEQ);
            $1->pushBack($3);
            $$ = $1;
    }
    |   RelExp GE AddExp{
            $1->pushBack(SY_GREATEQ);
            $1->pushBack($3);
            $$ = $1;
};

EqExp:
        RelExp{
            $$ = new EqExp($1);
        }
    |   EqExp EQ RelExp{
            $1->pushBack(SY_EQ);
            $1->pushBack($3);
            $$ = $1;
    }
    |   EqExp NE RelExp{
            $1->pushBack(SY_NOTEQ);
            $1->pushBack($3);
            $$ = $1;
};

LAndExp:
        EqExp{
            $$ = new LAndExp($1);
        }
    |   LAndExp AND EqExp{
            $1->pushBack(SY_AND);
            $1->pushBack($3);
            $$ = $1;
};

LOrExp:
        LAndExp{
            $$ = new LOrExp($1);
        }
    |   LOrExp OR LAndExp{
            $1->pushBack(SY_OR);
            $1->pushBack($3);
            $$ = $1;
};

Cond:
        LOrExp{
            $$ = $1;
};

Exp:
        AddExp{
            $$ = $1;
};

ConstExp:
        AddExp{
            $$ = $1;
};

LVal:
        IDENT{
            $$ = new LVal($1);
            free($1);
        }
    |   IDENT ArrayList{
            $$ = new LVal($1,$2);
            free($1);
};

PrimaryExp:
      '(' Exp ')' {
            $$ = $2;
        }
    |   LVal {
            $$ = $1;
        }
    |   Number {
            $$ = $1;
};

VarDecl:
        BType VarDefList ';'{
            $$ = new VarDecl($1,$2);
};

Decl:
        VarDecl{
            $$ = $1;
        }
    |   ConstDecl{
            $$ = $1;
};

Item:
        Decl{
            $$ = $1;
        }
    |   FuncDef{
            $$ = $1;
};

ConstDefList:
        ConstDef{
            $$ = new ConstDefList($1);
        }
    |   ConstDefList ',' ConstDef{
            $1->pushBack($3);
            $$ = $1;
};

ConstDef:
        IDENT '=' InitVal{
            $$ = new ConstDef($1,nullptr,$3);
            free($1);
        }
    |   IDENT ArrayList '=' InitVal{
            $$ = new ConstDef($1,$2,$4);
            free($1);
};

ConstDecl:
        CONST BType ConstDefList ';'{
            $$ = new ConstDecl($2,$3);
};

FuncType:
        INT{
            $$ = SY_INT;
    }
    |   FLOAT{
            $$ = SY_FLOAT;
    }
    |   VOID{
            $$ = SY_VOID;
};

FuncParam:
        BType IDENT{
            $$ = new FuncParam($1,$2);
            free($2);
        }
    |   BType IDENT '[' ']'{
            $$ = new FuncParam($1,$2,true);
            free($2);
    }
    |   BType IDENT '[' ']' ArrayList{
        $$ = new FuncParam($1,$2,true,$5);
        free($2);

};

FuncParamList:
        FuncParam{
            $$ = new FuncParamList($1);
        }
        |   FuncParamList ',' FuncParam{
            $1->pushBack($3);
            $$ = $1;
};

FuncDef:
        FuncType IDENT '(' FuncParamList ')' Block{
            $$ = new FuncDef($1,$2,$4,$6);
            free($2);
        }
    |   FuncType IDENT '(' ')' Block{
            $$ = new FuncDef($1,$2,nullptr,$5);
            free($2);
};

Block:
        '{' '}'{
            $$ = new Block(nullptr);
        }
    |   '{' BlockItemList '}'{
            $$ = new Block($2);
};

BlockItemList:
         BlockItem {
            $$ = new BlockItemList($1);
        }
    |   BlockItemList BlockItem{
        $1->pushBack($2);
        $$ = $1;
};
        
BlockItem:
        Decl{
            $$ = $1;
        }
    |   Stmt{
            $$ = $1;
};

Stmt:
        ReturnStmt   { $$ = $1; }
    |   BreakStmt    { $$ = $1; }
    |   ContinueStmt { $$ = $1; }
    |   ExpStmt      { $$ = $1; }
    |   Block        { $$ = $1; }
    |   IfStmt       { $$ = $1; }
    |   WhileStmt    { $$ = $1; }
    |   AssignStmt   { $$ = $1; }
;

ReturnStmt:
        RETURN ';' {
            $$ = new ReturnStmt();
        }
    |   RETURN Exp ';' {
            $$ = new ReturnStmt($2);
};

BreakStmt:
        BREAK ';' {
            $$ = new BreakStmt();
    }
;

ContinueStmt:
        CONTINUE ';' {
            $$ = new ContinueStmt();
    }
;

ExpStmt:
        ';' {
            $$ = new ExpStmt(nullptr);
        }
    |   Exp ';' {
            $$ = new ExpStmt($1);
};

AssignStmt:
        LVal '=' Exp ';'{
            $$ = new AssignStmt($1,$3);
};

IfStmt:
        IF '(' Cond ')' Stmt{
            $$ = new IfStmt($3,$5);
        }
    |   IF '(' Cond ')' Stmt ELSE Stmt{
            $$ = new IfStmt($3,$5,$7);
};

WhileStmt:
        WHILE '(' Cond ')' Stmt {
            $$ = new WhileStmt($3, $5);
};

FuncRParamList:
        Exp {
            $$ = new FuncRParamList($1);
        }
    |   FuncRParamList ',' Exp {
            $1->pushBack($3);
            $$ = $1;
};

FuncCall:
        IDENT '(' FuncRParamList ')' {
            $$ = new FuncCall($1,$3,yylineno);
            free($1);
        }
    |   IDENT '(' ')'{
            $$ = new FuncCall($1,yylineno);
            free($1);
    };