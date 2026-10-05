/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 7 "sysy.y"

#include "AST.hpp"
extern int yylineno;

#line 76 "sysy.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "sysy.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INT_CONST = 3,                  /* INT_CONST  */
  YYSYMBOL_IDENT = 4,                      /* IDENT  */
  YYSYMBOL_FLOAT_CONST = 5,                /* FLOAT_CONST  */
  YYSYMBOL_CONST = 6,                      /* CONST  */
  YYSYMBOL_INT = 7,                        /* INT  */
  YYSYMBOL_FLOAT = 8,                      /* FLOAT  */
  YYSYMBOL_VOID = 9,                       /* VOID  */
  YYSYMBOL_IF = 10,                        /* IF  */
  YYSYMBOL_ELSE = 11,                      /* ELSE  */
  YYSYMBOL_WHILE = 12,                     /* WHILE  */
  YYSYMBOL_BREAK = 13,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 14,                  /* CONTINUE  */
  YYSYMBOL_RETURN = 15,                    /* RETURN  */
  YYSYMBOL_LE = 16,                        /* LE  */
  YYSYMBOL_GE = 17,                        /* GE  */
  YYSYMBOL_EQ = 18,                        /* EQ  */
  YYSYMBOL_NE = 19,                        /* NE  */
  YYSYMBOL_AND = 20,                       /* AND  */
  YYSYMBOL_OR = 21,                        /* OR  */
  YYSYMBOL_LOWER_THAN_ELSE = 22,           /* LOWER_THAN_ELSE  */
  YYSYMBOL_23_ = 23,                       /* ','  */
  YYSYMBOL_24_ = 24,                       /* '='  */
  YYSYMBOL_25_ = 25,                       /* '['  */
  YYSYMBOL_26_ = 26,                       /* ']'  */
  YYSYMBOL_27_ = 27,                       /* '{'  */
  YYSYMBOL_28_ = 28,                       /* '}'  */
  YYSYMBOL_29_ = 29,                       /* '*'  */
  YYSYMBOL_30_ = 30,                       /* '/'  */
  YYSYMBOL_31_ = 31,                       /* '%'  */
  YYSYMBOL_32_ = 32,                       /* '+'  */
  YYSYMBOL_33_ = 33,                       /* '-'  */
  YYSYMBOL_34_ = 34,                       /* '!'  */
  YYSYMBOL_35_ = 35,                       /* '<'  */
  YYSYMBOL_36_ = 36,                       /* '>'  */
  YYSYMBOL_37_ = 37,                       /* '('  */
  YYSYMBOL_38_ = 38,                       /* ')'  */
  YYSYMBOL_39_ = 39,                       /* ';'  */
  YYSYMBOL_YYACCEPT = 40,                  /* $accept  */
  YYSYMBOL_CompUnit = 41,                  /* CompUnit  */
  YYSYMBOL_BType = 42,                     /* BType  */
  YYSYMBOL_VarDefList = 43,                /* VarDefList  */
  YYSYMBOL_VarDef = 44,                    /* VarDef  */
  YYSYMBOL_ArrayList = 45,                 /* ArrayList  */
  YYSYMBOL_InitVal = 46,                   /* InitVal  */
  YYSYMBOL_InitValList = 47,               /* InitValList  */
  YYSYMBOL_MulExp = 48,                    /* MulExp  */
  YYSYMBOL_Number = 49,                    /* Number  */
  YYSYMBOL_UnaryOp = 50,                   /* UnaryOp  */
  YYSYMBOL_UnaryExp = 51,                  /* UnaryExp  */
  YYSYMBOL_AddExp = 52,                    /* AddExp  */
  YYSYMBOL_RelExp = 53,                    /* RelExp  */
  YYSYMBOL_EqExp = 54,                     /* EqExp  */
  YYSYMBOL_LAndExp = 55,                   /* LAndExp  */
  YYSYMBOL_LOrExp = 56,                    /* LOrExp  */
  YYSYMBOL_Cond = 57,                      /* Cond  */
  YYSYMBOL_Exp = 58,                       /* Exp  */
  YYSYMBOL_ConstExp = 59,                  /* ConstExp  */
  YYSYMBOL_LVal = 60,                      /* LVal  */
  YYSYMBOL_PrimaryExp = 61,                /* PrimaryExp  */
  YYSYMBOL_VarDecl = 62,                   /* VarDecl  */
  YYSYMBOL_Decl = 63,                      /* Decl  */
  YYSYMBOL_Item = 64,                      /* Item  */
  YYSYMBOL_ConstDefList = 65,              /* ConstDefList  */
  YYSYMBOL_ConstDef = 66,                  /* ConstDef  */
  YYSYMBOL_ConstDecl = 67,                 /* ConstDecl  */
  YYSYMBOL_FuncParam = 68,                 /* FuncParam  */
  YYSYMBOL_FuncParamList = 69,             /* FuncParamList  */
  YYSYMBOL_FuncDef = 70,                   /* FuncDef  */
  YYSYMBOL_Block = 71,                     /* Block  */
  YYSYMBOL_BlockItemList = 72,             /* BlockItemList  */
  YYSYMBOL_BlockItem = 73,                 /* BlockItem  */
  YYSYMBOL_Stmt = 74,                      /* Stmt  */
  YYSYMBOL_ReturnStmt = 75,                /* ReturnStmt  */
  YYSYMBOL_BreakStmt = 76,                 /* BreakStmt  */
  YYSYMBOL_ContinueStmt = 77,              /* ContinueStmt  */
  YYSYMBOL_ExpStmt = 78,                   /* ExpStmt  */
  YYSYMBOL_AssignStmt = 79,                /* AssignStmt  */
  YYSYMBOL_IfStmt = 80,                    /* IfStmt  */
  YYSYMBOL_WhileStmt = 81,                 /* WhileStmt  */
  YYSYMBOL_FuncRParamList = 82,            /* FuncRParamList  */
  YYSYMBOL_FuncCall = 83                   /* FuncCall  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  14
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   237

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  100
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  175

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   277


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   117,   117,   120,   126,   127,   130,   133,   141,   145,
     149,   154,   160,   163,   169,   172,   175,   180,   183,   189,
     192,   197,   202,   209,   212,   217,   218,   219,   223,   226,
     230,   236,   239,   244,   251,   254,   259,   264,   269,   276,
     279,   284,   291,   294,   301,   304,   311,   316,   321,   326,
     330,   336,   339,   342,   347,   352,   355,   360,   363,   368,
     371,   377,   381,   387,   392,   396,   400,   407,   410,   416,
     420,   424,   428,   434,   437,   442,   445,   451,   454,   459,
     460,   461,   462,   463,   464,   465,   466,   470,   473,   478,
     484,   490,   493,   498,   503,   506,   511,   516,   519,   525,
     529
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INT_CONST", "IDENT",
  "FLOAT_CONST", "CONST", "INT", "FLOAT", "VOID", "IF", "ELSE", "WHILE",
  "BREAK", "CONTINUE", "RETURN", "LE", "GE", "EQ", "NE", "AND", "OR",
  "LOWER_THAN_ELSE", "','", "'='", "'['", "']'", "'{'", "'}'", "'*'",
  "'/'", "'%'", "'+'", "'-'", "'!'", "'<'", "'>'", "'('", "')'", "';'",
  "$accept", "CompUnit", "BType", "VarDefList", "VarDef", "ArrayList",
  "InitVal", "InitValList", "MulExp", "Number", "UnaryOp", "UnaryExp",
  "AddExp", "RelExp", "EqExp", "LAndExp", "LOrExp", "Cond", "Exp",
  "ConstExp", "LVal", "PrimaryExp", "VarDecl", "Decl", "Item",
  "ConstDefList", "ConstDef", "ConstDecl", "FuncParam", "FuncParamList",
  "FuncDef", "Block", "BlockItemList", "BlockItem", "Stmt", "ReturnStmt",
  "BreakStmt", "ContinueStmt", "ExpStmt", "AssignStmt", "IfStmt",
  "WhileStmt", "FuncRParamList", "FuncCall", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-143)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     192,     1,  -143,  -143,    53,   182,    69,  -143,  -143,  -143,
    -143,  -143,    80,    -7,  -143,  -143,   133,   -11,  -143,   161,
      -6,  -143,    34,   160,   173,    67,   171,    82,  -143,   160,
     178,    80,  -143,    64,    89,  -143,    43,  -143,    10,  -143,
     147,  -143,  -143,  -143,   173,  -143,    91,  -143,   173,  -143,
      83,  -143,  -143,  -143,  -143,    83,    84,    64,    62,   160,
     173,   184,  -143,  -143,   160,  -143,    55,  -143,    88,     1,
      64,   122,    93,  -143,  -143,    26,   105,   173,   173,   173,
    -143,   173,   173,  -143,  -143,    64,  -143,   119,  -143,   116,
     135,   130,   144,    75,  -143,  -143,    82,   165,   194,  -143,
    -143,   134,  -143,  -143,  -143,  -143,  -143,  -143,  -143,  -143,
    -143,   191,  -143,  -143,  -143,  -143,    79,   160,  -143,  -143,
    -143,  -143,  -143,    91,    91,  -143,  -143,   173,   173,  -143,
    -143,  -143,   180,  -143,   173,  -143,  -143,   195,   173,  -143,
    -143,    83,    60,   193,   201,   202,   186,   187,  -143,   183,
      93,  -143,   173,   173,   173,   173,   173,   173,   173,   173,
      11,    11,  -143,    83,    83,    83,    83,    60,    60,   193,
     201,   215,  -143,    11,  -143
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     4,     5,     0,     0,     0,    55,    57,     2,
      56,    58,     0,     0,     1,     3,     8,     0,     6,     0,
       0,    59,     0,     0,     0,     0,    10,     0,    54,     0,
       0,     0,    63,     0,     0,    67,     0,    23,    49,    24,
       0,    25,    26,    27,     0,     9,    31,    53,     0,    19,
      47,    14,    52,    28,    30,    48,     0,     0,     0,     0,
       0,     8,     7,    61,     0,    60,     0,    72,    64,     0,
       0,     0,    50,    15,    17,     0,     0,     0,     0,     0,
      29,     0,     0,    12,    70,     0,    11,     0,    62,     0,
       0,     0,     0,     0,    73,    91,     0,     0,    52,    77,
      83,     0,    75,    78,    79,    80,    81,    82,    86,    84,
      85,     0,    68,    71,   100,    97,     0,     0,    16,    51,
      20,    21,    22,    32,    33,    69,    13,     0,     0,    89,
      90,    87,     0,    92,     0,    74,    76,    65,     0,    99,
      18,    34,    39,    42,    44,    46,     0,     0,    88,     0,
      66,    98,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    93,    37,    38,    35,    36,    40,    41,    43,
      45,    94,    96,     0,    95
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -143,  -143,     5,  -143,   200,   -18,   -27,  -143,   132,  -143,
    -143,   -26,   -24,    59,    70,    71,  -143,   101,   -37,   172,
     -62,  -143,  -143,   -55,   226,  -143,   203,  -143,   164,   210,
    -143,   -30,  -143,   136,  -142,  -143,  -143,  -143,  -143,  -143,
    -143,  -143,  -143,  -143
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     5,    34,    17,    18,    26,    45,    75,    46,    47,
      48,    49,    50,   142,   143,   144,   145,   146,    51,    56,
      52,    53,     7,     8,     9,    20,    21,    10,    35,    36,
      11,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   116,    54
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      55,    30,    63,    67,    98,     6,    12,    76,     2,     3,
       6,    99,    27,    74,    37,    38,    39,    31,   171,   172,
      72,    89,    80,    90,    91,    92,    93,    84,    28,    97,
      22,   174,    86,    32,   115,    24,    55,    88,    66,    98,
     113,     2,     3,    41,    42,    43,    99,    71,    44,   117,
      95,   120,   121,   122,   118,   125,   132,    13,    37,    38,
      39,     1,     2,     3,    97,    89,    69,    90,    91,    92,
      93,    96,    33,    16,     2,     3,   152,   153,    37,    38,
      39,    70,    66,    94,    19,    69,    61,    41,    42,    43,
     140,    66,    44,    68,    95,   154,   155,   149,    98,    98,
      85,   151,   138,   141,   141,    57,    96,    41,    42,    43,
      83,    98,    44,   111,   131,    81,    82,   139,    60,   150,
      77,    78,    79,    97,    97,    37,    38,    39,   163,   164,
     165,   166,   141,   141,   141,   141,    97,    37,    38,    39,
       1,     2,     3,   119,    89,   126,    90,    91,    92,    93,
      37,    38,    39,   127,    41,    42,    43,    23,    24,    44,
     114,    66,   135,    37,    38,    39,    41,    42,    43,   129,
      25,    44,   128,    95,    40,    73,    37,    38,    39,    41,
      42,    43,    14,   130,    44,    29,    24,    40,     1,     2,
       3,     4,    41,    42,    43,    59,    60,    44,     1,     2,
       3,     4,    64,    60,   133,    41,    42,    43,    23,    24,
      44,   156,   157,   123,   124,   167,   168,   137,   134,   148,
      24,   158,   162,   159,   160,   161,   173,    62,   169,   147,
     170,    15,    87,   112,    65,    58,     0,   136
};

static const yytype_int16 yycheck[] =
{
      24,    19,    29,    33,    66,     0,     1,    44,     7,     8,
       5,    66,    23,    40,     3,     4,     5,    23,   160,   161,
      38,    10,    48,    12,    13,    14,    15,    57,    39,    66,
      37,   173,    59,    39,    71,    25,    60,    64,    27,   101,
      70,     7,     8,    32,    33,    34,   101,    37,    37,    23,
      39,    77,    78,    79,    28,    85,    93,     4,     3,     4,
       5,     6,     7,     8,   101,    10,    23,    12,    13,    14,
      15,    66,    38,     4,     7,     8,    16,    17,     3,     4,
       5,    38,    27,    28,     4,    23,     4,    32,    33,    34,
     117,    27,    37,     4,    39,    35,    36,   134,   160,   161,
      38,   138,    23,   127,   128,    38,   101,    32,    33,    34,
      26,   173,    37,    25,    39,    32,    33,    38,    25,   137,
      29,    30,    31,   160,   161,     3,     4,     5,   152,   153,
     154,   155,   156,   157,   158,   159,   173,     3,     4,     5,
       6,     7,     8,    38,    10,    26,    12,    13,    14,    15,
       3,     4,     5,    37,    32,    33,    34,    24,    25,    37,
      38,    27,    28,     3,     4,     5,    32,    33,    34,    39,
      37,    37,    37,    39,    27,    28,     3,     4,     5,    32,
      33,    34,     0,    39,    37,    24,    25,    27,     6,     7,
       8,     9,    32,    33,    34,    24,    25,    37,     6,     7,
       8,     9,    24,    25,    39,    32,    33,    34,    24,    25,
      37,    18,    19,    81,    82,   156,   157,    26,    24,    39,
      25,    20,    39,    21,    38,    38,    11,    27,   158,   128,
     159,     5,    60,    69,    31,    25,    -1,   101
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     6,     7,     8,     9,    41,    42,    62,    63,    64,
      67,    70,    42,     4,     0,    64,     4,    43,    44,     4,
      65,    66,    37,    24,    25,    37,    45,    23,    39,    24,
      45,    23,    39,    38,    42,    68,    69,     3,     4,     5,
      27,    32,    33,    34,    37,    46,    48,    49,    50,    51,
      52,    58,    60,    61,    83,    52,    59,    38,    69,    24,
      25,     4,    44,    46,    24,    66,    27,    71,     4,    23,
      38,    37,    45,    28,    46,    47,    58,    29,    30,    31,
      51,    32,    33,    26,    71,    38,    46,    59,    46,    10,
      12,    13,    14,    15,    28,    39,    42,    58,    60,    63,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    25,    68,    71,    38,    58,    82,    23,    28,    38,
      51,    51,    51,    48,    48,    71,    26,    37,    37,    39,
      39,    39,    58,    39,    24,    28,    73,    26,    23,    38,
      46,    52,    53,    54,    55,    56,    57,    57,    39,    58,
      45,    58,    16,    17,    35,    36,    18,    19,    20,    21,
      38,    38,    39,    52,    52,    52,    52,    53,    53,    54,
      55,    74,    74,    11,    74
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    40,    41,    41,    42,    42,    43,    43,    44,    44,
      44,    44,    45,    45,    46,    46,    46,    47,    47,    48,
      48,    48,    48,    49,    49,    50,    50,    50,    51,    51,
      51,    52,    52,    52,    53,    53,    53,    53,    53,    54,
      54,    54,    55,    55,    56,    56,    57,    58,    59,    60,
      60,    61,    61,    61,    62,    63,    63,    64,    64,    65,
      65,    66,    66,    67,    68,    68,    68,    69,    69,    70,
      70,    70,    70,    71,    71,    72,    72,    73,    73,    74,
      74,    74,    74,    74,    74,    74,    74,    75,    75,    76,
      77,    78,    78,    79,    80,    80,    81,    82,    82,    83,
      83
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     3,     1,     3,
       2,     4,     3,     4,     1,     2,     3,     1,     3,     1,
       3,     3,     3,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     1,     3,     1,     1,     1,     1,
       2,     3,     1,     1,     3,     1,     1,     1,     1,     1,
       3,     3,     4,     4,     2,     4,     5,     1,     3,     6,
       5,     6,     5,     2,     3,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     3,     2,
       2,     1,     2,     4,     5,     7,     5,     1,     3,     4,
       3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* CompUnit: Item  */
#line 117 "sysy.y"
            {
            (yyval.compUnit) = new CompUnit((yyvsp[0].ast));
    }
#line 1282 "sysy.tab.c"
    break;

  case 3: /* CompUnit: CompUnit Item  */
#line 120 "sysy.y"
                     {
            (yyvsp[-1].compUnit)->pushBack((yyvsp[0].ast));
            (yyval.compUnit) = (yyvsp[-1].compUnit);
}
#line 1291 "sysy.tab.c"
    break;

  case 4: /* BType: INT  */
#line 126 "sysy.y"
             {(yyval.type) = SY_INT;}
#line 1297 "sysy.tab.c"
    break;

  case 5: /* BType: FLOAT  */
#line 127 "sysy.y"
               {(yyval.type) = SY_FLOAT;}
#line 1303 "sysy.tab.c"
    break;

  case 6: /* VarDefList: VarDef  */
#line 130 "sysy.y"
              {
            (yyval.varDefList) = new VarDefList((yyvsp[0].varDef));
        }
#line 1311 "sysy.tab.c"
    break;

  case 7: /* VarDefList: VarDefList ',' VarDef  */
#line 133 "sysy.y"
                             {
        (yyvsp[-2].varDefList)->pushBack((yyvsp[0].varDef));
        (yyval.varDefList) = (yyvsp[-2].varDefList);
}
#line 1320 "sysy.tab.c"
    break;

  case 8: /* VarDef: IDENT  */
#line 141 "sysy.y"
             {
            (yyval.varDef) = new VarDef((yyvsp[0].str));
            free((yyvsp[0].str));
        }
#line 1329 "sysy.tab.c"
    break;

  case 9: /* VarDef: IDENT '=' InitVal  */
#line 145 "sysy.y"
                         {
            (yyval.varDef) = new VarDef((yyvsp[-2].str),nullptr,(yyvsp[0].initVal));
            free((yyvsp[-2].str));
        }
#line 1338 "sysy.tab.c"
    break;

  case 10: /* VarDef: IDENT ArrayList  */
#line 149 "sysy.y"
                        {
          (yyval.varDef) = new VarDef((yyvsp[-1].str), (yyvsp[0].arrayList), nullptr);
          free((yyvsp[-1].str));
      }
#line 1347 "sysy.tab.c"
    break;

  case 11: /* VarDef: IDENT ArrayList '=' InitVal  */
#line 154 "sysy.y"
                                    {
            (yyval.varDef) = new VarDef((yyvsp[-3].str), (yyvsp[-2].arrayList), (yyvsp[0].initVal));
            free((yyvsp[-3].str));
}
#line 1356 "sysy.tab.c"
    break;

  case 12: /* ArrayList: '[' ConstExp ']'  */
#line 160 "sysy.y"
                        {
            (yyval.arrayList) = new ArrayList((yyvsp[-1].addExp));
        }
#line 1364 "sysy.tab.c"
    break;

  case 13: /* ArrayList: ArrayList '[' ConstExp ']'  */
#line 163 "sysy.y"
                                  {
        (yyvsp[-3].arrayList)->pushBack((yyvsp[-1].addExp));
        (yyval.arrayList) = (yyvsp[-3].arrayList);
}
#line 1373 "sysy.tab.c"
    break;

  case 14: /* InitVal: Exp  */
#line 169 "sysy.y"
           {
            (yyval.initVal) = new InitVal((yyvsp[0].addExp));
        }
#line 1381 "sysy.tab.c"
    break;

  case 15: /* InitVal: '{' '}'  */
#line 172 "sysy.y"
               {
            (yyval.initVal) = new InitVal();
    }
#line 1389 "sysy.tab.c"
    break;

  case 16: /* InitVal: '{' InitValList '}'  */
#line 175 "sysy.y"
                           {
        (yyval.initVal) = new InitVal((yyvsp[-1].initValList));
;}
#line 1397 "sysy.tab.c"
    break;

  case 17: /* InitValList: InitVal  */
#line 180 "sysy.y"
               {
            (yyval.initValList) = new InitValList((yyvsp[0].initVal));
        }
#line 1405 "sysy.tab.c"
    break;

  case 18: /* InitValList: InitValList ',' InitVal  */
#line 183 "sysy.y"
                               {
            (yyvsp[-2].initValList)->pushBack((yyvsp[0].initVal));
            (yyval.initValList) = (yyvsp[-2].initValList);
}
#line 1414 "sysy.tab.c"
    break;

  case 19: /* MulExp: UnaryExp  */
#line 189 "sysy.y"
                {
            (yyval.mulExp) = new MulExp((yyvsp[0].unaryExp));
        }
#line 1422 "sysy.tab.c"
    break;

  case 20: /* MulExp: MulExp '*' UnaryExp  */
#line 192 "sysy.y"
                           {
            (yyvsp[-2].mulExp)->pushBack(SY_MUL);
            (yyvsp[-2].mulExp)->pushBack((yyvsp[0].unaryExp));
            (yyval.mulExp) = (yyvsp[-2].mulExp);
    }
#line 1432 "sysy.tab.c"
    break;

  case 21: /* MulExp: MulExp '/' UnaryExp  */
#line 197 "sysy.y"
                           {
            (yyvsp[-2].mulExp)->pushBack(SY_DIV);
            (yyvsp[-2].mulExp)->pushBack((yyvsp[0].unaryExp));
            (yyval.mulExp) = (yyvsp[-2].mulExp);
    }
#line 1442 "sysy.tab.c"
    break;

  case 22: /* MulExp: MulExp '%' UnaryExp  */
#line 202 "sysy.y"
                           {
            (yyvsp[-2].mulExp)->pushBack(SY_MOD);
            (yyvsp[-2].mulExp)->pushBack((yyvsp[0].unaryExp));
            (yyval.mulExp) = (yyvsp[-2].mulExp);
}
#line 1452 "sysy.tab.c"
    break;

  case 23: /* Number: INT_CONST  */
#line 209 "sysy.y"
                  {
            (yyval.ast) = new ConValue<int>((yyvsp[0].number));
        }
#line 1460 "sysy.tab.c"
    break;

  case 24: /* Number: FLOAT_CONST  */
#line 212 "sysy.y"
                   {
            (yyval.ast) = new ConValue<float>((yyvsp[0].float_number));
}
#line 1468 "sysy.tab.c"
    break;

  case 25: /* UnaryOp: '+'  */
#line 217 "sysy.y"
                { (yyval.type) = SY_ADD; }
#line 1474 "sysy.tab.c"
    break;

  case 26: /* UnaryOp: '-'  */
#line 218 "sysy.y"
                { (yyval.type) = SY_SUB; }
#line 1480 "sysy.tab.c"
    break;

  case 27: /* UnaryOp: '!'  */
#line 219 "sysy.y"
                { (yyval.type) = SY_NOT; }
#line 1486 "sysy.tab.c"
    break;

  case 28: /* UnaryExp: PrimaryExp  */
#line 223 "sysy.y"
                   {
          (yyval.unaryExp) = new UnaryExp((yyvsp[0].ast));
      }
#line 1494 "sysy.tab.c"
    break;

  case 29: /* UnaryExp: UnaryOp UnaryExp  */
#line 226 "sysy.y"
                         {
          (yyvsp[0].unaryExp)->pushFront((yyvsp[-1].type));
          (yyval.unaryExp) = (yyvsp[0].unaryExp);
        }
#line 1503 "sysy.tab.c"
    break;

  case 30: /* UnaryExp: FuncCall  */
#line 230 "sysy.y"
                {
            (yyval.unaryExp) = new UnaryExp((yyvsp[0].funcCall));
    }
#line 1511 "sysy.tab.c"
    break;

  case 31: /* AddExp: MulExp  */
#line 236 "sysy.y"
              {
            (yyval.addExp) = new AddExp((yyvsp[0].mulExp));
        }
#line 1519 "sysy.tab.c"
    break;

  case 32: /* AddExp: AddExp '+' MulExp  */
#line 239 "sysy.y"
                         {
            (yyvsp[-2].addExp)->pushBack(SY_ADD);
            (yyvsp[-2].addExp)->pushBack((yyvsp[0].mulExp));
            (yyval.addExp) = (yyvsp[-2].addExp);
    }
#line 1529 "sysy.tab.c"
    break;

  case 33: /* AddExp: AddExp '-' MulExp  */
#line 244 "sysy.y"
                         {
            (yyvsp[-2].addExp)->pushBack(SY_SUB);
            (yyvsp[-2].addExp)->pushBack((yyvsp[0].mulExp));
            (yyval.addExp) = (yyvsp[-2].addExp);       
}
#line 1539 "sysy.tab.c"
    break;

  case 34: /* RelExp: AddExp  */
#line 251 "sysy.y"
              {
            (yyval.relExp) = new RelExp((yyvsp[0].addExp));
        }
#line 1547 "sysy.tab.c"
    break;

  case 35: /* RelExp: RelExp '<' AddExp  */
#line 254 "sysy.y"
                         {
            (yyvsp[-2].relExp)->pushBack(SY_LESS);
            (yyvsp[-2].relExp)->pushBack((yyvsp[0].addExp));
            (yyval.relExp) = (yyvsp[-2].relExp);
    }
#line 1557 "sysy.tab.c"
    break;

  case 36: /* RelExp: RelExp '>' AddExp  */
#line 259 "sysy.y"
                         {
            (yyvsp[-2].relExp)->pushBack(SY_GREAT);
            (yyvsp[-2].relExp)->pushBack((yyvsp[0].addExp));
            (yyval.relExp) = (yyvsp[-2].relExp);
    }
#line 1567 "sysy.tab.c"
    break;

  case 37: /* RelExp: RelExp LE AddExp  */
#line 264 "sysy.y"
                        {
            (yyvsp[-2].relExp)->pushBack(SY_LESSEQ);
            (yyvsp[-2].relExp)->pushBack((yyvsp[0].addExp));
            (yyval.relExp) = (yyvsp[-2].relExp);
    }
#line 1577 "sysy.tab.c"
    break;

  case 38: /* RelExp: RelExp GE AddExp  */
#line 269 "sysy.y"
                        {
            (yyvsp[-2].relExp)->pushBack(SY_GREATEQ);
            (yyvsp[-2].relExp)->pushBack((yyvsp[0].addExp));
            (yyval.relExp) = (yyvsp[-2].relExp);
}
#line 1587 "sysy.tab.c"
    break;

  case 39: /* EqExp: RelExp  */
#line 276 "sysy.y"
              {
            (yyval.eqExp) = new EqExp((yyvsp[0].relExp));
        }
#line 1595 "sysy.tab.c"
    break;

  case 40: /* EqExp: EqExp EQ RelExp  */
#line 279 "sysy.y"
                       {
            (yyvsp[-2].eqExp)->pushBack(SY_EQ);
            (yyvsp[-2].eqExp)->pushBack((yyvsp[0].relExp));
            (yyval.eqExp) = (yyvsp[-2].eqExp);
    }
#line 1605 "sysy.tab.c"
    break;

  case 41: /* EqExp: EqExp NE RelExp  */
#line 284 "sysy.y"
                       {
            (yyvsp[-2].eqExp)->pushBack(SY_NOTEQ);
            (yyvsp[-2].eqExp)->pushBack((yyvsp[0].relExp));
            (yyval.eqExp) = (yyvsp[-2].eqExp);
}
#line 1615 "sysy.tab.c"
    break;

  case 42: /* LAndExp: EqExp  */
#line 291 "sysy.y"
             {
            (yyval.lAndExp) = new LAndExp((yyvsp[0].eqExp));
        }
#line 1623 "sysy.tab.c"
    break;

  case 43: /* LAndExp: LAndExp AND EqExp  */
#line 294 "sysy.y"
                         {
            (yyvsp[-2].lAndExp)->pushBack(SY_AND);
            (yyvsp[-2].lAndExp)->pushBack((yyvsp[0].eqExp));
            (yyval.lAndExp) = (yyvsp[-2].lAndExp);
}
#line 1633 "sysy.tab.c"
    break;

  case 44: /* LOrExp: LAndExp  */
#line 301 "sysy.y"
               {
            (yyval.lOrExp) = new LOrExp((yyvsp[0].lAndExp));
        }
#line 1641 "sysy.tab.c"
    break;

  case 45: /* LOrExp: LOrExp OR LAndExp  */
#line 304 "sysy.y"
                         {
            (yyvsp[-2].lOrExp)->pushBack(SY_OR);
            (yyvsp[-2].lOrExp)->pushBack((yyvsp[0].lAndExp));
            (yyval.lOrExp) = (yyvsp[-2].lOrExp);
}
#line 1651 "sysy.tab.c"
    break;

  case 46: /* Cond: LOrExp  */
#line 311 "sysy.y"
              {
            (yyval.lOrExp) = (yyvsp[0].lOrExp);
}
#line 1659 "sysy.tab.c"
    break;

  case 47: /* Exp: AddExp  */
#line 316 "sysy.y"
              {
            (yyval.addExp) = (yyvsp[0].addExp);
}
#line 1667 "sysy.tab.c"
    break;

  case 48: /* ConstExp: AddExp  */
#line 321 "sysy.y"
              {
            (yyval.addExp) = (yyvsp[0].addExp);
}
#line 1675 "sysy.tab.c"
    break;

  case 49: /* LVal: IDENT  */
#line 326 "sysy.y"
             {
            (yyval.lval) = new LVal((yyvsp[0].str));
            free((yyvsp[0].str));
        }
#line 1684 "sysy.tab.c"
    break;

  case 50: /* LVal: IDENT ArrayList  */
#line 330 "sysy.y"
                       {
            (yyval.lval) = new LVal((yyvsp[-1].str),(yyvsp[0].arrayList));
            free((yyvsp[-1].str));
}
#line 1693 "sysy.tab.c"
    break;

  case 51: /* PrimaryExp: '(' Exp ')'  */
#line 336 "sysy.y"
                  {
            (yyval.ast) = (yyvsp[-1].addExp);
        }
#line 1701 "sysy.tab.c"
    break;

  case 52: /* PrimaryExp: LVal  */
#line 339 "sysy.y"
             {
            (yyval.ast) = (yyvsp[0].lval);
        }
#line 1709 "sysy.tab.c"
    break;

  case 53: /* PrimaryExp: Number  */
#line 342 "sysy.y"
               {
            (yyval.ast) = (yyvsp[0].ast);
}
#line 1717 "sysy.tab.c"
    break;

  case 54: /* VarDecl: BType VarDefList ';'  */
#line 347 "sysy.y"
                            {
            (yyval.varDecl) = new VarDecl((yyvsp[-2].type),(yyvsp[-1].varDefList));
}
#line 1725 "sysy.tab.c"
    break;

  case 55: /* Decl: VarDecl  */
#line 352 "sysy.y"
               {
            (yyval.ast) = (yyvsp[0].varDecl);
        }
#line 1733 "sysy.tab.c"
    break;

  case 56: /* Decl: ConstDecl  */
#line 355 "sysy.y"
                 {
            (yyval.ast) = (yyvsp[0].constDecl);
}
#line 1741 "sysy.tab.c"
    break;

  case 57: /* Item: Decl  */
#line 360 "sysy.y"
            {
            (yyval.ast) = (yyvsp[0].ast);
        }
#line 1749 "sysy.tab.c"
    break;

  case 58: /* Item: FuncDef  */
#line 363 "sysy.y"
               {
            (yyval.ast) = (yyvsp[0].funcDef);
}
#line 1757 "sysy.tab.c"
    break;

  case 59: /* ConstDefList: ConstDef  */
#line 368 "sysy.y"
                {
            (yyval.constDefList) = new ConstDefList((yyvsp[0].constDef));
        }
#line 1765 "sysy.tab.c"
    break;

  case 60: /* ConstDefList: ConstDefList ',' ConstDef  */
#line 371 "sysy.y"
                                 {
            (yyvsp[-2].constDefList)->pushBack((yyvsp[0].constDef));
            (yyval.constDefList) = (yyvsp[-2].constDefList);
}
#line 1774 "sysy.tab.c"
    break;

  case 61: /* ConstDef: IDENT '=' InitVal  */
#line 377 "sysy.y"
                         {
            (yyval.constDef) = new ConstDef((yyvsp[-2].str),nullptr,(yyvsp[0].initVal));
            free((yyvsp[-2].str));
        }
#line 1783 "sysy.tab.c"
    break;

  case 62: /* ConstDef: IDENT ArrayList '=' InitVal  */
#line 381 "sysy.y"
                                   {
            (yyval.constDef) = new ConstDef((yyvsp[-3].str),(yyvsp[-2].arrayList),(yyvsp[0].initVal));
            free((yyvsp[-3].str));
}
#line 1792 "sysy.tab.c"
    break;

  case 63: /* ConstDecl: CONST BType ConstDefList ';'  */
#line 387 "sysy.y"
                                    {
            (yyval.constDecl) = new ConstDecl((yyvsp[-2].type),(yyvsp[-1].constDefList));
}
#line 1800 "sysy.tab.c"
    break;

  case 64: /* FuncParam: BType IDENT  */
#line 392 "sysy.y"
                   {
            (yyval.funcParam) = new FuncParam((yyvsp[-1].type),(yyvsp[0].str));
            free((yyvsp[0].str));
        }
#line 1809 "sysy.tab.c"
    break;

  case 65: /* FuncParam: BType IDENT '[' ']'  */
#line 396 "sysy.y"
                           {
            (yyval.funcParam) = new FuncParam((yyvsp[-3].type),(yyvsp[-2].str),true);
            free((yyvsp[-2].str));
    }
#line 1818 "sysy.tab.c"
    break;

  case 66: /* FuncParam: BType IDENT '[' ']' ArrayList  */
#line 400 "sysy.y"
                                     {
        (yyval.funcParam) = new FuncParam((yyvsp[-4].type),(yyvsp[-3].str),true,(yyvsp[0].arrayList));
        free((yyvsp[-3].str));

}
#line 1828 "sysy.tab.c"
    break;

  case 67: /* FuncParamList: FuncParam  */
#line 407 "sysy.y"
                 {
            (yyval.funcParamList) = new FuncParamList((yyvsp[0].funcParam));
        }
#line 1836 "sysy.tab.c"
    break;

  case 68: /* FuncParamList: FuncParamList ',' FuncParam  */
#line 410 "sysy.y"
                                       {
            (yyvsp[-2].funcParamList)->pushBack((yyvsp[0].funcParam));
            (yyval.funcParamList) = (yyvsp[-2].funcParamList);
}
#line 1845 "sysy.tab.c"
    break;

  case 69: /* FuncDef: BType IDENT '(' FuncParamList ')' Block  */
#line 416 "sysy.y"
                                               {
            (yyval.funcDef) = new FuncDef((yyvsp[-5].type),(yyvsp[-4].str),(yyvsp[-2].funcParamList),(yyvsp[0].block));
            free((yyvsp[-4].str));
        }
#line 1854 "sysy.tab.c"
    break;

  case 70: /* FuncDef: BType IDENT '(' ')' Block  */
#line 420 "sysy.y"
                                 {
            (yyval.funcDef) = new FuncDef((yyvsp[-4].type),(yyvsp[-3].str),nullptr,(yyvsp[0].block));
            free((yyvsp[-3].str));
        }
#line 1863 "sysy.tab.c"
    break;

  case 71: /* FuncDef: VOID IDENT '(' FuncParamList ')' Block  */
#line 424 "sysy.y"
                                              {
            (yyval.funcDef) = new FuncDef(SY_VOID,(yyvsp[-4].str),(yyvsp[-2].funcParamList),(yyvsp[0].block));
            free((yyvsp[-4].str));
        }
#line 1872 "sysy.tab.c"
    break;

  case 72: /* FuncDef: VOID IDENT '(' ')' Block  */
#line 428 "sysy.y"
                                {
            (yyval.funcDef) = new FuncDef(SY_VOID,(yyvsp[-3].str),nullptr,(yyvsp[0].block));
            free((yyvsp[-3].str));
        }
#line 1881 "sysy.tab.c"
    break;

  case 73: /* Block: '{' '}'  */
#line 434 "sysy.y"
               {
            (yyval.block) = new Block(nullptr);
        }
#line 1889 "sysy.tab.c"
    break;

  case 74: /* Block: '{' BlockItemList '}'  */
#line 437 "sysy.y"
                             {
            (yyval.block) = new Block((yyvsp[-1].blockItemList));
}
#line 1897 "sysy.tab.c"
    break;

  case 75: /* BlockItemList: BlockItem  */
#line 442 "sysy.y"
                   {
            (yyval.blockItemList) = new BlockItemList((yyvsp[0].ast));
        }
#line 1905 "sysy.tab.c"
    break;

  case 76: /* BlockItemList: BlockItemList BlockItem  */
#line 445 "sysy.y"
                               {
        (yyvsp[-1].blockItemList)->pushBack((yyvsp[0].ast));
        (yyval.blockItemList) = (yyvsp[-1].blockItemList);
}
#line 1914 "sysy.tab.c"
    break;

  case 77: /* BlockItem: Decl  */
#line 451 "sysy.y"
            {
            (yyval.ast) = (yyvsp[0].ast);
        }
#line 1922 "sysy.tab.c"
    break;

  case 78: /* BlockItem: Stmt  */
#line 454 "sysy.y"
            {
            (yyval.ast) = (yyvsp[0].ast);
}
#line 1930 "sysy.tab.c"
    break;

  case 79: /* Stmt: ReturnStmt  */
#line 459 "sysy.y"
                     { (yyval.ast) = (yyvsp[0].ast); }
#line 1936 "sysy.tab.c"
    break;

  case 80: /* Stmt: BreakStmt  */
#line 460 "sysy.y"
                     { (yyval.ast) = (yyvsp[0].ast); }
#line 1942 "sysy.tab.c"
    break;

  case 81: /* Stmt: ContinueStmt  */
#line 461 "sysy.y"
                     { (yyval.ast) = (yyvsp[0].ast); }
#line 1948 "sysy.tab.c"
    break;

  case 82: /* Stmt: ExpStmt  */
#line 462 "sysy.y"
                     { (yyval.ast) = (yyvsp[0].ast); }
#line 1954 "sysy.tab.c"
    break;

  case 83: /* Stmt: Block  */
#line 463 "sysy.y"
                     { (yyval.ast) = (yyvsp[0].block); }
#line 1960 "sysy.tab.c"
    break;

  case 84: /* Stmt: IfStmt  */
#line 464 "sysy.y"
                     { (yyval.ast) = (yyvsp[0].ast); }
#line 1966 "sysy.tab.c"
    break;

  case 85: /* Stmt: WhileStmt  */
#line 465 "sysy.y"
                     { (yyval.ast) = (yyvsp[0].ast); }
#line 1972 "sysy.tab.c"
    break;

  case 86: /* Stmt: AssignStmt  */
#line 466 "sysy.y"
                     { (yyval.ast) = (yyvsp[0].ast); }
#line 1978 "sysy.tab.c"
    break;

  case 87: /* ReturnStmt: RETURN ';'  */
#line 470 "sysy.y"
                   {
            (yyval.ast) = new ReturnStmt();
        }
#line 1986 "sysy.tab.c"
    break;

  case 88: /* ReturnStmt: RETURN Exp ';'  */
#line 473 "sysy.y"
                       {
            (yyval.ast) = new ReturnStmt((yyvsp[-1].addExp));
}
#line 1994 "sysy.tab.c"
    break;

  case 89: /* BreakStmt: BREAK ';'  */
#line 478 "sysy.y"
                  {
            (yyval.ast) = new BreakStmt();
    }
#line 2002 "sysy.tab.c"
    break;

  case 90: /* ContinueStmt: CONTINUE ';'  */
#line 484 "sysy.y"
                     {
            (yyval.ast) = new ContinueStmt();
    }
#line 2010 "sysy.tab.c"
    break;

  case 91: /* ExpStmt: ';'  */
#line 490 "sysy.y"
            {
            (yyval.ast) = new ExpStmt(nullptr);
        }
#line 2018 "sysy.tab.c"
    break;

  case 92: /* ExpStmt: Exp ';'  */
#line 493 "sysy.y"
                {
            (yyval.ast) = new ExpStmt((yyvsp[-1].addExp));
}
#line 2026 "sysy.tab.c"
    break;

  case 93: /* AssignStmt: LVal '=' Exp ';'  */
#line 498 "sysy.y"
                        {
            (yyval.ast) = new AssignStmt((yyvsp[-3].lval),(yyvsp[-1].addExp));
}
#line 2034 "sysy.tab.c"
    break;

  case 94: /* IfStmt: IF '(' Cond ')' Stmt  */
#line 503 "sysy.y"
                                                  {
            (yyval.ast) = new IfStmt((yyvsp[-2].lOrExp),(yyvsp[0].ast));
        }
#line 2042 "sysy.tab.c"
    break;

  case 95: /* IfStmt: IF '(' Cond ')' Stmt ELSE Stmt  */
#line 506 "sysy.y"
                                      {
            (yyval.ast) = new IfStmt((yyvsp[-4].lOrExp),(yyvsp[-2].ast),(yyvsp[0].ast));
}
#line 2050 "sysy.tab.c"
    break;

  case 96: /* WhileStmt: WHILE '(' Cond ')' Stmt  */
#line 511 "sysy.y"
                                {
            (yyval.ast) = new WhileStmt((yyvsp[-2].lOrExp), (yyvsp[0].ast));
}
#line 2058 "sysy.tab.c"
    break;

  case 97: /* FuncRParamList: Exp  */
#line 516 "sysy.y"
            {
            (yyval.funcRParamList) = new FuncRParamList((yyvsp[0].addExp));
        }
#line 2066 "sysy.tab.c"
    break;

  case 98: /* FuncRParamList: FuncRParamList ',' Exp  */
#line 519 "sysy.y"
                               {
            (yyvsp[-2].funcRParamList)->pushBack((yyvsp[0].addExp));
            (yyval.funcRParamList) = (yyvsp[-2].funcRParamList);
}
#line 2075 "sysy.tab.c"
    break;

  case 99: /* FuncCall: IDENT '(' FuncRParamList ')'  */
#line 525 "sysy.y"
                                     {
            (yyval.funcCall) = new FuncCall((yyvsp[-3].str),(yyvsp[-1].funcRParamList),yylineno);
            free((yyvsp[-3].str));
        }
#line 2084 "sysy.tab.c"
    break;

  case 100: /* FuncCall: IDENT '(' ')'  */
#line 529 "sysy.y"
                     {
            (yyval.funcCall) = new FuncCall((yyvsp[-2].str),yylineno);
            free((yyvsp[-2].str));
    }
#line 2093 "sysy.tab.c"
    break;


#line 2097 "sysy.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

