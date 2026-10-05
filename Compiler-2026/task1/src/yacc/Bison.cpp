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
#line 127 "src/yacc/sysy.y"
             {
        ASTRoot.reset((yystack_[0].value.compUnit));
}
#line 584 "src/yacc/Bison.cpp"
    break;

  case 3: // CompUnit: Item
#line 132 "src/yacc/sysy.y"
            {
            (yylhs.value.compUnit) = new CompUnit((yystack_[0].value.ast));
    }
#line 592 "src/yacc/Bison.cpp"
    break;

  case 4: // CompUnit: CompUnit Item
#line 135 "src/yacc/sysy.y"
                     {
            (yystack_[1].value.compUnit)->pushBack((yystack_[0].value.ast));
            (yylhs.value.compUnit) = (yystack_[1].value.compUnit);
}
#line 601 "src/yacc/Bison.cpp"
    break;

  case 5: // BType: INT
#line 141 "src/yacc/sysy.y"
             {(yylhs.value.type) = SY_INT;}
#line 607 "src/yacc/Bison.cpp"
    break;

  case 6: // BType: FLOAT
#line 142 "src/yacc/sysy.y"
               {(yylhs.value.type) = SY_FLOAT;}
#line 613 "src/yacc/Bison.cpp"
    break;

  case 7: // VarDefList: VarDef
#line 145 "src/yacc/sysy.y"
              {
            (yylhs.value.varDefList) = new VarDefList((yystack_[0].value.varDef));
        }
#line 621 "src/yacc/Bison.cpp"
    break;

  case 8: // VarDefList: VarDefList ',' VarDef
#line 148 "src/yacc/sysy.y"
                             {
        (yystack_[2].value.varDefList)->pushBack((yystack_[0].value.varDef));
        (yylhs.value.varDefList) = (yystack_[2].value.varDefList);
}
#line 630 "src/yacc/Bison.cpp"
    break;

  case 9: // VarDef: IDENT
#line 156 "src/yacc/sysy.y"
             {
            (yylhs.value.varDef) = new VarDef((yystack_[0].value.str));
            free((yystack_[0].value.str));
        }
#line 639 "src/yacc/Bison.cpp"
    break;

  case 10: // VarDef: IDENT '=' InitVal
#line 160 "src/yacc/sysy.y"
                         {
            (yylhs.value.varDef) = new VarDef((yystack_[2].value.str),nullptr,(yystack_[0].value.initVal));
            free((yystack_[2].value.str));
        }
#line 648 "src/yacc/Bison.cpp"
    break;

  case 11: // VarDef: IDENT ArrayList
#line 164 "src/yacc/sysy.y"
                        {
          (yylhs.value.varDef) = new VarDef((yystack_[1].value.str), (yystack_[0].value.arrayList), nullptr);
          free((yystack_[1].value.str));
      }
#line 657 "src/yacc/Bison.cpp"
    break;

  case 12: // VarDef: IDENT ArrayList '=' InitVal
#line 169 "src/yacc/sysy.y"
                                    {
            (yylhs.value.varDef) = new VarDef((yystack_[3].value.str), (yystack_[2].value.arrayList), (yystack_[0].value.initVal));
            free((yystack_[3].value.str));
}
#line 666 "src/yacc/Bison.cpp"
    break;

  case 13: // ArrayList: '[' ConstExp ']'
#line 175 "src/yacc/sysy.y"
                        {
            (yylhs.value.arrayList) = new ArrayList((yystack_[1].value.addExp));
        }
#line 674 "src/yacc/Bison.cpp"
    break;

  case 14: // ArrayList: ArrayList '[' ConstExp ']'
#line 178 "src/yacc/sysy.y"
                                  {
        (yystack_[3].value.arrayList)->pushBack((yystack_[1].value.addExp));
        (yylhs.value.arrayList) = (yystack_[3].value.arrayList);
}
#line 683 "src/yacc/Bison.cpp"
    break;

  case 15: // InitVal: Exp
#line 184 "src/yacc/sysy.y"
           {
            (yylhs.value.initVal) = new InitVal((yystack_[0].value.addExp));
        }
#line 691 "src/yacc/Bison.cpp"
    break;

  case 16: // InitVal: '{' '}'
#line 187 "src/yacc/sysy.y"
               {
            (yylhs.value.initVal) = new InitVal();
    }
#line 699 "src/yacc/Bison.cpp"
    break;

  case 17: // InitVal: '{' InitValList '}'
#line 190 "src/yacc/sysy.y"
                           {
        (yylhs.value.initVal) = new InitVal((yystack_[1].value.initValList));
;}
#line 707 "src/yacc/Bison.cpp"
    break;

  case 18: // InitValList: InitVal
#line 195 "src/yacc/sysy.y"
               {
            (yylhs.value.initValList) = new InitValList((yystack_[0].value.initVal));
        }
#line 715 "src/yacc/Bison.cpp"
    break;

  case 19: // InitValList: InitValList ',' InitVal
#line 198 "src/yacc/sysy.y"
                               {
            (yystack_[2].value.initValList)->pushBack((yystack_[0].value.initVal));
            (yylhs.value.initValList) = (yystack_[2].value.initValList);
}
#line 724 "src/yacc/Bison.cpp"
    break;

  case 20: // MulExp: UnaryExp
#line 204 "src/yacc/sysy.y"
                {
            (yylhs.value.mulExp) = new MulExp((yystack_[0].value.unaryExp));
        }
#line 732 "src/yacc/Bison.cpp"
    break;

  case 21: // MulExp: MulExp '*' UnaryExp
#line 207 "src/yacc/sysy.y"
                           {
            (yystack_[2].value.mulExp)->pushBack(SY_MUL);
            (yystack_[2].value.mulExp)->pushBack((yystack_[0].value.unaryExp));
            (yylhs.value.mulExp) = (yystack_[2].value.mulExp);
    }
#line 742 "src/yacc/Bison.cpp"
    break;

  case 22: // MulExp: MulExp '/' UnaryExp
#line 212 "src/yacc/sysy.y"
                           {
            (yystack_[2].value.mulExp)->pushBack(SY_DIV);
            (yystack_[2].value.mulExp)->pushBack((yystack_[0].value.unaryExp));
            (yylhs.value.mulExp) = (yystack_[2].value.mulExp);
    }
#line 752 "src/yacc/Bison.cpp"
    break;

  case 23: // MulExp: MulExp '%' UnaryExp
#line 217 "src/yacc/sysy.y"
                           {
            (yystack_[2].value.mulExp)->pushBack(SY_MOD);
            (yystack_[2].value.mulExp)->pushBack((yystack_[0].value.unaryExp));
            (yylhs.value.mulExp) = (yystack_[2].value.mulExp);
}
#line 762 "src/yacc/Bison.cpp"
    break;

  case 24: // Number: INT_CONST
#line 224 "src/yacc/sysy.y"
                  {
            (yylhs.value.ast) = new ConValue<int>((yystack_[0].value.number));
        }
#line 770 "src/yacc/Bison.cpp"
    break;

  case 25: // Number: FLOAT_CONST
#line 227 "src/yacc/sysy.y"
                   {
            (yylhs.value.ast) = new ConValue<float>((yystack_[0].value.float_number));
}
#line 778 "src/yacc/Bison.cpp"
    break;

  case 26: // UnaryOp: '+'
#line 232 "src/yacc/sysy.y"
                { (yylhs.value.type) = SY_ADD; }
#line 784 "src/yacc/Bison.cpp"
    break;

  case 27: // UnaryOp: '-'
#line 233 "src/yacc/sysy.y"
                { (yylhs.value.type) = SY_SUB; }
#line 790 "src/yacc/Bison.cpp"
    break;

  case 28: // UnaryOp: '!'
#line 234 "src/yacc/sysy.y"
                { (yylhs.value.type) = SY_NOT; }
#line 796 "src/yacc/Bison.cpp"
    break;

  case 29: // UnaryExp: PrimaryExp
#line 238 "src/yacc/sysy.y"
                   {
          (yylhs.value.unaryExp) = new UnaryExp((yystack_[0].value.ast));
      }
#line 804 "src/yacc/Bison.cpp"
    break;

  case 30: // UnaryExp: UnaryOp UnaryExp
#line 241 "src/yacc/sysy.y"
                         {
          (yystack_[0].value.unaryExp)->pushFront((yystack_[1].value.type));
          (yylhs.value.unaryExp) = (yystack_[0].value.unaryExp);
        }
#line 813 "src/yacc/Bison.cpp"
    break;

  case 31: // UnaryExp: FuncCall
#line 245 "src/yacc/sysy.y"
                {
            (yylhs.value.unaryExp) = new UnaryExp((yystack_[0].value.funcCall));
    }
#line 821 "src/yacc/Bison.cpp"
    break;

  case 32: // AddExp: MulExp
#line 251 "src/yacc/sysy.y"
              {
            (yylhs.value.addExp) = new AddExp((yystack_[0].value.mulExp));
        }
#line 829 "src/yacc/Bison.cpp"
    break;

  case 33: // AddExp: AddExp '+' MulExp
#line 254 "src/yacc/sysy.y"
                         {
            (yystack_[2].value.addExp)->pushBack(SY_ADD);
            (yystack_[2].value.addExp)->pushBack((yystack_[0].value.mulExp));
            (yylhs.value.addExp) = (yystack_[2].value.addExp);
    }
#line 839 "src/yacc/Bison.cpp"
    break;

  case 34: // AddExp: AddExp '-' MulExp
#line 259 "src/yacc/sysy.y"
                         {
            (yystack_[2].value.addExp)->pushBack(SY_SUB);
            (yystack_[2].value.addExp)->pushBack((yystack_[0].value.mulExp));
            (yylhs.value.addExp) = (yystack_[2].value.addExp);       
}
#line 849 "src/yacc/Bison.cpp"
    break;

  case 35: // RelExp: AddExp
#line 266 "src/yacc/sysy.y"
              {
            (yylhs.value.relExp) = new RelExp((yystack_[0].value.addExp));
        }
#line 857 "src/yacc/Bison.cpp"
    break;

  case 36: // RelExp: RelExp '<' AddExp
#line 269 "src/yacc/sysy.y"
                         {
            (yystack_[2].value.relExp)->pushBack(SY_LESS);
            (yystack_[2].value.relExp)->pushBack((yystack_[0].value.addExp));
            (yylhs.value.relExp) = (yystack_[2].value.relExp);
    }
#line 867 "src/yacc/Bison.cpp"
    break;

  case 37: // RelExp: RelExp '>' AddExp
#line 274 "src/yacc/sysy.y"
                         {
            (yystack_[2].value.relExp)->pushBack(SY_GREAT);
            (yystack_[2].value.relExp)->pushBack((yystack_[0].value.addExp));
            (yylhs.value.relExp) = (yystack_[2].value.relExp);
    }
#line 877 "src/yacc/Bison.cpp"
    break;

  case 38: // RelExp: RelExp LE AddExp
#line 279 "src/yacc/sysy.y"
                        {
            (yystack_[2].value.relExp)->pushBack(SY_LESSEQ);
            (yystack_[2].value.relExp)->pushBack((yystack_[0].value.addExp));
            (yylhs.value.relExp) = (yystack_[2].value.relExp);
    }
#line 887 "src/yacc/Bison.cpp"
    break;

  case 39: // RelExp: RelExp GE AddExp
#line 284 "src/yacc/sysy.y"
                        {
            (yystack_[2].value.relExp)->pushBack(SY_GREATEQ);
            (yystack_[2].value.relExp)->pushBack((yystack_[0].value.addExp));
            (yylhs.value.relExp) = (yystack_[2].value.relExp);
}
#line 897 "src/yacc/Bison.cpp"
    break;

  case 40: // EqExp: RelExp
#line 291 "src/yacc/sysy.y"
              {
            (yylhs.value.eqExp) = new EqExp((yystack_[0].value.relExp));
        }
#line 905 "src/yacc/Bison.cpp"
    break;

  case 41: // EqExp: EqExp EQ RelExp
#line 294 "src/yacc/sysy.y"
                       {
            (yystack_[2].value.eqExp)->pushBack(SY_EQ);
            (yystack_[2].value.eqExp)->pushBack((yystack_[0].value.relExp));
            (yylhs.value.eqExp) = (yystack_[2].value.eqExp);
    }
#line 915 "src/yacc/Bison.cpp"
    break;

  case 42: // EqExp: EqExp NE RelExp
#line 299 "src/yacc/sysy.y"
                       {
            (yystack_[2].value.eqExp)->pushBack(SY_NOTEQ);
            (yystack_[2].value.eqExp)->pushBack((yystack_[0].value.relExp));
            (yylhs.value.eqExp) = (yystack_[2].value.eqExp);
}
#line 925 "src/yacc/Bison.cpp"
    break;

  case 43: // LAndExp: EqExp
#line 306 "src/yacc/sysy.y"
             {
            (yylhs.value.lAndExp) = new LAndExp((yystack_[0].value.eqExp));
        }
#line 933 "src/yacc/Bison.cpp"
    break;

  case 44: // LAndExp: LAndExp AND EqExp
#line 309 "src/yacc/sysy.y"
                         {
            (yystack_[2].value.lAndExp)->pushBack(SY_AND);
            (yystack_[2].value.lAndExp)->pushBack((yystack_[0].value.eqExp));
            (yylhs.value.lAndExp) = (yystack_[2].value.lAndExp);
}
#line 943 "src/yacc/Bison.cpp"
    break;

  case 45: // LOrExp: LAndExp
#line 316 "src/yacc/sysy.y"
               {
            (yylhs.value.lOrExp) = new LOrExp((yystack_[0].value.lAndExp));
        }
#line 951 "src/yacc/Bison.cpp"
    break;

  case 46: // LOrExp: LOrExp OR LAndExp
#line 319 "src/yacc/sysy.y"
                         {
            (yystack_[2].value.lOrExp)->pushBack(SY_OR);
            (yystack_[2].value.lOrExp)->pushBack((yystack_[0].value.lAndExp));
            (yylhs.value.lOrExp) = (yystack_[2].value.lOrExp);
}
#line 961 "src/yacc/Bison.cpp"
    break;

  case 47: // Cond: LOrExp
#line 326 "src/yacc/sysy.y"
              {
            (yylhs.value.lOrExp) = (yystack_[0].value.lOrExp);
}
#line 969 "src/yacc/Bison.cpp"
    break;

  case 48: // Exp: AddExp
#line 331 "src/yacc/sysy.y"
              {
            (yylhs.value.addExp) = (yystack_[0].value.addExp);
}
#line 977 "src/yacc/Bison.cpp"
    break;

  case 49: // ConstExp: AddExp
#line 336 "src/yacc/sysy.y"
              {
            (yylhs.value.addExp) = (yystack_[0].value.addExp);
}
#line 985 "src/yacc/Bison.cpp"
    break;

  case 50: // LVal: IDENT
#line 341 "src/yacc/sysy.y"
             {
            (yylhs.value.lval) = new LVal((yystack_[0].value.str));
            free((yystack_[0].value.str));
        }
#line 994 "src/yacc/Bison.cpp"
    break;

  case 51: // LVal: IDENT ArrayList
#line 345 "src/yacc/sysy.y"
                       {
            (yylhs.value.lval) = new LVal((yystack_[1].value.str),(yystack_[0].value.arrayList));
            free((yystack_[1].value.str));
}
#line 1003 "src/yacc/Bison.cpp"
    break;

  case 52: // PrimaryExp: '(' Exp ')'
#line 351 "src/yacc/sysy.y"
                  {
            (yylhs.value.ast) = (yystack_[1].value.addExp);
        }
#line 1011 "src/yacc/Bison.cpp"
    break;

  case 53: // PrimaryExp: LVal
#line 354 "src/yacc/sysy.y"
             {
            (yylhs.value.ast) = (yystack_[0].value.lval);
        }
#line 1019 "src/yacc/Bison.cpp"
    break;

  case 54: // PrimaryExp: Number
#line 357 "src/yacc/sysy.y"
               {
            (yylhs.value.ast) = (yystack_[0].value.ast);
}
#line 1027 "src/yacc/Bison.cpp"
    break;

  case 55: // VarDecl: BType VarDefList ';'
#line 362 "src/yacc/sysy.y"
                            {
            (yylhs.value.varDecl) = new VarDecl((yystack_[2].value.type),(yystack_[1].value.varDefList));
}
#line 1035 "src/yacc/Bison.cpp"
    break;

  case 56: // Decl: VarDecl
#line 367 "src/yacc/sysy.y"
               {
            (yylhs.value.ast) = (yystack_[0].value.varDecl);
        }
#line 1043 "src/yacc/Bison.cpp"
    break;

  case 57: // Decl: ConstDecl
#line 370 "src/yacc/sysy.y"
                 {
            (yylhs.value.ast) = (yystack_[0].value.constDecl);
}
#line 1051 "src/yacc/Bison.cpp"
    break;

  case 58: // Item: Decl
#line 375 "src/yacc/sysy.y"
            {
            (yylhs.value.ast) = (yystack_[0].value.ast);
        }
#line 1059 "src/yacc/Bison.cpp"
    break;

  case 59: // Item: FuncDef
#line 378 "src/yacc/sysy.y"
               {
            (yylhs.value.ast) = (yystack_[0].value.funcDef);
}
#line 1067 "src/yacc/Bison.cpp"
    break;

  case 60: // ConstDefList: ConstDef
#line 383 "src/yacc/sysy.y"
                {
            (yylhs.value.constDefList) = new ConstDefList((yystack_[0].value.constDef));
        }
#line 1075 "src/yacc/Bison.cpp"
    break;

  case 61: // ConstDefList: ConstDefList ',' ConstDef
#line 386 "src/yacc/sysy.y"
                                 {
            (yystack_[2].value.constDefList)->pushBack((yystack_[0].value.constDef));
            (yylhs.value.constDefList) = (yystack_[2].value.constDefList);
}
#line 1084 "src/yacc/Bison.cpp"
    break;

  case 62: // ConstDef: IDENT '=' InitVal
#line 392 "src/yacc/sysy.y"
                         {
            (yylhs.value.constDef) = new ConstDef((yystack_[2].value.str),nullptr,(yystack_[0].value.initVal));
            free((yystack_[2].value.str));
        }
#line 1093 "src/yacc/Bison.cpp"
    break;

  case 63: // ConstDef: IDENT ArrayList '=' InitVal
#line 396 "src/yacc/sysy.y"
                                   {
            (yylhs.value.constDef) = new ConstDef((yystack_[3].value.str),(yystack_[2].value.arrayList),(yystack_[0].value.initVal));
            free((yystack_[3].value.str));
}
#line 1102 "src/yacc/Bison.cpp"
    break;

  case 64: // ConstDecl: CONST BType ConstDefList ';'
#line 402 "src/yacc/sysy.y"
                                    {
            (yylhs.value.constDecl) = new ConstDecl((yystack_[2].value.type),(yystack_[1].value.constDefList));
}
#line 1110 "src/yacc/Bison.cpp"
    break;

  case 65: // FuncParam: BType IDENT
#line 407 "src/yacc/sysy.y"
                   {
            (yylhs.value.funcParam) = new FuncParam((yystack_[1].value.type),(yystack_[0].value.str));
            free((yystack_[0].value.str));
        }
#line 1119 "src/yacc/Bison.cpp"
    break;

  case 66: // FuncParam: BType IDENT '[' ']'
#line 411 "src/yacc/sysy.y"
                           {
            (yylhs.value.funcParam) = new FuncParam((yystack_[3].value.type),(yystack_[2].value.str),true);
            free((yystack_[2].value.str));
    }
#line 1128 "src/yacc/Bison.cpp"
    break;

  case 67: // FuncParam: BType IDENT '[' ']' ArrayList
#line 415 "src/yacc/sysy.y"
                                     {
        (yylhs.value.funcParam) = new FuncParam((yystack_[4].value.type),(yystack_[3].value.str),true,(yystack_[0].value.arrayList));
        free((yystack_[3].value.str));

}
#line 1138 "src/yacc/Bison.cpp"
    break;

  case 68: // FuncParamList: FuncParam
#line 422 "src/yacc/sysy.y"
                 {
            (yylhs.value.funcParamList) = new FuncParamList((yystack_[0].value.funcParam));
        }
#line 1146 "src/yacc/Bison.cpp"
    break;

  case 69: // FuncParamList: FuncParamList ',' FuncParam
#line 425 "src/yacc/sysy.y"
                                       {
            (yystack_[2].value.funcParamList)->pushBack((yystack_[0].value.funcParam));
            (yylhs.value.funcParamList) = (yystack_[2].value.funcParamList);
}
#line 1155 "src/yacc/Bison.cpp"
    break;

  case 70: // FuncDef: BType IDENT '(' FuncParamList ')' Block
#line 431 "src/yacc/sysy.y"
                                               {
            (yylhs.value.funcDef) = new FuncDef((yystack_[5].value.type),(yystack_[4].value.str),(yystack_[2].value.funcParamList),(yystack_[0].value.block));
            free((yystack_[4].value.str));
        }
#line 1164 "src/yacc/Bison.cpp"
    break;

  case 71: // FuncDef: BType IDENT '(' ')' Block
#line 435 "src/yacc/sysy.y"
                                 {
            (yylhs.value.funcDef) = new FuncDef((yystack_[4].value.type),(yystack_[3].value.str),nullptr,(yystack_[0].value.block));
            free((yystack_[3].value.str));
        }
#line 1173 "src/yacc/Bison.cpp"
    break;

  case 72: // FuncDef: VOID IDENT '(' FuncParamList ')' Block
#line 439 "src/yacc/sysy.y"
                                              {
            (yylhs.value.funcDef) = new FuncDef(SY_VOID,(yystack_[4].value.str),(yystack_[2].value.funcParamList),(yystack_[0].value.block));
            free((yystack_[4].value.str));
        }
#line 1182 "src/yacc/Bison.cpp"
    break;

  case 73: // FuncDef: VOID IDENT '(' ')' Block
#line 443 "src/yacc/sysy.y"
                                {
            (yylhs.value.funcDef) = new FuncDef(SY_VOID,(yystack_[3].value.str),nullptr,(yystack_[0].value.block));
            free((yystack_[3].value.str));
        }
#line 1191 "src/yacc/Bison.cpp"
    break;

  case 74: // Block: '{' '}'
#line 449 "src/yacc/sysy.y"
               {
            (yylhs.value.block) = new Block(nullptr);
        }
#line 1199 "src/yacc/Bison.cpp"
    break;

  case 75: // Block: '{' BlockItemList '}'
#line 452 "src/yacc/sysy.y"
                             {
            (yylhs.value.block) = new Block((yystack_[1].value.blockItemList));
}
#line 1207 "src/yacc/Bison.cpp"
    break;

  case 76: // BlockItemList: BlockItem
#line 457 "src/yacc/sysy.y"
                   {
            (yylhs.value.blockItemList) = new BlockItemList((yystack_[0].value.ast));
        }
#line 1215 "src/yacc/Bison.cpp"
    break;

  case 77: // BlockItemList: BlockItemList BlockItem
#line 460 "src/yacc/sysy.y"
                               {
        (yystack_[1].value.blockItemList)->pushBack((yystack_[0].value.ast));
        (yylhs.value.blockItemList) = (yystack_[1].value.blockItemList);
}
#line 1224 "src/yacc/Bison.cpp"
    break;

  case 78: // BlockItem: Decl
#line 466 "src/yacc/sysy.y"
            {
            (yylhs.value.ast) = (yystack_[0].value.ast);
        }
#line 1232 "src/yacc/Bison.cpp"
    break;

  case 79: // BlockItem: Stmt
#line 469 "src/yacc/sysy.y"
            {
            (yylhs.value.ast) = (yystack_[0].value.ast);
}
#line 1240 "src/yacc/Bison.cpp"
    break;

  case 80: // Stmt: ReturnStmt
#line 474 "src/yacc/sysy.y"
                     { (yylhs.value.ast) = (yystack_[0].value.ast); }
#line 1246 "src/yacc/Bison.cpp"
    break;

  case 81: // Stmt: BreakStmt
#line 475 "src/yacc/sysy.y"
                     { (yylhs.value.ast) = (yystack_[0].value.ast); }
#line 1252 "src/yacc/Bison.cpp"
    break;

  case 82: // Stmt: ContinueStmt
#line 476 "src/yacc/sysy.y"
                     { (yylhs.value.ast) = (yystack_[0].value.ast); }
#line 1258 "src/yacc/Bison.cpp"
    break;

  case 83: // Stmt: ExpStmt
#line 477 "src/yacc/sysy.y"
                     { (yylhs.value.ast) = (yystack_[0].value.ast); }
#line 1264 "src/yacc/Bison.cpp"
    break;

  case 84: // Stmt: Block
#line 478 "src/yacc/sysy.y"
                     { (yylhs.value.ast) = (yystack_[0].value.block); }
#line 1270 "src/yacc/Bison.cpp"
    break;

  case 85: // Stmt: IfStmt
#line 479 "src/yacc/sysy.y"
                     { (yylhs.value.ast) = (yystack_[0].value.ast); }
#line 1276 "src/yacc/Bison.cpp"
    break;

  case 86: // Stmt: WhileStmt
#line 480 "src/yacc/sysy.y"
                     { (yylhs.value.ast) = (yystack_[0].value.ast); }
#line 1282 "src/yacc/Bison.cpp"
    break;

  case 87: // Stmt: AssignStmt
#line 481 "src/yacc/sysy.y"
                     { (yylhs.value.ast) = (yystack_[0].value.ast); }
#line 1288 "src/yacc/Bison.cpp"
    break;

  case 88: // ReturnStmt: RETURN ';'
#line 485 "src/yacc/sysy.y"
                   {
            (yylhs.value.ast) = new ReturnStmt();
        }
#line 1296 "src/yacc/Bison.cpp"
    break;

  case 89: // ReturnStmt: RETURN Exp ';'
#line 488 "src/yacc/sysy.y"
                       {
            (yylhs.value.ast) = new ReturnStmt((yystack_[1].value.addExp));
}
#line 1304 "src/yacc/Bison.cpp"
    break;

  case 90: // BreakStmt: BREAK ';'
#line 493 "src/yacc/sysy.y"
                  {
            (yylhs.value.ast) = new BreakStmt();
    }
#line 1312 "src/yacc/Bison.cpp"
    break;

  case 91: // ContinueStmt: CONTINUE ';'
#line 499 "src/yacc/sysy.y"
                     {
            (yylhs.value.ast) = new ContinueStmt();
    }
#line 1320 "src/yacc/Bison.cpp"
    break;

  case 92: // ExpStmt: ';'
#line 505 "src/yacc/sysy.y"
            {
            (yylhs.value.ast) = new ExpStmt(nullptr);
        }
#line 1328 "src/yacc/Bison.cpp"
    break;

  case 93: // ExpStmt: Exp ';'
#line 508 "src/yacc/sysy.y"
                {
            (yylhs.value.ast) = new ExpStmt((yystack_[1].value.addExp));
}
#line 1336 "src/yacc/Bison.cpp"
    break;

  case 94: // AssignStmt: LVal '=' Exp ';'
#line 513 "src/yacc/sysy.y"
                        {
            (yylhs.value.ast) = new AssignStmt((yystack_[3].value.lval),(yystack_[1].value.addExp));
}
#line 1344 "src/yacc/Bison.cpp"
    break;

  case 95: // IfStmt: IF '(' Cond ')' Stmt
#line 518 "src/yacc/sysy.y"
                                                  {
            (yylhs.value.ast) = new IfStmt((yystack_[2].value.lOrExp),(yystack_[0].value.ast));
        }
#line 1352 "src/yacc/Bison.cpp"
    break;

  case 96: // IfStmt: IF '(' Cond ')' Stmt ELSE Stmt
#line 521 "src/yacc/sysy.y"
                                      {
            (yylhs.value.ast) = new IfStmt((yystack_[4].value.lOrExp),(yystack_[2].value.ast),(yystack_[0].value.ast));
}
#line 1360 "src/yacc/Bison.cpp"
    break;

  case 97: // WhileStmt: WHILE '(' Cond ')' Stmt
#line 526 "src/yacc/sysy.y"
                                {
            (yylhs.value.ast) = new WhileStmt((yystack_[2].value.lOrExp), (yystack_[0].value.ast));
}
#line 1368 "src/yacc/Bison.cpp"
    break;

  case 98: // FuncRParamList: Exp
#line 531 "src/yacc/sysy.y"
            {
            (yylhs.value.funcRParamList) = new FuncRParamList((yystack_[0].value.addExp));
        }
#line 1376 "src/yacc/Bison.cpp"
    break;

  case 99: // FuncRParamList: FuncRParamList ',' Exp
#line 534 "src/yacc/sysy.y"
                               {
            (yystack_[2].value.funcRParamList)->pushBack((yystack_[0].value.addExp));
            (yylhs.value.funcRParamList) = (yystack_[2].value.funcRParamList);
}
#line 1385 "src/yacc/Bison.cpp"
    break;

  case 100: // FuncCall: IDENT '(' FuncRParamList ')'
#line 540 "src/yacc/sysy.y"
                                     {
            (yylhs.value.funcCall) = new FuncCall((yystack_[3].value.str),(yystack_[1].value.funcRParamList),yylineno);
            free((yystack_[3].value.str));
        }
#line 1394 "src/yacc/Bison.cpp"
    break;

  case 101: // FuncCall: IDENT '(' ')'
#line 544 "src/yacc/sysy.y"
                     {
            (yylhs.value.funcCall) = new FuncCall((yystack_[2].value.str),yylineno);
            free((yystack_[2].value.str));
    }
#line 1403 "src/yacc/Bison.cpp"
    break;


#line 1407 "src/yacc/Bison.cpp"

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









  const signed char parser::yypact_ninf_ = -64;

  const signed char parser::yytable_ninf_ = -1;

  const short
  parser::yypact_[] =
  {
     182,   110,   -64,   -64,    24,    41,   182,    62,   -64,   -64,
     -64,   -64,   -64,    69,    34,   -64,   -64,   133,    -6,   -64,
      96,    -4,   -64,    67,   160,   173,    78,   161,    74,   -64,
     160,   174,    69,   -64,    57,    89,   -64,     8,   -64,    -7,
     -64,   147,   -64,   -64,   -64,   173,   -64,   -21,   -64,   173,
     -64,   168,   -64,   -64,   -64,   -64,   168,    86,    57,    19,
     160,   173,   178,   -64,   -64,   160,   -64,    55,   -64,    75,
     110,    57,   122,    77,   -64,   -64,    26,    84,   173,   173,
     173,   -64,   173,   173,   -64,   -64,    57,   -64,    88,   -64,
     106,   108,   114,   130,    76,   -64,   -64,    74,   157,   148,
     -64,   -64,   134,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   189,   -64,   -64,   -64,   -64,    68,   160,   -64,
     -64,   -64,   -64,   -64,   -21,   -21,   -64,   -64,   173,   173,
     -64,   -64,   -64,   165,   -64,   173,   -64,   -64,   191,   173,
     -64,   -64,   168,    60,   190,   197,   198,   180,   183,   -64,
     181,    77,   -64,   173,   173,   173,   173,   173,   173,   173,
     173,    11,    11,   -64,   168,   168,   168,   168,    60,    60,
     190,   197,   211,   -64,    11,   -64
  };

  const signed char
  parser::yydefact_[] =
  {
       0,     0,     5,     6,     0,     0,     2,     0,    56,    58,
       3,    57,    59,     0,     0,     1,     4,     9,     0,     7,
       0,     0,    60,     0,     0,     0,     0,    11,     0,    55,
       0,     0,     0,    64,     0,     0,    68,     0,    24,    50,
      25,     0,    26,    27,    28,     0,    10,    32,    54,     0,
      20,    48,    15,    53,    29,    31,    49,     0,     0,     0,
       0,     0,     9,     8,    62,     0,    61,     0,    73,    65,
       0,     0,     0,    51,    16,    18,     0,     0,     0,     0,
       0,    30,     0,     0,    13,    71,     0,    12,     0,    63,
       0,     0,     0,     0,     0,    74,    92,     0,     0,    53,
      78,    84,     0,    76,    79,    80,    81,    82,    83,    87,
      85,    86,     0,    69,    72,   101,    98,     0,     0,    17,
      52,    21,    22,    23,    33,    34,    70,    14,     0,     0,
      90,    91,    88,     0,    93,     0,    75,    77,    66,     0,
     100,    19,    35,    40,    43,    45,    47,     0,     0,    89,
       0,    67,    99,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    94,    38,    39,    36,    37,    41,    42,
      44,    46,    95,    97,     0,    96
  };

  const short
  parser::yypgoto_[] =
  {
     -64,   -64,   -64,     5,   -64,   195,   -19,   -28,   -64,   129,
     -64,   -64,   -27,   -25,    56,    65,    66,   -64,    98,   -38,
     164,   -63,   -64,   -64,   -55,   222,   -64,   199,   -64,   159,
     204,   -64,   -31,   -64,   131,    21,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64
  };

  const unsigned char
  parser::yydefgoto_[] =
  {
       0,     5,     6,    35,    18,    19,    27,    46,    76,    47,
      48,    49,    50,    51,   143,   144,   145,   146,   147,    52,
      57,    53,    54,     8,     9,    10,    21,    22,    11,    36,
      37,    12,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   117,    55
  };

  const unsigned char
  parser::yytable_[] =
  {
      56,    31,    64,    68,    99,     7,    13,    77,    78,    79,
      80,     7,   100,    75,    38,    39,    40,    28,    25,    32,
      73,    90,    81,    91,    92,    93,    94,    85,    14,    98,
      72,    70,    87,    29,   116,    33,    56,    89,    67,    99,
     114,    15,    70,    42,    43,    44,    71,   100,    45,   118,
      96,   121,   122,   123,   119,   126,   133,    86,    38,    39,
      40,     1,     2,     3,    98,    90,    17,    91,    92,    93,
      94,    23,    97,    20,     2,     3,   153,   154,    62,    38,
      39,    40,    67,    95,    67,     2,     3,    42,    43,    44,
     141,   139,    45,    69,    96,   155,   156,   150,    99,    99,
     112,   152,    61,   142,   142,    34,   140,    97,    42,    43,
      44,    99,    84,    45,   127,   132,    58,     2,     3,   151,
      30,    25,   120,    98,    98,    38,    39,    40,   164,   165,
     166,   167,   142,   142,   142,   142,    98,    38,    39,    40,
       1,     2,     3,   128,    90,   129,    91,    92,    93,    94,
      38,    39,    40,   130,    42,    43,    44,    24,    25,    45,
     115,    67,   136,    38,    39,    40,    42,    43,    44,   131,
      26,    45,   135,    96,    41,    74,    38,    39,    40,    42,
      43,    44,   172,   173,    45,    60,    61,    41,     1,     2,
       3,     4,    42,    43,    44,   175,   134,    45,    65,    61,
      82,    83,    24,    25,   149,    42,    43,    44,   157,   158,
      45,   124,   125,   168,   169,   138,    25,   159,   161,   160,
     163,   162,   174,    63,   170,    88,   171,   148,    16,   113,
      59,    66,     0,   137
  };

  const short
  parser::yycheck_[] =
  {
      25,    20,    30,    34,    67,     0,     1,    45,    29,    30,
      31,     6,    67,    41,     3,     4,     5,    23,    25,    23,
      39,    10,    49,    12,    13,    14,    15,    58,     4,    67,
      37,    23,    60,    39,    72,    39,    61,    65,    27,   102,
      71,     0,    23,    32,    33,    34,    38,   102,    37,    23,
      39,    78,    79,    80,    28,    86,    94,    38,     3,     4,
       5,     6,     7,     8,   102,    10,     4,    12,    13,    14,
      15,    37,    67,     4,     7,     8,    16,    17,     4,     3,
       4,     5,    27,    28,    27,     7,     8,    32,    33,    34,
     118,    23,    37,     4,    39,    35,    36,   135,   161,   162,
      25,   139,    25,   128,   129,    38,    38,   102,    32,    33,
      34,   174,    26,    37,    26,    39,    38,     7,     8,   138,
      24,    25,    38,   161,   162,     3,     4,     5,   153,   154,
     155,   156,   157,   158,   159,   160,   174,     3,     4,     5,
       6,     7,     8,    37,    10,    37,    12,    13,    14,    15,
       3,     4,     5,    39,    32,    33,    34,    24,    25,    37,
      38,    27,    28,     3,     4,     5,    32,    33,    34,    39,
      37,    37,    24,    39,    27,    28,     3,     4,     5,    32,
      33,    34,   161,   162,    37,    24,    25,    27,     6,     7,
       8,     9,    32,    33,    34,   174,    39,    37,    24,    25,
      32,    33,    24,    25,    39,    32,    33,    34,    18,    19,
      37,    82,    83,   157,   158,    26,    25,    20,    38,    21,
      39,    38,    11,    28,   159,    61,   160,   129,     6,    70,
      26,    32,    -1,   102
  };

  const signed char
  parser::yystos_[] =
  {
       0,     6,     7,     8,     9,    41,    42,    43,    63,    64,
      65,    68,    71,    43,     4,     0,    65,     4,    44,    45,
       4,    66,    67,    37,    24,    25,    37,    46,    23,    39,
      24,    46,    23,    39,    38,    43,    69,    70,     3,     4,
       5,    27,    32,    33,    34,    37,    47,    49,    50,    51,
      52,    53,    59,    61,    62,    84,    53,    60,    38,    70,
      24,    25,     4,    45,    47,    24,    67,    27,    72,     4,
      23,    38,    37,    46,    28,    47,    48,    59,    29,    30,
      31,    52,    32,    33,    26,    72,    38,    47,    60,    47,
      10,    12,    13,    14,    15,    28,    39,    43,    59,    61,
      64,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    25,    69,    72,    38,    59,    83,    23,    28,
      38,    52,    52,    52,    49,    49,    72,    26,    37,    37,
      39,    39,    39,    59,    39,    24,    28,    74,    26,    23,
      38,    47,    53,    54,    55,    56,    57,    58,    58,    39,
      59,    46,    59,    16,    17,    35,    36,    18,    19,    20,
      21,    38,    38,    39,    53,    53,    53,    53,    54,    54,
      55,    56,    75,    75,    11,    75
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
      84,    84
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
       4,     3
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
  "WhileStmt", "FuncRParamList", "FuncCall", YY_NULLPTR
  };
#endif


#if YYDEBUG
  const short
  parser::yyrline_[] =
  {
       0,   127,   127,   132,   135,   141,   142,   145,   148,   156,
     160,   164,   169,   175,   178,   184,   187,   190,   195,   198,
     204,   207,   212,   217,   224,   227,   232,   233,   234,   238,
     241,   245,   251,   254,   259,   266,   269,   274,   279,   284,
     291,   294,   299,   306,   309,   316,   319,   326,   331,   336,
     341,   345,   351,   354,   357,   362,   367,   370,   375,   378,
     383,   386,   392,   396,   402,   407,   411,   415,   422,   425,
     431,   435,   439,   443,   449,   452,   457,   460,   466,   469,
     474,   475,   476,   477,   478,   479,   480,   481,   485,   488,
     493,   499,   505,   508,   513,   518,   521,   526,   531,   534,
     540,   544
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
#line 1897 "src/yacc/Bison.cpp"

#line 549 "src/yacc/sysy.y"


void yy::parser::error(const std::string& msg) {
    std::cerr << "Parse error at line "
              << yylineno << ": "
              << msg << std::endl;
};
