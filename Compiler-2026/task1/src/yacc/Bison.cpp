// A Bison parser, made by GNU Bison 3.8.2.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018-2021 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.

// DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
// especially those whose name start with YY_ or yy_.  They are
// private implementation details that can be changed or removed.



// First part of user prologue.
#line 7 "src/yacc/sysy.y"

#include "lib/AST.hpp"
#include <iostream>
extern int yylineno;
#include "Frontend.hpp"

#line 48 "src/yacc/Bison.cpp"


#include "Bison.hpp"




#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif


// Whether we are compiled with exception support.
#ifndef YY_EXCEPTIONS
# if defined __GNUC__ && !defined __EXCEPTIONS
#  define YY_EXCEPTIONS 0
# else
#  define YY_EXCEPTIONS 1
# endif
#endif



// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << '\n';                       \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yy_stack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YY_USE (Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void> (0)
# define YY_STACK_PRINT()                static_cast<void> (0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

namespace yy {
#line 126 "src/yacc/Bison.cpp"

  /// Build a parser object.
  parser::parser ()
#if YYDEBUG
    : yydebug_ (false),
      yycdebug_ (&std::cerr)
#else

#endif
  {}

  parser::~parser ()
  {}

  parser::syntax_error::~syntax_error () YY_NOEXCEPT YY_NOTHROW
  {}

  /*---------.
  | symbol.  |
  `---------*/

  // basic_symbol.
  template <typename Base>
  parser::basic_symbol<Base>::basic_symbol (const basic_symbol& that)
    : Base (that)
    , value (that.value)
  {}


  /// Constructor for valueless symbols.
  template <typename Base>
  parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t)
    : Base (t)
    , value ()
  {}

  template <typename Base>
  parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, YY_RVREF (value_type) v)
    : Base (t)
    , value (YY_MOVE (v))
  {}


  template <typename Base>
  parser::symbol_kind_type
  parser::basic_symbol<Base>::type_get () const YY_NOEXCEPT
  {
    return this->kind ();
  }


  template <typename Base>
  bool
  parser::basic_symbol<Base>::empty () const YY_NOEXCEPT
  {
    return this->kind () == symbol_kind::S_YYEMPTY;
  }

  template <typename Base>
  void
  parser::basic_symbol<Base>::move (basic_symbol& s)
  {
    super_type::move (s);
    value = YY_MOVE (s.value);
  }

  // by_kind.
  parser::by_kind::by_kind () YY_NOEXCEPT
    : kind_ (symbol_kind::S_YYEMPTY)
  {}

#if 201103L <= YY_CPLUSPLUS
  parser::by_kind::by_kind (by_kind&& that) YY_NOEXCEPT
    : kind_ (that.kind_)
  {
    that.clear ();
  }
#endif

  parser::by_kind::by_kind (const by_kind& that) YY_NOEXCEPT
    : kind_ (that.kind_)
  {}

  parser::by_kind::by_kind (token_kind_type t) YY_NOEXCEPT
    : kind_ (yytranslate_ (t))
  {}



  void
  parser::by_kind::clear () YY_NOEXCEPT
  {
    kind_ = symbol_kind::S_YYEMPTY;
  }

  void
  parser::by_kind::move (by_kind& that)
  {
    kind_ = that.kind_;
    that.clear ();
  }

  parser::symbol_kind_type
  parser::by_kind::kind () const YY_NOEXCEPT
  {
    return kind_;
  }


  parser::symbol_kind_type
  parser::by_kind::type_get () const YY_NOEXCEPT
  {
    return this->kind ();
  }



  // by_state.
  parser::by_state::by_state () YY_NOEXCEPT
    : state (empty_state)
  {}

  parser::by_state::by_state (const by_state& that) YY_NOEXCEPT
    : state (that.state)
  {}

  void
  parser::by_state::clear () YY_NOEXCEPT
  {
    state = empty_state;
  }

  void
  parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  parser::by_state::by_state (state_type s) YY_NOEXCEPT
    : state (s)
  {}

  parser::symbol_kind_type
  parser::by_state::kind () const YY_NOEXCEPT
  {
    if (state == empty_state)
      return symbol_kind::S_YYEMPTY;
    else
      return YY_CAST (symbol_kind_type, yystos_[+state]);
  }

  parser::stack_symbol_type::stack_symbol_type ()
  {}

  parser::stack_symbol_type::stack_symbol_type (YY_RVREF (stack_symbol_type) that)
    : super_type (YY_MOVE (that.state), YY_MOVE (that.value))
  {
#if 201103L <= YY_CPLUSPLUS
    // that is emptied.
    that.state = empty_state;
#endif
  }

  parser::stack_symbol_type::stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) that)
    : super_type (s, YY_MOVE (that.value))
  {
    // that is emptied.
    that.kind_ = symbol_kind::S_YYEMPTY;
  }

#if YY_CPLUSPLUS < 201103L
  parser::stack_symbol_type&
  parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
    value = that.value;
    return *this;
  }

  parser::stack_symbol_type&
  parser::stack_symbol_type::operator= (stack_symbol_type& that)
  {
    state = that.state;
    value = that.value;
    // that is emptied.
    that.state = empty_state;
    return *this;
  }
#endif

  template <typename Base>
  void
  parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);

    // User destructor.
    YY_USE (yysym.kind ());
  }

#if YYDEBUG
  template <typename Base>
  void
  parser::yy_print_ (std::ostream& yyo, const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YY_USE (yyoutput);
    if (yysym.empty ())
      yyo << "empty symbol";
    else
      {
        symbol_kind_type yykind = yysym.kind ();
        yyo << (yykind < YYNTOKENS ? "token" : "nterm")
            << ' ' << yysym.name () << " (";
        YY_USE (yykind);
        yyo << ')';
      }
  }
#endif

  void
  parser::yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym)
  {
    if (m)
      YY_SYMBOL_PRINT (m, sym);
    yystack_.push (YY_MOVE (sym));
  }

  void
  parser::yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym)
  {
#if 201103L <= YY_CPLUSPLUS
    yypush_ (m, stack_symbol_type (s, std::move (sym)));
#else
    stack_symbol_type ss (s, sym);
    yypush_ (m, ss);
#endif
  }

  void
  parser::yypop_ (int n) YY_NOEXCEPT
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  parser::debug_level_type
  parser::debug_level () const
  {
    return yydebug_;
  }

  void
  parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  parser::state_type
  parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - YYNTOKENS] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - YYNTOKENS];
  }

  bool
  parser::yy_pact_value_is_default_ (int yyvalue) YY_NOEXCEPT
  {
    return yyvalue == yypact_ninf_;
  }

  bool
  parser::yy_table_value_is_error_ (int yyvalue) YY_NOEXCEPT
  {
    return yyvalue == yytable_ninf_;
  }

  int
  parser::operator() ()
  {
    return parse ();
  }

  int
  parser::parse ()
  {
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The return value of parse ().
    int yyresult;

#if YY_EXCEPTIONS
    try
#endif // YY_EXCEPTIONS
      {
    YYCDEBUG << "Starting parse\n";


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, YY_MOVE (yyla));

  /*-----------------------------------------------.
  | yynewstate -- push a new symbol on the stack.  |
  `-----------------------------------------------*/
  yynewstate:
    YYCDEBUG << "Entering state " << int (yystack_[0].state) << '\n';
    YY_STACK_PRINT ();

    // Accept?
    if (yystack_[0].state == yyfinal_)
      YYACCEPT;

    goto yybackup;


  /*-----------.
  | yybackup.  |
  `-----------*/
  yybackup:
    // Try to take a decision without lookahead.
    yyn = yypact_[+yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token\n";
#if YY_EXCEPTIONS
        try
#endif // YY_EXCEPTIONS
          {
            yyla.kind_ = yytranslate_ (yylex (&yyla.value));
          }
#if YY_EXCEPTIONS
        catch (const syntax_error& yyexc)
          {
            YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
            error (yyexc);
            goto yyerrlab1;
          }
#endif // YY_EXCEPTIONS
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    if (yyla.kind () == symbol_kind::S_YYerror)
    {
      // The scanner already issued an error message, process directly
      // to error recovery.  But do not keep the error token as
      // lookahead, it is too special and may lead us to an endless
      // loop in error recovery. */
      yyla.kind_ = symbol_kind::S_YYUNDEF;
      goto yyerrlab1;
    }

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.kind ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.kind ())
      {
        goto yydefault;
      }

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", state_type (yyn), YY_MOVE (yyla));
    goto yynewstate;


  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[+yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;


  /*-----------------------------.
  | yyreduce -- do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_ (yystack_[yylen].state, yyr1_[yyn]);
      /* If YYLEN is nonzero, implement the default value of the
         action: '$$ = $1'.  Otherwise, use the top of the stack.

         Otherwise, the following line sets YYLHS.VALUE to garbage.
         This behavior is undocumented and Bison users should not rely
         upon it.  */
      if (yylen)
        yylhs.value = yystack_[yylen - 1].value;
      else
        yylhs.value = yystack_[0].value;


      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
#if YY_EXCEPTIONS
      try
#endif // YY_EXCEPTIONS
        {
          switch (yyn)
            {
  case 2: // Program: CompUnit
#line 134 "src/yacc/sysy.y"
             {
        ASTRoot.reset((yystack_[0].value.compUnit));
}
#line 584 "src/yacc/Bison.cpp"
    break;

  case 3: // CompUnit: Item
#line 139 "src/yacc/sysy.y"
            {
            (yylhs.value.compUnit) = new CompUnit((yystack_[0].value.ast));
    }
#line 592 "src/yacc/Bison.cpp"
    break;

  case 4: // CompUnit: CompUnit Item
#line 142 "src/yacc/sysy.y"
                     {
            (yystack_[1].value.compUnit)->pushBack((yystack_[0].value.ast));
            (yylhs.value.compUnit) = (yystack_[1].value.compUnit);
}
#line 601 "src/yacc/Bison.cpp"
    break;

  case 5: // BType: INT
#line 148 "src/yacc/sysy.y"
             {(yylhs.value.type) = SY_INT;}
#line 607 "src/yacc/Bison.cpp"
    break;

  case 6: // BType: FLOAT
#line 149 "src/yacc/sysy.y"
               {(yylhs.value.type) = SY_FLOAT;}
#line 613 "src/yacc/Bison.cpp"
    break;

  case 7: // VarDefList: VarDef
#line 152 "src/yacc/sysy.y"
              {
            (yylhs.value.varDefList) = new VarDefList((yystack_[0].value.varDef));
        }
#line 621 "src/yacc/Bison.cpp"
    break;

  case 8: // VarDefList: VarDefList ',' VarDef
#line 155 "src/yacc/sysy.y"
                             {
        (yystack_[2].value.varDefList)->pushBack((yystack_[0].value.varDef));
        (yylhs.value.varDefList) = (yystack_[2].value.varDefList);
}
#line 630 "src/yacc/Bison.cpp"
    break;

  case 9: // VarDef: IDENT
#line 163 "src/yacc/sysy.y"
             {
            (yylhs.value.varDef) = new VarDef((yystack_[0].value.str));
            free((yystack_[0].value.str));
        }
#line 639 "src/yacc/Bison.cpp"
    break;

  case 10: // VarDef: IDENT '=' InitVal
#line 167 "src/yacc/sysy.y"
                         {
            (yylhs.value.varDef) = new VarDef((yystack_[2].value.str),nullptr,(yystack_[0].value.initVal));
            free((yystack_[2].value.str));
        }
#line 648 "src/yacc/Bison.cpp"
    break;

  case 11: // VarDef: IDENT ArrayList
#line 171 "src/yacc/sysy.y"
                        {
          (yylhs.value.varDef) = new VarDef((yystack_[1].value.str), (yystack_[0].value.arrayList), nullptr);
          free((yystack_[1].value.str));
      }
#line 657 "src/yacc/Bison.cpp"
    break;

  case 12: // VarDef: IDENT ArrayList '=' InitVal
#line 176 "src/yacc/sysy.y"
                                    {
            (yylhs.value.varDef) = new VarDef((yystack_[3].value.str), (yystack_[2].value.arrayList), (yystack_[0].value.initVal));
            free((yystack_[3].value.str));
}
#line 666 "src/yacc/Bison.cpp"
    break;

  case 13: // ArrayList: '[' ConstExp ']'
#line 182 "src/yacc/sysy.y"
                        {
            (yylhs.value.arrayList) = new ArrayList((yystack_[1].value.addExp));
        }
#line 674 "src/yacc/Bison.cpp"
    break;

  case 14: // ArrayList: ArrayList '[' ConstExp ']'
#line 185 "src/yacc/sysy.y"
                                  {
        (yystack_[3].value.arrayList)->pushBack((yystack_[1].value.addExp));
        (yylhs.value.arrayList) = (yystack_[3].value.arrayList);
}
#line 683 "src/yacc/Bison.cpp"
    break;

  case 15: // InitVal: Exp
#line 191 "src/yacc/sysy.y"
           {
            (yylhs.value.initVal) = new InitVal((yystack_[0].value.addExp));
        }
#line 691 "src/yacc/Bison.cpp"
    break;

  case 16: // InitVal: '{' '}'
#line 194 "src/yacc/sysy.y"
               {
            (yylhs.value.initVal) = new InitVal();
    }
#line 699 "src/yacc/Bison.cpp"
    break;

  case 17: // InitVal: '{' InitValList '}'
#line 197 "src/yacc/sysy.y"
                           {
        (yylhs.value.initVal) = new InitVal((yystack_[1].value.initValList));
;}
#line 707 "src/yacc/Bison.cpp"
    break;

  case 18: // InitValList: InitVal
#line 202 "src/yacc/sysy.y"
               {
            (yylhs.value.initValList) = new InitValList((yystack_[0].value.initVal));
        }
#line 715 "src/yacc/Bison.cpp"
    break;

  case 19: // InitValList: InitValList ',' InitVal
#line 205 "src/yacc/sysy.y"
                               {
            (yystack_[2].value.initValList)->pushBack((yystack_[0].value.initVal));
            (yylhs.value.initValList) = (yystack_[2].value.initValList);
}
#line 724 "src/yacc/Bison.cpp"
    break;

  case 20: // MulExp: UnaryExp
#line 211 "src/yacc/sysy.y"
                {
            (yylhs.value.mulExp) = new MulExp((yystack_[0].value.unaryExp));
        }
#line 732 "src/yacc/Bison.cpp"
    break;

  case 21: // MulExp: MulExp '*' UnaryExp
#line 214 "src/yacc/sysy.y"
                           {
            (yystack_[2].value.mulExp)->pushBack(SY_MUL);
            (yystack_[2].value.mulExp)->pushBack((yystack_[0].value.unaryExp));
            (yylhs.value.mulExp) = (yystack_[2].value.mulExp);
    }
#line 742 "src/yacc/Bison.cpp"
    break;

  case 22: // MulExp: MulExp '/' UnaryExp
#line 219 "src/yacc/sysy.y"
                           {
            (yystack_[2].value.mulExp)->pushBack(SY_DIV);
            (yystack_[2].value.mulExp)->pushBack((yystack_[0].value.unaryExp));
            (yylhs.value.mulExp) = (yystack_[2].value.mulExp);
    }
#line 752 "src/yacc/Bison.cpp"
    break;

  case 23: // MulExp: MulExp '%' UnaryExp
#line 224 "src/yacc/sysy.y"
                           {
            (yystack_[2].value.mulExp)->pushBack(SY_MOD);
            (yystack_[2].value.mulExp)->pushBack((yystack_[0].value.unaryExp));
            (yylhs.value.mulExp) = (yystack_[2].value.mulExp);
}
#line 762 "src/yacc/Bison.cpp"
    break;

  case 24: // Number: INT_CONST
#line 231 "src/yacc/sysy.y"
                  {
            (yylhs.value.ast) = new ConValue<int>((yystack_[0].value.number));
        }
#line 770 "src/yacc/Bison.cpp"
    break;

  case 25: // Number: FLOAT_CONST
#line 234 "src/yacc/sysy.y"
                   {
            (yylhs.value.ast) = new ConValue<float>((yystack_[0].value.float_number));
}
#line 778 "src/yacc/Bison.cpp"
    break;

  case 26: // UnaryOp: '+'
#line 239 "src/yacc/sysy.y"
                { (yylhs.value.type) = SY_ADD; }
#line 784 "src/yacc/Bison.cpp"
    break;

  case 27: // UnaryOp: '-'
#line 240 "src/yacc/sysy.y"
                { (yylhs.value.type) = SY_SUB; }
#line 790 "src/yacc/Bison.cpp"
    break;

  case 28: // UnaryOp: '!'
#line 241 "src/yacc/sysy.y"
                { (yylhs.value.type) = SY_NOT; }
#line 796 "src/yacc/Bison.cpp"
    break;

  case 29: // UnaryExp: PrimaryExp
#line 245 "src/yacc/sysy.y"
                   {
          (yylhs.value.unaryExp) = new UnaryExp((yystack_[0].value.ast));
      }
#line 804 "src/yacc/Bison.cpp"
    break;

  case 30: // UnaryExp: UnaryOp UnaryExp
#line 248 "src/yacc/sysy.y"
                         {
          (yystack_[0].value.unaryExp)->pushFront((yystack_[1].value.type));
          (yylhs.value.unaryExp) = (yystack_[0].value.unaryExp);
        }
#line 813 "src/yacc/Bison.cpp"
    break;

  case 31: // UnaryExp: FuncCall
#line 252 "src/yacc/sysy.y"
                {
            (yylhs.value.unaryExp) = new UnaryExp((yystack_[0].value.funcCall));
    }
#line 821 "src/yacc/Bison.cpp"
    break;

  case 32: // AddExp: MulExp
#line 258 "src/yacc/sysy.y"
              {
            (yylhs.value.addExp) = new AddExp((yystack_[0].value.mulExp));
        }
#line 829 "src/yacc/Bison.cpp"
    break;

  case 33: // AddExp: AddExp '+' MulExp
#line 261 "src/yacc/sysy.y"
                         {
            (yystack_[2].value.addExp)->pushBack(SY_ADD);
            (yystack_[2].value.addExp)->pushBack((yystack_[0].value.mulExp));
            (yylhs.value.addExp) = (yystack_[2].value.addExp);
    }
#line 839 "src/yacc/Bison.cpp"
    break;

  case 34: // AddExp: AddExp '-' MulExp
#line 266 "src/yacc/sysy.y"
                         {
            (yystack_[2].value.addExp)->pushBack(SY_SUB);
            (yystack_[2].value.addExp)->pushBack((yystack_[0].value.mulExp));
            (yylhs.value.addExp) = (yystack_[2].value.addExp);       
}
#line 849 "src/yacc/Bison.cpp"
    break;

  case 35: // RelExp: AddExp
#line 273 "src/yacc/sysy.y"
              {
            (yylhs.value.relExp) = new RelExp((yystack_[0].value.addExp));
        }
#line 857 "src/yacc/Bison.cpp"
    break;

  case 36: // RelExp: RelExp '<' AddExp
#line 276 "src/yacc/sysy.y"
                         {
            (yystack_[2].value.relExp)->pushBack(SY_LESS);
            (yystack_[2].value.relExp)->pushBack((yystack_[0].value.addExp));
            (yylhs.value.relExp) = (yystack_[2].value.relExp);
    }
#line 867 "src/yacc/Bison.cpp"
    break;

  case 37: // RelExp: RelExp '>' AddExp
#line 281 "src/yacc/sysy.y"
                         {
            (yystack_[2].value.relExp)->pushBack(SY_GREAT);
            (yystack_[2].value.relExp)->pushBack((yystack_[0].value.addExp));
            (yylhs.value.relExp) = (yystack_[2].value.relExp);
    }
#line 877 "src/yacc/Bison.cpp"
    break;

  case 38: // RelExp: RelExp LE AddExp
#line 286 "src/yacc/sysy.y"
                        {
            (yystack_[2].value.relExp)->pushBack(SY_LESSEQ);
            (yystack_[2].value.relExp)->pushBack((yystack_[0].value.addExp));
            (yylhs.value.relExp) = (yystack_[2].value.relExp);
    }
#line 887 "src/yacc/Bison.cpp"
    break;

  case 39: // RelExp: RelExp GE AddExp
#line 291 "src/yacc/sysy.y"
                        {
            (yystack_[2].value.relExp)->pushBack(SY_GREATEQ);
            (yystack_[2].value.relExp)->pushBack((yystack_[0].value.addExp));
            (yylhs.value.relExp) = (yystack_[2].value.relExp);
}
#line 897 "src/yacc/Bison.cpp"
    break;

  case 40: // EqExp: RelExp
#line 298 "src/yacc/sysy.y"
              {
            (yylhs.value.eqExp) = new EqExp((yystack_[0].value.relExp));
        }
#line 905 "src/yacc/Bison.cpp"
    break;

  case 41: // EqExp: EqExp EQ RelExp
#line 301 "src/yacc/sysy.y"
                       {
            (yystack_[2].value.eqExp)->pushBack(SY_EQ);
            (yystack_[2].value.eqExp)->pushBack((yystack_[0].value.relExp));
            (yylhs.value.eqExp) = (yystack_[2].value.eqExp);
    }
#line 915 "src/yacc/Bison.cpp"
    break;

  case 42: // EqExp: EqExp NE RelExp
#line 306 "src/yacc/sysy.y"
                       {
            (yystack_[2].value.eqExp)->pushBack(SY_NOTEQ);
            (yystack_[2].value.eqExp)->pushBack((yystack_[0].value.relExp));
            (yylhs.value.eqExp) = (yystack_[2].value.eqExp);
}
#line 925 "src/yacc/Bison.cpp"
    break;

  case 43: // LAndExp: EqExp
#line 313 "src/yacc/sysy.y"
             {
            (yylhs.value.lAndExp) = new LAndExp((yystack_[0].value.eqExp));
        }
#line 933 "src/yacc/Bison.cpp"
    break;

  case 44: // LAndExp: LAndExp AND EqExp
#line 316 "src/yacc/sysy.y"
                         {
            (yystack_[2].value.lAndExp)->pushBack(SY_AND);
            (yystack_[2].value.lAndExp)->pushBack((yystack_[0].value.eqExp));
            (yylhs.value.lAndExp) = (yystack_[2].value.lAndExp);
}
#line 943 "src/yacc/Bison.cpp"
    break;

  case 45: // LOrExp: LAndExp
#line 323 "src/yacc/sysy.y"
               {
            (yylhs.value.lOrExp) = new LOrExp((yystack_[0].value.lAndExp));
        }
#line 951 "src/yacc/Bison.cpp"
    break;

  case 46: // LOrExp: LOrExp OR LAndExp
#line 326 "src/yacc/sysy.y"
                         {
            (yystack_[2].value.lOrExp)->pushBack(SY_OR);
            (yystack_[2].value.lOrExp)->pushBack((yystack_[0].value.lAndExp));
            (yylhs.value.lOrExp) = (yystack_[2].value.lOrExp);
}
#line 961 "src/yacc/Bison.cpp"
    break;

  case 47: // Cond: LOrExp
#line 333 "src/yacc/sysy.y"
              {
            (yylhs.value.lOrExp) = (yystack_[0].value.lOrExp);
}
#line 969 "src/yacc/Bison.cpp"
    break;

  case 48: // Exp: AddExp
#line 338 "src/yacc/sysy.y"
              {
            (yylhs.value.addExp) = (yystack_[0].value.addExp);
}
#line 977 "src/yacc/Bison.cpp"
    break;

  case 49: // ConstExp: AddExp
#line 343 "src/yacc/sysy.y"
              {
            (yylhs.value.addExp) = (yystack_[0].value.addExp);
}
#line 985 "src/yacc/Bison.cpp"
    break;

  case 50: // LVal: IDENT
#line 348 "src/yacc/sysy.y"
             {
            (yylhs.value.lval) = new LVal((yystack_[0].value.str));
            free((yystack_[0].value.str));
        }
#line 994 "src/yacc/Bison.cpp"
    break;

  case 51: // LVal: IDENT ArrayList
#line 352 "src/yacc/sysy.y"
                       {
            (yylhs.value.lval) = new LVal((yystack_[1].value.str),(yystack_[0].value.arrayList));
            free((yystack_[1].value.str));
}
#line 1003 "src/yacc/Bison.cpp"
    break;

  case 52: // PrimaryExp: '(' Exp ')'
#line 358 "src/yacc/sysy.y"
                  {
            (yylhs.value.ast) = (yystack_[1].value.addExp);
        }
#line 1011 "src/yacc/Bison.cpp"
    break;

  case 53: // PrimaryExp: LVal
#line 361 "src/yacc/sysy.y"
             {
            (yylhs.value.ast) = (yystack_[0].value.lval);
        }
#line 1019 "src/yacc/Bison.cpp"
    break;

  case 54: // PrimaryExp: Number
#line 364 "src/yacc/sysy.y"
               {
            (yylhs.value.ast) = (yystack_[0].value.ast);
}
#line 1027 "src/yacc/Bison.cpp"
    break;

  case 55: // VarDecl: BType VarDefList ';'
#line 369 "src/yacc/sysy.y"
                            {
            (yylhs.value.varDecl) = new VarDecl((yystack_[2].value.type),(yystack_[1].value.varDefList));
}
#line 1035 "src/yacc/Bison.cpp"
    break;

  case 56: // Decl: VarDecl
#line 374 "src/yacc/sysy.y"
               {
            (yylhs.value.ast) = (yystack_[0].value.varDecl);
        }
#line 1043 "src/yacc/Bison.cpp"
    break;

  case 57: // Decl: ConstDecl
#line 377 "src/yacc/sysy.y"
                 {
            (yylhs.value.ast) = (yystack_[0].value.constDecl);
}
#line 1051 "src/yacc/Bison.cpp"
    break;

  case 58: // Item: Decl
#line 382 "src/yacc/sysy.y"
            {
            (yylhs.value.ast) = (yystack_[0].value.ast);
        }
#line 1059 "src/yacc/Bison.cpp"
    break;

  case 59: // Item: FuncDef
#line 385 "src/yacc/sysy.y"
               {
            (yylhs.value.ast) = (yystack_[0].value.funcDef);
}
#line 1067 "src/yacc/Bison.cpp"
    break;

  case 60: // ConstDefList: ConstDef
#line 390 "src/yacc/sysy.y"
                {
            (yylhs.value.constDefList) = new ConstDefList((yystack_[0].value.constDef));
        }
#line 1075 "src/yacc/Bison.cpp"
    break;

  case 61: // ConstDefList: ConstDefList ',' ConstDef
#line 393 "src/yacc/sysy.y"
                                 {
            (yystack_[2].value.constDefList)->pushBack((yystack_[0].value.constDef));
            (yylhs.value.constDefList) = (yystack_[2].value.constDefList);
}
#line 1084 "src/yacc/Bison.cpp"
    break;

  case 62: // ConstDef: IDENT '=' InitVal
#line 399 "src/yacc/sysy.y"
                         {
            (yylhs.value.constDef) = new ConstDef((yystack_[2].value.str),nullptr,(yystack_[0].value.initVal));
            free((yystack_[2].value.str));
        }
#line 1093 "src/yacc/Bison.cpp"
    break;

  case 63: // ConstDef: IDENT ArrayList '=' InitVal
#line 403 "src/yacc/sysy.y"
                                   {
            (yylhs.value.constDef) = new ConstDef((yystack_[3].value.str),(yystack_[2].value.arrayList),(yystack_[0].value.initVal));
            free((yystack_[3].value.str));
}
#line 1102 "src/yacc/Bison.cpp"
    break;

  case 64: // ConstDecl: CONST BType ConstDefList ';'
#line 409 "src/yacc/sysy.y"
                                    {
            (yylhs.value.constDecl) = new ConstDecl((yystack_[2].value.type),(yystack_[1].value.constDefList));
}
#line 1110 "src/yacc/Bison.cpp"
    break;

  case 65: // FuncParam: BType IDENT
#line 414 "src/yacc/sysy.y"
                   {
            (yylhs.value.funcParam) = new FuncParam((yystack_[1].value.type),(yystack_[0].value.str));
            free((yystack_[0].value.str));
        }
#line 1119 "src/yacc/Bison.cpp"
    break;

  case 66: // FuncParam: BType IDENT '[' ']'
#line 418 "src/yacc/sysy.y"
                           {
            (yylhs.value.funcParam) = new FuncParam((yystack_[3].value.type),(yystack_[2].value.str),true);
            free((yystack_[2].value.str));
    }
#line 1128 "src/yacc/Bison.cpp"
    break;

  case 67: // FuncParam: BType IDENT '[' ']' ArrayList
#line 422 "src/yacc/sysy.y"
                                     {
        (yylhs.value.funcParam) = new FuncParam((yystack_[4].value.type),(yystack_[3].value.str),true,(yystack_[0].value.arrayList));
        free((yystack_[3].value.str));

}
#line 1138 "src/yacc/Bison.cpp"
    break;

  case 68: // FuncParamList: FuncParam
#line 429 "src/yacc/sysy.y"
                 {
            (yylhs.value.funcParamList) = new FuncParamList((yystack_[0].value.funcParam));
        }
#line 1146 "src/yacc/Bison.cpp"
    break;

  case 69: // FuncParamList: FuncParamList ',' FuncParam
#line 432 "src/yacc/sysy.y"
                                       {
            (yystack_[2].value.funcParamList)->pushBack((yystack_[0].value.funcParam));
            (yylhs.value.funcParamList) = (yystack_[2].value.funcParamList);
}
#line 1155 "src/yacc/Bison.cpp"
    break;

  case 70: // FuncDef: BType IDENT '(' FuncParamList ')' Block
#line 438 "src/yacc/sysy.y"
                                               {
            (yylhs.value.funcDef) = new FuncDef((yystack_[5].value.type),(yystack_[4].value.str),(yystack_[2].value.funcParamList),(yystack_[0].value.block));
            free((yystack_[4].value.str));
        }
#line 1164 "src/yacc/Bison.cpp"
    break;

  case 71: // FuncDef: BType IDENT '(' ')' Block
#line 442 "src/yacc/sysy.y"
                                 {
            (yylhs.value.funcDef) = new FuncDef((yystack_[4].value.type),(yystack_[3].value.str),nullptr,(yystack_[0].value.block));
            free((yystack_[3].value.str));
        }
#line 1173 "src/yacc/Bison.cpp"
    break;

  case 72: // FuncDef: VOID IDENT '(' FuncParamList ')' Block
#line 446 "src/yacc/sysy.y"
                                              {
            (yylhs.value.funcDef) = new FuncDef(SY_VOID,(yystack_[4].value.str),(yystack_[2].value.funcParamList),(yystack_[0].value.block));
            free((yystack_[4].value.str));
        }
#line 1182 "src/yacc/Bison.cpp"
    break;

  case 73: // FuncDef: VOID IDENT '(' ')' Block
#line 450 "src/yacc/sysy.y"
                                {
            (yylhs.value.funcDef) = new FuncDef(SY_VOID,(yystack_[3].value.str),nullptr,(yystack_[0].value.block));
            free((yystack_[3].value.str));
        }
#line 1191 "src/yacc/Bison.cpp"
    break;

  case 74: // Block: '{' '}'
#line 456 "src/yacc/sysy.y"
               {
            (yylhs.value.block) = new Block(nullptr);
        }
#line 1199 "src/yacc/Bison.cpp"
    break;

  case 75: // Block: '{' BlockItemList '}'
#line 459 "src/yacc/sysy.y"
                             {
            (yylhs.value.block) = new Block((yystack_[1].value.blockItemList));
}
#line 1207 "src/yacc/Bison.cpp"
    break;

  case 76: // BlockItemList: BlockItem
#line 464 "src/yacc/sysy.y"
                   {
            (yylhs.value.blockItemList) = new BlockItemList((yystack_[0].value.ast));
        }
#line 1215 "src/yacc/Bison.cpp"
    break;

  case 77: // BlockItemList: BlockItemList BlockItem
#line 467 "src/yacc/sysy.y"
                               {
        (yystack_[1].value.blockItemList)->pushBack((yystack_[0].value.ast));
        (yylhs.value.blockItemList) = (yystack_[1].value.blockItemList);
}
#line 1224 "src/yacc/Bison.cpp"
    break;

  case 78: // BlockItem: Decl
#line 473 "src/yacc/sysy.y"
            {
            (yylhs.value.ast) = (yystack_[0].value.ast);
        }
#line 1232 "src/yacc/Bison.cpp"
    break;

  case 79: // BlockItem: Stmt
#line 476 "src/yacc/sysy.y"
            {
            (yylhs.value.ast) = (yystack_[0].value.ast);
}
#line 1240 "src/yacc/Bison.cpp"
    break;

  case 80: // Stmt: ReturnStmt
#line 481 "src/yacc/sysy.y"
                     { (yylhs.value.ast) = (yystack_[0].value.ast); }
#line 1246 "src/yacc/Bison.cpp"
    break;

  case 81: // Stmt: BreakStmt
#line 482 "src/yacc/sysy.y"
                     { (yylhs.value.ast) = (yystack_[0].value.ast); }
#line 1252 "src/yacc/Bison.cpp"
    break;

  case 82: // Stmt: ContinueStmt
#line 483 "src/yacc/sysy.y"
                     { (yylhs.value.ast) = (yystack_[0].value.ast); }
#line 1258 "src/yacc/Bison.cpp"
    break;

  case 83: // Stmt: ExpStmt
#line 484 "src/yacc/sysy.y"
                     { (yylhs.value.ast) = (yystack_[0].value.ast); }
#line 1264 "src/yacc/Bison.cpp"
    break;

  case 84: // Stmt: Block
#line 485 "src/yacc/sysy.y"
                     { (yylhs.value.ast) = (yystack_[0].value.block); }
#line 1270 "src/yacc/Bison.cpp"
    break;

  case 85: // Stmt: IfStmt
#line 486 "src/yacc/sysy.y"
                     { (yylhs.value.ast) = (yystack_[0].value.ast); }
#line 1276 "src/yacc/Bison.cpp"
    break;

  case 86: // Stmt: WhileStmt
#line 487 "src/yacc/sysy.y"
                     { (yylhs.value.ast) = (yystack_[0].value.ast); }
#line 1282 "src/yacc/Bison.cpp"
    break;

  case 87: // Stmt: AssignStmt
#line 488 "src/yacc/sysy.y"
                     { (yylhs.value.ast) = (yystack_[0].value.ast); }
#line 1288 "src/yacc/Bison.cpp"
    break;

  case 88: // ReturnStmt: RETURN ';'
#line 492 "src/yacc/sysy.y"
                   {
            (yylhs.value.ast) = new ReturnStmt();
        }
#line 1296 "src/yacc/Bison.cpp"
    break;

  case 89: // ReturnStmt: RETURN Exp ';'
#line 495 "src/yacc/sysy.y"
                       {
            (yylhs.value.ast) = new ReturnStmt((yystack_[1].value.addExp));
}
#line 1304 "src/yacc/Bison.cpp"
    break;

  case 90: // BreakStmt: BREAK ';'
#line 500 "src/yacc/sysy.y"
                  {
            (yylhs.value.ast) = new BreakStmt();
    }
#line 1312 "src/yacc/Bison.cpp"
    break;

  case 91: // ContinueStmt: CONTINUE ';'
#line 506 "src/yacc/sysy.y"
                     {
            (yylhs.value.ast) = new ContinueStmt();
    }
#line 1320 "src/yacc/Bison.cpp"
    break;

  case 92: // ExpStmt: ';'
#line 512 "src/yacc/sysy.y"
            {
            (yylhs.value.ast) = new ExpStmt(nullptr);
        }
#line 1328 "src/yacc/Bison.cpp"
    break;

  case 93: // ExpStmt: Exp ';'
#line 515 "src/yacc/sysy.y"
                {
            (yylhs.value.ast) = new ExpStmt((yystack_[1].value.addExp));
}
#line 1336 "src/yacc/Bison.cpp"
    break;

  case 94: // AssignStmt: LVal '=' Exp ';'
#line 520 "src/yacc/sysy.y"
                        {
            (yylhs.value.ast) = new AssignStmt((yystack_[3].value.lval),(yystack_[1].value.addExp));
}
#line 1344 "src/yacc/Bison.cpp"
    break;

  case 95: // IfStmt: IF '(' Cond ')' Stmt
#line 525 "src/yacc/sysy.y"
                                                  {
            (yylhs.value.ast) = new IfStmt((yystack_[2].value.lOrExp),(yystack_[0].value.ast));
        }
#line 1352 "src/yacc/Bison.cpp"
    break;

  case 96: // IfStmt: IF '(' Cond ')' Stmt ELSE Stmt
#line 528 "src/yacc/sysy.y"
                                      {
            (yylhs.value.ast) = new IfStmt((yystack_[4].value.lOrExp),(yystack_[2].value.ast),(yystack_[0].value.ast));
}
#line 1360 "src/yacc/Bison.cpp"
    break;

  case 97: // WhileStmt: WHILE '(' Cond ')' Stmt
#line 533 "src/yacc/sysy.y"
                                {
            (yylhs.value.ast) = new WhileStmt((yystack_[2].value.lOrExp), (yystack_[0].value.ast));
}
#line 1368 "src/yacc/Bison.cpp"
    break;

  case 98: // FuncRParamList: Exp
#line 538 "src/yacc/sysy.y"
            {
            (yylhs.value.funcRParamList) = new FuncRParamList((yystack_[0].value.addExp));
        }
#line 1376 "src/yacc/Bison.cpp"
    break;

  case 99: // FuncRParamList: FuncRParamList ',' Exp
#line 541 "src/yacc/sysy.y"
                               {
            (yystack_[2].value.funcRParamList)->pushBack((yystack_[0].value.addExp));
            (yylhs.value.funcRParamList) = (yystack_[2].value.funcRParamList);
}
#line 1385 "src/yacc/Bison.cpp"
    break;

  case 100: // FuncCall: FuncIdent '(' FuncRParamList ')'
#line 547 "src/yacc/sysy.y"
                                         {
            (yylhs.value.funcCall) = new FuncCall((yystack_[3].value.funcIdent)->ident,(yystack_[1].value.funcRParamList),(yystack_[3].value.funcIdent)->line);
            free((yystack_[3].value.funcIdent)->ident);
            delete (yystack_[3].value.funcIdent);
        }
#line 1395 "src/yacc/Bison.cpp"
    break;

  case 101: // FuncCall: FuncIdent '(' ')'
#line 552 "src/yacc/sysy.y"
                         {
            (yylhs.value.funcCall) = new FuncCall((yystack_[2].value.funcIdent)->ident,(yystack_[2].value.funcIdent)->line);
            free((yystack_[2].value.funcIdent)->ident);
            delete (yystack_[2].value.funcIdent);
    }
#line 1405 "src/yacc/Bison.cpp"
    break;

  case 102: // FuncIdent: IDENT
#line 559 "src/yacc/sysy.y"
          {
        (yylhs.value.funcIdent) = new FuncIdent{(yystack_[0].value.str), yylineno};
    }
#line 1413 "src/yacc/Bison.cpp"
    break;


#line 1417 "src/yacc/Bison.cpp"

            default:
              break;
            }
        }
#if YY_EXCEPTIONS
      catch (const syntax_error& yyexc)
        {
          YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
          error (yyexc);
          YYERROR;
        }
#endif // YY_EXCEPTIONS
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, YY_MOVE (yylhs));
    }
    goto yynewstate;


  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        std::string msg = YY_("syntax error");
        error (YY_MOVE (msg));
      }


    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.kind () == symbol_kind::S_YYEOF)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:
    /* Pacify compilers when the user code never invokes YYERROR and
       the label yyerrorlab therefore never appears in user code.  */
    if (false)
      YYERROR;

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    YY_STACK_PRINT ();
    goto yyerrlab1;


  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    // Pop stack until we find a state that shifts the error token.
    for (;;)
      {
        yyn = yypact_[+yystack_[0].state];
        if (!yy_pact_value_is_default_ (yyn))
          {
            yyn += symbol_kind::S_YYerror;
            if (0 <= yyn && yyn <= yylast_
                && yycheck_[yyn] == symbol_kind::S_YYerror)
              {
                yyn = yytable_[yyn];
                if (0 < yyn)
                  break;
              }
          }

        // Pop the current state because it cannot handle the error token.
        if (yystack_.size () == 1)
          YYABORT;

        yy_destroy_ ("Error: popping", yystack_[0]);
        yypop_ ();
        YY_STACK_PRINT ();
      }
    {
      stack_symbol_type error_token;


      // Shift the error token.
      error_token.state = state_type (yyn);
      yypush_ ("Shifting", YY_MOVE (error_token));
    }
    goto yynewstate;


  /*-------------------------------------.
  | yyacceptlab -- YYACCEPT comes here.  |
  `-------------------------------------*/
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;


  /*-----------------------------------.
  | yyabortlab -- YYABORT comes here.  |
  `-----------------------------------*/
  yyabortlab:
    yyresult = 1;
    goto yyreturn;


  /*-----------------------------------------------------.
  | yyreturn -- parsing is finished, return the result.  |
  `-----------------------------------------------------*/
  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    YY_STACK_PRINT ();
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
#if YY_EXCEPTIONS
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack\n";
        // Do not try to display the values of the reclaimed symbols,
        // as their printers might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
#endif // YY_EXCEPTIONS
  }

  void
  parser::error (const syntax_error& yyexc)
  {
    error (yyexc.what ());
  }

#if YYDEBUG || 0
  const char *
  parser::symbol_name (symbol_kind_type yysymbol)
  {
    return yytname_[yysymbol];
  }
#endif // #if YYDEBUG || 0









  const signed char parser::yypact_ninf_ = -87;

  const signed char parser::yytable_ninf_ = -103;

  const short
  parser::yypact_[] =
  {
     101,    21,   -87,   -87,    18,    25,   101,    28,   -87,   -87,
     -87,   -87,   -87,    60,    29,   -87,   -87,     2,   -15,   -87,
      77,    -8,   -87,     4,   209,   198,     9,    90,    68,   -87,
     209,    92,    60,   -87,    35,    78,   -87,    -4,   -87,    44,
     -87,   192,   -87,   -87,   -87,   198,   -87,    66,   -87,   198,
     -87,    58,   -87,   -87,   -87,   -87,    38,    58,    85,    35,
      -2,   209,   198,    94,   -87,   -87,   209,   -87,    46,   -87,
      59,    21,    35,    88,   -87,   -87,    -5,   106,   198,   198,
     198,   -87,   198,   198,   156,   -87,   -87,    35,   -87,   120,
     -87,   121,   127,   118,   126,    89,   -87,   -87,    68,   131,
     103,   -87,   -87,   135,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   140,   -87,   -87,   209,   -87,   -87,   -87,
     -87,   -87,    66,    66,   -87,   -87,    32,   -87,   -87,   198,
     198,   -87,   -87,   -87,   132,   -87,   198,   -87,   -87,   148,
     -87,   198,   -87,    58,    51,   133,   158,   159,   141,   143,
     -87,   144,    88,   -87,   198,   198,   198,   198,   198,   198,
     198,   198,   172,   172,   -87,    58,    58,    58,    58,    51,
      51,   133,   158,   180,   -87,   172,   -87
  };

  const signed char
  parser::yydefact_[] =
  {
       0,     0,     5,     6,     0,     0,     2,     0,    56,    58,
       3,    57,    59,     0,     0,     1,     4,     9,     0,     7,
       0,     0,    60,     0,     0,     0,     0,    11,     0,    55,
       0,     0,     0,    64,     0,     0,    68,     0,    24,    50,
      25,     0,    26,    27,    28,     0,    10,    32,    54,     0,
      20,    48,    15,    53,    29,    31,     0,    49,     0,     0,
       0,     0,     0,     9,     8,    62,     0,    61,     0,    73,
      65,     0,     0,    51,    16,    18,     0,     0,     0,     0,
       0,    30,     0,     0,     0,    13,    71,     0,    12,     0,
      63,     0,     0,     0,     0,     0,    74,    92,     0,     0,
      53,    78,    84,     0,    76,    79,    80,    81,    82,    83,
      87,    85,    86,     0,    69,    72,     0,    17,    52,    21,
      22,    23,    33,    34,   101,    98,     0,    70,    14,     0,
       0,    90,    91,    88,     0,    93,     0,    75,    77,    66,
      19,     0,   100,    35,    40,    43,    45,    47,     0,     0,
      89,     0,    67,    99,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    94,    38,    39,    36,    37,    41,
      42,    44,    46,    95,    97,     0,    96
  };

  const short
  parser::yypgoto_[] =
  {
     -87,   -87,   -87,     3,   -87,   164,   -19,   -28,   -87,    71,
     -87,   -87,   -35,   -25,    -3,    40,    37,   -87,    80,   -38,
     145,   -63,   -87,   -87,   -62,   202,   -87,   183,   -87,   146,
     190,   -87,   -24,   -87,   115,   -86,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87
  };

  const unsigned char
  parser::yydefgoto_[] =
  {
       0,     5,     6,    35,    18,    19,    27,    46,    76,    47,
      48,    49,    50,    51,   144,   145,   146,   147,   148,    52,
      58,    53,    54,     8,     9,    10,    21,    22,    11,    36,
      37,    12,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   126,    55,    56
  };

  const short
  parser::yytable_[] =
  {
      57,    31,    65,     7,    13,   100,   101,    77,    28,     7,
      69,     2,     3,    75,    81,    32,     2,     3,   116,    71,
      73,    71,    14,   117,    29,    15,    24,    25,     2,     3,
      99,    33,    17,    88,    72,    86,    87,    57,    90,    26,
     100,   101,    34,   119,   120,   121,   125,    59,   115,    38,
      39,    40,     1,     2,     3,   141,    91,   134,    92,    93,
      94,    95,    68,   127,    20,    99,    23,   154,   155,    25,
     142,    98,    63,    68,    96,    84,   173,   174,    42,    43,
      44,  -102,    70,    45,   113,    97,   156,   157,   140,   176,
      82,    83,    38,    39,    40,    78,    79,    80,   151,   100,
     100,    30,    25,   153,   143,   143,    98,     1,     2,     3,
       4,    85,   100,    62,    61,    62,    66,    62,    24,    25,
     152,    42,    43,    44,    99,    99,    45,   136,   133,   165,
     166,   167,   168,   143,   143,   143,   143,    99,    38,    39,
      40,     1,     2,     3,   118,    91,   128,    92,    93,    94,
      95,   158,   159,   122,   123,   169,   170,   131,   129,    38,
      39,    40,    68,   137,   130,   132,   139,    42,    43,    44,
     135,   150,    45,    25,    97,    38,    39,    40,   160,   162,
     161,   163,    91,   164,    92,    93,    94,    95,    42,    43,
      44,   175,    64,    45,   124,    38,    39,    40,   172,    68,
     171,    38,    39,    40,    42,    43,    44,    89,    16,    45,
     149,    97,    38,    39,    40,    67,    60,   114,   138,    41,
      74,     0,     0,     0,    42,    43,    44,     0,     0,    45,
      42,    43,    44,     0,     0,    45,    41,     0,     0,     0,
       0,    42,    43,    44,     0,     0,    45
  };

  const short
  parser::yycheck_[] =
  {
      25,    20,    30,     0,     1,    68,    68,    45,    23,     6,
      34,     7,     8,    41,    49,    23,     7,     8,    23,    23,
      39,    23,     4,    28,    39,     0,    24,    25,     7,     8,
      68,    39,     4,    61,    38,    59,    38,    62,    66,    37,
     103,   103,    38,    78,    79,    80,    84,    38,    72,     3,
       4,     5,     6,     7,     8,    23,    10,    95,    12,    13,
      14,    15,    27,    87,     4,   103,    37,    16,    17,    25,
      38,    68,     4,    27,    28,    37,   162,   163,    32,    33,
      34,    37,     4,    37,    25,    39,    35,    36,   116,   175,
      32,    33,     3,     4,     5,    29,    30,    31,   136,   162,
     163,    24,    25,   141,   129,   130,   103,     6,     7,     8,
       9,    26,   175,    25,    24,    25,    24,    25,    24,    25,
     139,    32,    33,    34,   162,   163,    37,    24,    39,   154,
     155,   156,   157,   158,   159,   160,   161,   175,     3,     4,
       5,     6,     7,     8,    38,    10,    26,    12,    13,    14,
      15,    18,    19,    82,    83,   158,   159,    39,    37,     3,
       4,     5,    27,    28,    37,    39,    26,    32,    33,    34,
      39,    39,    37,    25,    39,     3,     4,     5,    20,    38,
      21,    38,    10,    39,    12,    13,    14,    15,    32,    33,
      34,    11,    28,    37,    38,     3,     4,     5,   161,    27,
     160,     3,     4,     5,    32,    33,    34,    62,     6,    37,
     130,    39,     3,     4,     5,    32,    26,    71,   103,    27,
      28,    -1,    -1,    -1,    32,    33,    34,    -1,    -1,    37,
      32,    33,    34,    -1,    -1,    37,    27,    -1,    -1,    -1,
      -1,    32,    33,    34,    -1,    -1,    37
  };

  const signed char
  parser::yystos_[] =
  {
       0,     6,     7,     8,     9,    41,    42,    43,    63,    64,
      65,    68,    71,    43,     4,     0,    65,     4,    44,    45,
       4,    66,    67,    37,    24,    25,    37,    46,    23,    39,
      24,    46,    23,    39,    38,    43,    69,    70,     3,     4,
       5,    27,    32,    33,    34,    37,    47,    49,    50,    51,
      52,    53,    59,    61,    62,    84,    85,    53,    60,    38,
      70,    24,    25,     4,    45,    47,    24,    67,    27,    72,
       4,    23,    38,    46,    28,    47,    48,    59,    29,    30,
      31,    52,    32,    33,    37,    26,    72,    38,    47,    60,
      47,    10,    12,    13,    14,    15,    28,    39,    43,    59,
      61,    64,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    25,    69,    72,    23,    28,    38,    52,
      52,    52,    49,    49,    38,    59,    83,    72,    26,    37,
      37,    39,    39,    39,    59,    39,    24,    28,    74,    26,
      47,    23,    38,    53,    54,    55,    56,    57,    58,    58,
      39,    59,    46,    59,    16,    17,    35,    36,    18,    19,
      20,    21,    38,    38,    39,    53,    53,    53,    53,    54,
      54,    55,    56,    75,    75,    11,    75
  };

  const signed char
  parser::yyr1_[] =
  {
       0,    40,    41,    42,    42,    43,    43,    44,    44,    45,
      45,    45,    45,    46,    46,    47,    47,    47,    48,    48,
      49,    49,    49,    49,    50,    50,    51,    51,    51,    52,
      52,    52,    53,    53,    53,    54,    54,    54,    54,    54,
      55,    55,    55,    56,    56,    57,    57,    58,    59,    60,
      61,    61,    62,    62,    62,    63,    64,    64,    65,    65,
      66,    66,    67,    67,    68,    69,    69,    69,    70,    70,
      71,    71,    71,    71,    72,    72,    73,    73,    74,    74,
      75,    75,    75,    75,    75,    75,    75,    75,    76,    76,
      77,    78,    79,    79,    80,    81,    81,    82,    83,    83,
      84,    84,    85
  };

  const signed char
  parser::yyr2_[] =
  {
       0,     2,     1,     1,     2,     1,     1,     1,     3,     1,
       3,     2,     4,     3,     4,     1,     2,     3,     1,     3,
       1,     3,     3,     3,     1,     1,     1,     1,     1,     1,
       2,     1,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     1,     1,
       1,     2,     3,     1,     1,     3,     1,     1,     1,     1,
       1,     3,     3,     4,     4,     2,     4,     5,     1,     3,
       6,     5,     6,     5,     2,     3,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     3,
       2,     2,     1,     2,     4,     5,     7,     5,     1,     3,
       4,     3,     1
  };


#if YYDEBUG
  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a YYNTOKENS, nonterminals.
  const char*
  const parser::yytname_[] =
  {
  "\"end of file\"", "error", "\"invalid token\"", "INT_CONST", "IDENT",
  "FLOAT_CONST", "CONST", "INT", "FLOAT", "VOID", "IF", "ELSE", "WHILE",
  "BREAK", "CONTINUE", "RETURN", "LE", "GE", "EQ", "NE", "AND", "OR",
  "LOWER_THAN_ELSE", "','", "'='", "'['", "']'", "'{'", "'}'", "'*'",
  "'/'", "'%'", "'+'", "'-'", "'!'", "'<'", "'>'", "'('", "')'", "';'",
  "$accept", "Program", "CompUnit", "BType", "VarDefList", "VarDef",
  "ArrayList", "InitVal", "InitValList", "MulExp", "Number", "UnaryOp",
  "UnaryExp", "AddExp", "RelExp", "EqExp", "LAndExp", "LOrExp", "Cond",
  "Exp", "ConstExp", "LVal", "PrimaryExp", "VarDecl", "Decl", "Item",
  "ConstDefList", "ConstDef", "ConstDecl", "FuncParam", "FuncParamList",
  "FuncDef", "Block", "BlockItemList", "BlockItem", "Stmt", "ReturnStmt",
  "BreakStmt", "ContinueStmt", "ExpStmt", "AssignStmt", "IfStmt",
  "WhileStmt", "FuncRParamList", "FuncCall", "FuncIdent", YY_NULLPTR
  };
#endif


#if YYDEBUG
  const short
  parser::yyrline_[] =
  {
       0,   134,   134,   139,   142,   148,   149,   152,   155,   163,
     167,   171,   176,   182,   185,   191,   194,   197,   202,   205,
     211,   214,   219,   224,   231,   234,   239,   240,   241,   245,
     248,   252,   258,   261,   266,   273,   276,   281,   286,   291,
     298,   301,   306,   313,   316,   323,   326,   333,   338,   343,
     348,   352,   358,   361,   364,   369,   374,   377,   382,   385,
     390,   393,   399,   403,   409,   414,   418,   422,   429,   432,
     438,   442,   446,   450,   456,   459,   464,   467,   473,   476,
     481,   482,   483,   484,   485,   486,   487,   488,   492,   495,
     500,   506,   512,   515,   520,   525,   528,   533,   538,   541,
     547,   552,   559
  };

  void
  parser::yy_stack_print_ () const
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << int (i->state);
    *yycdebug_ << '\n';
  }

  void
  parser::yy_reduce_print_ (int yyrule) const
  {
    int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):\n";
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG

  parser::symbol_kind_type
  parser::yytranslate_ (int t) YY_NOEXCEPT
  {
    // YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to
    // TOKEN-NUM as returned by yylex.
    static
    const signed char
    translate_table[] =
    {
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    34,     2,     2,     2,    31,     2,     2,
      37,    38,    29,    32,    23,    33,     2,    30,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    39,
      35,    24,    36,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    25,     2,    26,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    27,     2,    28,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22
    };
    // Last valid token kind.
    const int code_max = 277;

    if (t <= 0)
      return symbol_kind::S_YYEOF;
    else if (t <= code_max)
      return static_cast <symbol_kind_type> (translate_table[t]);
    else
      return symbol_kind::S_YYUNDEF;
  }

} // yy
#line 1909 "src/yacc/Bison.cpp"

#line 564 "src/yacc/sysy.y"


void yy::parser::error(const std::string& msg) {
    std::cerr << "Parse error at line "
              << yylineno << ": "
              << msg << std::endl;
};
