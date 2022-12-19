/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "FunSymTable.h"
#include "symbolTableVar.h"
#include "AST.h"
#include "IRcode.h"
#include "Assembly.h"
#include "cal.h"
#include "logic_opreation.h"
#include "while_ops.h"

typedef enum { F, T } boolean;

extern int yylex();
extern int yyparse();
extern FILE* yyin;
boolean FunctionFlag = F;

FILE * IRcode;
//FILE * MIPScode;

int condiotionFlag = 0;
int elseconditionBlockFlag = 0;

void yyerror(const char* s);

int sum = 0;
char curArr[50];
int arrIndex = 0;

char curFun[50];

char scope[50] = "Global";

char Global[50] = "Global";
char Local[50] = "Global";


int semanticCheckPassed = 1;

#line 115 "parser.tab.c"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ID = 258,
    WRITE = 259,
    IF = 260,
    ELSE = 261,
    WHILE = 262,
    RETURN = 263,
    TYPE = 264,
    KEYWORD = 265,
    NUMBER = 266,
    CHAR = 267,
    SINGLE_QOUTE = 268,
    SEMICOLON = 269,
    COMMA = 270,
    EQ = 271,
    OR = 272,
    LSS = 273,
    GTR = 274,
    LHS = 275,
    LEQ = 276,
    GEQ = 277,
    LPAREN = 278,
    RPAREN = 279,
    LBRACE = 280,
    RBRACE = 281,
    LBRACKET = 282,
    RBRACKET = 283,
    ADD = 284,
    SUB = 285,
    MULTIPLY = 286,
    DIV = 287
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 46 "parser.y"

	int number;
	char character;
	char* string;
	struct AST* ast;

#line 207 "parser.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */



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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


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
#define YYFINAL  42
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   259

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  33
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  132
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  239

#define YYUNDEFTOK  2
#define YYMAXUTOK   287


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   115,   115,   122,   125,   128,   129,   130,   131,   132,
     136,   137,   139,   141,   165,   167,   169,   190,   191,   194,
     197,   217,   220,   222,   223,   224,   226,   227,   228,   229,
     230,   231,   233,   235,   239,   244,   250,   251,   263,   282,
     300,   317,   318,   328,   344,   359,   376,   377,   378,   379,
     380,   381,   384,   386,   388,   389,   390,   391,   393,   456,
     511,   512,   513,   514,   515,   516,   518,   520,   522,   523,
     524,   525,   528,   593,   647,   648,   649,   650,   651,   653,
     655,   658,   681,   694,   695,   696,   697,   698,   711,   725,
     734,   736,   750,   761,   771,   772,   786,   797,   807,   812,
     814,   816,   840,   842,   844,   888,   890,   892,   893,   894,
     895,   896,   900,   902,   904,   945,   986,  1027,  1109,  1153,
    1155,  1157,  1218,  1268,  1270,  1272,  1274,  1276,  1278,  1280,
    1282,  1291,  1293
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "WRITE", "IF", "ELSE", "WHILE",
  "RETURN", "TYPE", "KEYWORD", "NUMBER", "CHAR", "SINGLE_QOUTE",
  "SEMICOLON", "COMMA", "EQ", "OR", "LSS", "GTR", "LHS", "LEQ", "GEQ",
  "LPAREN", "RPAREN", "LBRACE", "RBRACE", "LBRACKET", "RBRACKET", "ADD",
  "SUB", "MULTIPLY", "DIV", "$accept", "Program", "DeclList", "Decl",
  "FunDeclList", "FunDecl", "FuncallStmtList", "FuncallStmt",
  "ParamDeclList", "ParamDecl", "Block", "FunBlock", "LogicalOp",
  "ConditionList", "Condition", "if_else_Condition_Stmt", "ConditionStmt",
  "ConditionBlock", "stmt_list_for_if", "stmt_for_if",
  "Write_stmt_for_ifs", "else_ConditionBlock", "stmt_list_for_else",
  "stmt_for_else", "Write_stmt_for_else", "WhileLogicalOp",
  "WhileConditionList", "WhileCondition", "The_while_condition",
  "WhileBinOp", "WhileBlock1", "WhileBlock2", "WhileBlock3", "VarDeclList",
  "VarDecl", "ArrayDeclList", "ArrayDecl", "StmtList", "Stmt",
  "AssignStmtList", "AssignStmt", "WriteStmtList", "WriteStmt", "BinOp",
  "MathStatList", "MathStat", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287
};
# endif

#define YYPACT_NINF (-181)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      60,     6,     9,    54,    23,    59,    18,    68,  -181,    60,
    -181,    63,  -181,    80,  -181,    83,  -181,   102,  -181,  -181,
    -181,    93,  -181,    91,  -181,   107,  -181,    70,    48,   111,
     116,  -181,  -181,  -181,  -181,    70,     7,    87,   130,   138,
      -3,    70,  -181,  -181,   145,  -181,   132,  -181,  -181,  -181,
    -181,    25,  -181,  -181,    18,  -181,    -4,   124,   153,   165,
     146,   111,   141,  -181,  -181,   160,   135,   135,   148,   150,
     142,   151,  -181,   111,   163,  -181,   154,  -181,  -181,  -181,
    -181,   164,  -181,   166,   152,   167,  -181,  -181,  -181,  -181,
    -181,    92,   110,   169,   119,   168,  -181,  -181,  -181,  -181,
     173,   174,   155,   157,  -181,     3,   175,  -181,  -181,  -181,
    -181,  -181,    71,   135,   135,   176,  -181,  -181,    15,   177,
     184,   187,   189,  -181,   185,  -181,  -181,  -181,   161,  -181,
     112,  -181,  -181,   181,  -181,   182,  -181,  -181,   121,   122,
     180,   190,   204,   159,    82,  -181,  -181,  -181,  -181,    16,
     194,  -181,   206,  -181,   207,  -181,  -181,  -181,  -181,  -181,
      71,   208,   198,   197,   211,   162,   212,   191,  -181,  -181,
    -181,  -181,   205,  -181,   209,   192,   195,   114,  -181,   215,
     210,   213,   217,   196,    17,  -181,   199,   219,  -181,  -181,
    -181,  -181,   126,   114,  -181,   223,   214,  -181,   216,   218,
     220,   221,   128,   114,  -181,  -181,   103,  -181,  -181,   222,
     224,   131,   228,  -181,  -181,  -181,   225,   115,  -181,  -181,
    -181,  -181,  -181,  -181,  -181,  -181,   226,   227,    26,   230,
    -181,  -181,  -181,  -181,   231,  -181,   229,   232,  -181
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      10,   132,     0,     0,     0,     0,   131,     0,     2,     4,
       5,    10,   110,    15,     6,    33,   111,    80,     8,     9,
       7,   106,   107,   113,   109,   120,   108,   128,     0,    17,
       0,   123,   124,   125,   126,     0,     0,    41,     0,     0,
       0,     0,     1,     3,     0,    11,     0,    14,    32,    79,
     105,     0,   112,   119,   132,   127,     0,     0,     0,     0,
       0,    17,     0,   130,   121,     0,     0,     0,     0,     0,
       0,     0,   101,    17,     0,   129,     0,   117,   116,   118,
      20,     0,    18,     0,     0,     0,    31,    30,    29,    26,
      27,     0,     0,     0,    36,     0,    78,    77,    74,    75,
       0,     0,     0,     0,    16,     0,     0,    28,    43,    44,
      45,    42,    10,     0,     0,     0,    76,    82,    90,     0,
       0,     0,     0,   122,     0,    47,    57,    48,     0,    46,
      53,    56,    49,   100,    50,   103,    54,    55,     0,     0,
       0,     0,     0,    94,     0,    13,   104,   114,   115,     0,
       0,    52,     0,    99,     0,   102,    38,    39,    40,    37,
      10,     0,     0,     0,     0,    98,     0,     0,    24,    23,
      25,    58,     0,    35,     0,     0,     0,     0,    89,     0,
       0,     0,     0,     0,     0,    22,     0,     0,    83,    84,
      85,    86,     0,     0,    93,     0,     0,    81,     0,     0,
       0,     0,     0,     0,    97,    59,    10,    87,    88,     0,
       0,     0,     0,    61,    71,    62,     0,    60,    67,    70,
      63,    64,    68,    69,    91,    92,     0,     0,     0,     0,
      66,    95,    96,    72,     0,    34,     0,     0,    73
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -181,  -181,   236,  -181,   -10,  -181,   -13,  -181,   -19,  -181,
    -181,  -181,   -58,   -11,  -181,  -181,  -181,    72,   109,  -181,
    -181,  -181,  -181,    20,  -181,  -181,   233,  -181,  -181,  -180,
    -181,  -181,  -181,  -127,    57,  -128,    61,   -16,  -181,   -20,
    -181,   234,  -181,     2,   -25,     4
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,     8,     9,    10,    11,    12,    13,    60,    61,
     145,   167,    91,    14,    15,   115,    68,   128,   129,   130,
     131,   216,   217,   218,   219,   100,    16,    17,    71,   192,
     143,   165,   183,   132,   133,   134,   135,    20,    21,    22,
      23,    24,    25,    35,    26,    27
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      47,    45,    55,    52,    48,    50,   153,   155,    41,    92,
      77,    72,    36,   202,   121,   122,   169,   168,   141,   142,
      73,    64,    28,   211,    74,    31,    32,    33,    34,    29,
     171,    72,    58,    30,    65,    31,    32,    33,    34,    63,
     233,    28,    82,   172,    74,    75,    39,    31,    32,    33,
      34,    54,    30,   234,   102,   138,   139,    18,    41,    56,
      57,    19,    40,     1,     2,     3,    18,     4,    42,     5,
      19,     6,    44,    54,     1,   124,     3,    37,   221,   220,
       5,     6,     6,    46,    38,     1,     2,   137,     3,     4,
      66,   166,   136,     6,    51,   108,     1,     2,    67,   126,
       4,   127,   125,   109,     6,   137,     1,   212,     3,     4,
     136,     2,     5,   110,     6,     1,   124,   126,     1,   212,
      59,   111,   113,     6,   156,   158,     6,    62,   170,   200,
     114,   209,   157,   159,   226,   137,    69,   201,    78,   210,
     136,    70,   227,   188,   189,   190,   191,   126,    76,   127,
     125,    85,    86,    87,    88,    29,    89,    90,    95,    96,
      97,    98,   163,   164,    99,   181,   182,    79,    80,    83,
      81,    84,    93,    94,   103,   101,   117,    73,   104,   119,
     106,   223,   105,   107,   116,   120,   222,   150,   149,   123,
     152,   154,   223,   214,   112,   215,   213,   222,   146,   118,
     140,   147,   144,   148,   214,   160,   161,   162,   173,   174,
     175,   177,   178,   179,   180,   184,   186,   185,   193,    74,
     196,   187,   197,    72,   194,   199,   203,   198,   204,   195,
     205,   228,   176,     0,   207,   208,   224,   230,   225,   151,
     231,   232,   236,   206,   235,    43,   238,     0,     0,     0,
      49,   229,     0,     0,     0,     0,     0,   237,     0,    53
};

static const yytype_int16 yycheck[] =
{
      13,    11,    27,    23,    15,    21,   133,   135,     6,    67,
      14,    14,     3,   193,    11,    12,   144,   144,     3,     4,
      23,    14,    16,   203,    27,    29,    30,    31,    32,    23,
      14,    14,    28,    27,    27,    29,    30,    31,    32,    35,
      14,    16,    61,    27,    27,    41,    23,    29,    30,    31,
      32,     3,    27,    27,    73,   113,   114,     0,    56,    11,
      12,     0,     3,     3,     4,     5,     9,     7,     0,     9,
       9,    11,     9,     3,     3,     4,     5,    23,   206,   206,
       9,    11,    11,     3,    30,     3,     4,   112,     5,     7,
       3,     9,   112,    11,     3,     3,     3,     4,    11,   112,
       7,   112,   112,    11,    11,   130,     3,     4,     5,     7,
     130,     4,     9,     3,    11,     3,     4,   130,     3,     4,
       9,    11,     3,    11,     3,     3,    11,    11,   144,     3,
      11,     3,    11,    11,     3,   160,     6,    11,    14,    11,
     160,     3,    11,    29,    30,    31,    32,   160,     3,   160,
     160,    16,    17,    18,    19,    23,    21,    22,    16,    17,
      18,    19,     3,     4,    22,     3,     4,    14,     3,    28,
      24,    11,    24,    23,    11,    24,     3,    23,    14,    24,
      28,   206,    16,    16,    16,    28,   206,    26,     3,    14,
       9,     9,   217,   206,    25,   206,   206,   217,    14,    25,
      24,    14,    25,    14,   217,    25,    16,     3,    14,     3,
       3,     3,    14,    16,     3,     3,    11,    26,     3,    27,
       3,    26,    26,    14,    14,     6,     3,    28,    14,    16,
      14,     3,   160,    -1,    14,    14,    14,   217,    14,   130,
      14,    14,    11,    25,    14,     9,    14,    -1,    -1,    -1,
      17,    26,    -1,    -1,    -1,    -1,    -1,    28,    -1,    25
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     7,     9,    11,    34,    35,    36,
      37,    38,    39,    40,    46,    47,    59,    60,    67,    69,
      70,    71,    72,    73,    74,    75,    77,    78,    16,    23,
      27,    29,    30,    31,    32,    76,     3,    23,    30,    23,
       3,    76,     0,    35,     9,    37,     3,    39,    46,    59,
      70,     3,    72,    74,     3,    77,    11,    12,    78,     9,
      41,    42,    11,    78,    14,    27,     3,    11,    49,     6,
       3,    61,    14,    23,    27,    78,     3,    14,    14,    14,
       3,    24,    41,    28,    11,    16,    17,    18,    19,    21,
      22,    45,    45,    24,    23,    16,    17,    18,    19,    22,
      58,    24,    41,    11,    14,    16,    28,    16,     3,    11,
       3,    11,    25,     3,    11,    48,    16,     3,    25,    24,
      28,    11,    12,    14,     4,    37,    39,    46,    50,    51,
      52,    53,    66,    67,    68,    69,    72,    77,    45,    45,
      24,     3,     4,    63,    25,    43,    14,    14,    14,     3,
      26,    51,     9,    66,     9,    68,     3,    11,     3,    11,
      25,    16,     3,     3,     4,    64,     9,    44,    66,    68,
      70,    14,    27,    14,     3,     3,    50,     3,    14,    16,
       3,     3,     4,    65,     3,    26,    11,    26,    29,    30,
      31,    32,    62,     3,    14,    16,     3,    26,    28,     6,
       3,    11,    62,     3,    14,    14,    25,    14,    14,     3,
      11,    62,     4,    37,    39,    46,    54,    55,    56,    57,
      66,    68,    72,    77,    14,    14,     3,    11,     3,    26,
      56,    14,    14,    14,    27,    14,    11,    28,    14
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    33,    34,    35,    35,    36,    36,    36,    36,    36,
      37,    37,    37,    38,    39,    39,    40,    41,    41,    41,
      42,    42,    43,    44,    44,    44,    45,    45,    45,    45,
      45,    45,    46,    46,    47,    47,    48,    48,    48,    48,
      48,    49,    49,    49,    49,    49,    50,    50,    50,    50,
      50,    50,    51,    51,    52,    52,    52,    52,    53,    53,
      54,    54,    54,    54,    54,    54,    55,    55,    56,    56,
      56,    56,    57,    57,    58,    58,    58,    58,    58,    59,
      59,    60,    61,    62,    62,    62,    62,    63,    63,    63,
      63,    64,    64,    64,    64,    65,    65,    65,    65,    66,
      66,    67,    68,    68,    69,    70,    70,    71,    71,    71,
      71,    71,    72,    72,    73,    73,    73,    73,    73,    74,
      74,    75,    75,    76,    76,    76,    76,    77,    77,    78,
      78,    78,    78
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       0,     2,     1,     6,     2,     1,     5,     0,     2,     1,
       2,     0,     3,     1,     1,     1,     1,     1,     2,     1,
       1,     1,     2,     1,    14,     8,     0,     3,     3,     3,
       3,     0,     3,     3,     3,     3,     1,     1,     1,     1,
       1,     0,     2,     1,     1,     1,     1,     1,     3,     6,
       1,     1,     1,     1,     1,     0,     2,     1,     1,     1,
       1,     1,     3,     6,     1,     1,     2,     1,     1,     2,
       1,     9,     3,     1,     1,     1,     1,     6,     6,     3,
       0,     6,     6,     3,     0,     6,     6,     3,     0,     2,
       1,     3,     2,     1,     6,     2,     1,     1,     1,     1,
       1,     1,     2,     1,     7,     7,     4,     4,     4,     2,
       1,     3,     6,     1,     1,     1,     1,     2,     1,     3,
       3,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
    case 3: /* ID  */
#line 84 "parser.y"
         { fprintf(yyoutput, "%s", ((*yyvaluep).string)); }
#line 949 "parser.tab.c"
        break;

    case 11: /* NUMBER  */
#line 85 "parser.y"
         { fprintf(yyoutput, "%d", ((*yyvaluep).string)); }
#line 955 "parser.tab.c"
        break;

    case 12: /* CHAR  */
#line 86 "parser.y"
         { fprintf(yyoutput, "%s", ((*yyvaluep).string)); }
#line 961 "parser.tab.c"
        break;

      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
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

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
  case 2:
#line 115 "parser.y"
                   { (yyval.ast) = (yyvsp[0].ast);
					 printf("\n--- Abstract Syntax Tree ---\n\n");
					 printAST((yyval.ast),0);
					}
#line 1580 "parser.tab.c"
    break;

  case 3:
#line 122 "parser.y"
                                { (yyvsp[-1].ast)->left = (yyvsp[0].ast);
							  (yyval.ast) = (yyvsp[-1].ast);
							}
#line 1588 "parser.tab.c"
    break;

  case 4:
#line 125 "parser.y"
                { (yyval.ast) = (yyvsp[0].ast); }
#line 1594 "parser.tab.c"
    break;

  case 11:
#line 137 "parser.y"
                                              {(yyvsp[-1].ast)->left = (yyvsp[0].ast);
							  (yyval.ast) = (yyvsp[-1].ast);}
#line 1601 "parser.tab.c"
    break;

  case 12:
#line 139 "parser.y"
                                  {(yyval.ast) = (yyvsp[0].ast);}
#line 1607 "parser.tab.c"
    break;

  case 13:
#line 141 "parser.y"
                                                          {printf("\nRECOGNIZED RULE: Function\n");
							
								char id1[50];
								char type[50];
								strcpy(id1, (yyvsp[-4].string));
								strcpy(type, (yyvsp[-5].string));
								strcpy(scope, Local);
								int inSymTab = found((yyvsp[-4].string), scope);
								
								if (inSymTab == 0){
									add_Item_to_var_sym_table(id1, "Fun", (yyvsp[-5].string), 0, scope);

									add_Item_to_func_sym_table(id1, "Fun", &type, 0, &id1, &scope);
								}
								else{					
									printf("SEMANTIC ERROR: Fun %s is already in the symbol table", (yyvsp[-4].string));
								}
								showVarSymTable();
								showFuncSymTable();

								(yyval.ast) = AST_Type("Fun", (yyvsp[-5].string), (yyvsp[-4].string));
								
			}
#line 1635 "parser.tab.c"
    break;

  case 14:
#line 165 "parser.y"
                                             {(yyvsp[-1].ast)->left = (yyvsp[0].ast);
							  (yyval.ast) = (yyvsp[-1].ast);}
#line 1642 "parser.tab.c"
    break;

  case 15:
#line 167 "parser.y"
                                      {(yyval.ast) = (yyvsp[0].ast);}
#line 1648 "parser.tab.c"
    break;

  case 16:
#line 169 "parser.y"
                                                      {printf("\nRECOGNIZED RULE: Function Call\n");
							
								char id1[50];
								strcpy(id1, (yyvsp[-4].string));
								strcpy(scope, Local);
								int inSymTab = found(id1, scope);
								
								if (inSymTab == 0){
									printf("SEMANTIC ERROR: Fun %s is not in the symbol table", (yyvsp[-4].string));
								}
								else{					
									

								}

								showFuncSymTable();

								(yyval.ast) = AST_Type("FunCall", (yyvsp[-4].string), "NULL");
								
			}
#line 1673 "parser.tab.c"
    break;

  case 18:
#line 191 "parser.y"
                                                  {(yyvsp[-1].ast)->left = (yyvsp[0].ast);
							  (yyval.ast) = (yyvsp[-1].ast);}
#line 1680 "parser.tab.c"
    break;

  case 19:
#line 194 "parser.y"
                                    {(yyval.ast) = (yyvsp[0].ast);}
#line 1686 "parser.tab.c"
    break;

  case 20:
#line 197 "parser.y"
                   {printf("\n RECOGNIZED RULE: Variable declaration\n");						
									char id1[50];
									symTabAccess();
									int inSymTab = found((yyvsp[0].string), scope);

									
									if (inSymTab == 0) 
										add_Item_to_var_sym_table((yyvsp[0].string), "Var", (yyvsp[-1].string), 0, scope);
									else						
										printf("SEMANTIC ERROR: Var %s is already in the symbol table", (yyvsp[0].string));

									showVarSymTable();
									
									sprintf(id1, "%s", (yyvsp[0].string));
									int numid = getItemID(id1, scope);   // ADDING TO IR CODE T0 = X
									emitConstantIntAssignment ((yyvsp[0].string), numid);								

									
								    (yyval.ast) = AST_Type("Type",(yyvsp[-1].string),(yyvsp[0].string));  	// SEMANTIC ACTIONS
								}
#line 1711 "parser.tab.c"
    break;

  case 32:
#line 233 "parser.y"
                                        {(yyvsp[-1].ast)->left = (yyvsp[0].ast);
							  (yyval.ast) = (yyvsp[-1].ast);}
#line 1718 "parser.tab.c"
    break;

  case 33:
#line 235 "parser.y"
                                    {(yyval.ast) = (yyvsp[0].ast);}
#line 1724 "parser.tab.c"
    break;

  case 34:
#line 239 "parser.y"
                                                                                                                                           {
				(yyval.ast) = AST_Type("IF-ELSE", (yyvsp[-11].string), (yyvsp[-4].string));
			
			}
#line 1733 "parser.tab.c"
    break;

  case 35:
#line 244 "parser.y"
                                                                                              { 
				(yyval.ast) = AST_Type("IF", (yyvsp[-5].ast), (yyvsp[-2].ast));
			
			}
#line 1742 "parser.tab.c"
    break;

  case 37:
#line 251 "parser.y"
                                          {
			int logic = runLogic((yyvsp[-2].string), (yyvsp[-1].ast), (yyvsp[0].string));
			printf("LOGIC: %d \n", logic);
			if (logic == 1){
				elseconditionBlockFlag = 0;
				condiotionFlag = 1;
			}
			else{
				condiotionFlag = 0;
				elseconditionBlockFlag = 1;
			}
		}
#line 1759 "parser.tab.c"
    break;

  case 38:
#line 263 "parser.y"
                                  {
			int id1 = getItemID((yyvsp[-2].string), scope);
			int id2 = getItemID((yyvsp[0].string), scope);
			char idVal1[50];
			char idVal2[50];
			sprintf(idVal1, "%d", id1);
			sprintf(idVal2, "%d", id2);
			int logic = runLogic(idVal1, (yyvsp[-1].ast), idVal2);
			printf("LOGIC: %d \n", logic);
			if (logic == 1){
				elseconditionBlockFlag = 0;
				condiotionFlag = 1;
			}
			else{
				condiotionFlag = 0;
				elseconditionBlockFlag = 1;

			}
		}
#line 1783 "parser.tab.c"
    break;

  case 39:
#line 282 "parser.y"
                                      {
			char ID[50];
			strcpy(ID, (yyvsp[-2].string));
			int id1 = getVal(ID, scope);
			char idVal1[50];
			sprintf(idVal1, "%d", id1);
			int logic = runLogic(idVal1, (yyvsp[-1].ast), (yyvsp[0].string));
			printf("LOGIC: %d \n", logic);
			if (logic == 1){
				elseconditionBlockFlag = 0;
				condiotionFlag = 1;
			}
			else{
				condiotionFlag = 0;
				elseconditionBlockFlag = 1;
			}
			printf("%d \n", elseconditionBlockFlag);
		}
#line 1806 "parser.tab.c"
    break;

  case 40:
#line 300 "parser.y"
                                      {
			int id2 = getVal((yyvsp[0].string), scope);
			char idVal2[50];
			sprintf(idVal2, "%d", id2);
			int logic = runLogic((yyvsp[-2].string), (yyvsp[-1].ast), idVal2);
			printf("LOGIC: %d \n", logic);
			if (logic == 1){
				elseconditionBlockFlag = 0;
				condiotionFlag = 1;
			}
			else{

				condiotionFlag = 0;
				elseconditionBlockFlag = 1;
			}
		}
#line 1827 "parser.tab.c"
    break;

  case 42:
#line 318 "parser.y"
                                          {
			int logic = runLogic((yyvsp[-2].string), (yyvsp[-1].ast), (yyvsp[0].string));
			printf("LOGIC: %d \n", logic);
			if (logic == 1){
				condiotionFlag = 1;
			}
			else{
				condiotionFlag = 0;
			}
		}
#line 1842 "parser.tab.c"
    break;

  case 43:
#line 328 "parser.y"
                                  {
			int id1 = getItemID((yyvsp[-2].string), scope);
			int id2 = getItemID((yyvsp[0].string), scope);
			char idVal1[50];
			char idVal2[50];
			sprintf(idVal1, "%d", id1);
			sprintf(idVal2, "%d", id2);
			int logic = runLogic(idVal1, (yyvsp[-1].ast), idVal2);
			printf("LOGIC: %d \n", logic);
			if (logic == 1){
				condiotionFlag = 1;
			}
			else{
				condiotionFlag = 0;
			}
		}
#line 1863 "parser.tab.c"
    break;

  case 44:
#line 344 "parser.y"
                                      {
			char ID[50];
			strcpy(ID, (yyvsp[-2].string));
			int id1 = getVal(ID, scope);
			char idVal1[50];
			sprintf(idVal1, "%d", id1);
			int logic = runLogic(idVal1, (yyvsp[-1].ast), (yyvsp[0].string));
			printf("LOGIC: %d \n", logic);
			if (logic == 1){
				condiotionFlag = 1;
			}
			else{
				condiotionFlag = 0;
			}
		}
#line 1883 "parser.tab.c"
    break;

  case 45:
#line 359 "parser.y"
                                      {
			int id2 = getVal((yyvsp[0].string), scope);
			char idVal2[50];
			sprintf(idVal2, "%d", id2);
			int logic = runLogic((yyvsp[-2].string), (yyvsp[-1].ast), idVal2);
			printf("LOGIC: %d \n", logic);
			if (logic == 1){
				condiotionFlag = 1;
			}
			else{
				condiotionFlag = 0;
			}
		}
#line 1901 "parser.tab.c"
    break;

  case 52:
#line 384 "parser.y"
                                               { (yyvsp[-1].ast)->left = (yyvsp[0].ast);
					(yyval.ast) = (yyvsp[-1].ast);}
#line 1908 "parser.tab.c"
    break;

  case 53:
#line 386 "parser.y"
                                              { (yyval.ast) = (yyvsp[0].ast); }
#line 1914 "parser.tab.c"
    break;

  case 54:
#line 388 "parser.y"
                            {printf("AssignStmt\n");}
#line 1920 "parser.tab.c"
    break;

  case 55:
#line 389 "parser.y"
                       {printf("MathStat\n");}
#line 1926 "parser.tab.c"
    break;

  case 56:
#line 390 "parser.y"
                             {printf("WriteStmt\n");}
#line 1932 "parser.tab.c"
    break;

  case 57:
#line 391 "parser.y"
                          {printf("FuncallStmt\n");}
#line 1938 "parser.tab.c"
    break;

  case 58:
#line 393 "parser.y"
                                      { printf("\nRECOGNIZED RULE: WRITE STATMENT\n");
					if (condiotionFlag == 1){
						condiotionFlag = 0;
						char id1[50];
						sprintf(id1, "%s", (yyvsp[-1].string));
						char *tyoe = getVariableType(id1, scope);
						char type[50];
						sprintf(type, "%s", tyoe);
						printf("Type: %s\n", type);
						(yyval.ast) = AST_Write("write",type, (yyvsp[-1].string));
						
						int numid = getItemID(id1, scope);


						// SEMANTIC ANALYSIS ACTIONS   
						if (found((yyvsp[-1].string), scope) != 1) {	 
							printf("SEMANTIC ERROR: Variable %s has NOT been declared in scope %s \n", (yyvsp[-1].string), scope);
							semanticCheckPassed = 0;
						}

						if (semanticCheckPassed == 1) {
							printf("\n\nRule is semantically correct!\n\n");
							// emitMIPSConstantIntAssignment(id1, id2, numid);
							if (strcmp(type, "int") == 0){
								int val = getVal((yyvsp[-1].string), scope);
								char valStr[50];
								sprintf(valStr, "%d", val);
								emitMIPSConstantIntAssignment(valStr, numid);
								emitMIPSWriteId(numid);
							}
							else if(strcmp(type, "float") == 0){
								double val = getFloatVal((yyvsp[-1].string), scope);
								char valStr[50];
								sprintf(valStr, "%f", val);
								char pythonCommand[50];
								sprintf(pythonCommand, "python3 WriteFloatsMips.py %s\n", valStr);
								char command[50];
								strcpy(command, pythonCommand);
							
								system(command);
								sleep(0.5);
								emitfloatAssignment();

							}
							else if(strcmp(type, "char") == 0){
								char *val = getCharVal((yyvsp[-1].string), scope);
								char valStr[50];
								sprintf(valStr, "%s", val);
								char pythonCommand[50];
								sprintf(pythonCommand, "python3 writeCharToMips.py %s\n", valStr);
								char command[50];
								strcpy(command, pythonCommand);
								system(command);
								sleep(0.5);
								emitMIPSCharAssignment();
							}
				
							
						}
					}else{
						condiotionFlag = 0;
					}
				}
#line 2006 "parser.tab.c"
    break;

  case 59:
#line 456 "parser.y"
                                                             { printf("\nRECOGNIZED RULE: WRITE STATMENT FOR ARRAY\n");
					if (condiotionFlag == 1)
					{
						condiotionFlag = 0;
						char id1[50];
						sprintf(id1, "%s[%s]", (yyvsp[-4].string), (yyvsp[-2].string));
						char *tyoe = getVariableType(id1, scope);
						char type[50];
						sprintf(type, "%s", tyoe);

						(yyval.ast) = AST_Write("write",type, (yyvsp[-4].string));
						
						int numid = getItemID(id1, scope);
						if (found(id1, scope) != 1) {	 
							printf("SEMANTIC ERROR: Variable %s has NOT been declared in scope %s \n", (yyvsp[-4].string), scope);
							semanticCheckPassed = 0;
						}

						if (semanticCheckPassed == 1) {
							printf("\n\nRule is semantically correct!\n\n");
							if (strcmp(type, "int") == 0){
								int val = getVal(id1, scope);
								// emitWriteInt(id1, numid);
								// emitMIPSWriteInt(id1, numid);	// EMITS TO IR AND MIPS

								char valStr[50];
								sprintf(valStr, "%d", val);
								emitMIPSConstantIntAssignment(valStr, numid);	// EMITS TO IR AND MIPS

							} else if (strcmp(type, "float") == 0){
								double val = getFloatVal(id1, scope);
								char valStr[50];
								sprintf(valStr, "%lf", val);
								emitMIPSConstantIntAssignment(valStr, numid);

							} else if (strcmp(type, "char") == 0){
								char *val = getCharVal(id1, scope);
								char valStr[50];
								sprintf(valStr, "%s", val);
								emitMIPSConstantIntAssignment(valStr, numid); 				

							}
							emitMIPSWriteId(numid);
						}
					} 
					else
					{
						condiotionFlag = 0;
						elseconditionBlockFlag = 0;
					}

		}
#line 2063 "parser.tab.c"
    break;

  case 66:
#line 518 "parser.y"
                                                     {(yyvsp[-1].ast)->left = (yyvsp[0].ast);
							  (yyval.ast) = (yyvsp[-1].ast);}
#line 2070 "parser.tab.c"
    break;

  case 67:
#line 520 "parser.y"
                                                {(yyval.ast) = (yyvsp[0].ast);}
#line 2076 "parser.tab.c"
    break;

  case 68:
#line 522 "parser.y"
                              {printf("AssignStmt\n");}
#line 2082 "parser.tab.c"
    break;

  case 69:
#line 523 "parser.y"
                       {printf("MathStat\n");}
#line 2088 "parser.tab.c"
    break;

  case 70:
#line 524 "parser.y"
                              {printf("WriteStmt\n");}
#line 2094 "parser.tab.c"
    break;

  case 71:
#line 525 "parser.y"
                          {printf("FuncallStmt\n");}
#line 2100 "parser.tab.c"
    break;

  case 72:
#line 528 "parser.y"
                                       { printf("\nRECOGNIZED RULE: WRITE STATMENT\n");
					printf("%d \n", elseconditionBlockFlag);
					if (elseconditionBlockFlag == 1){
						elseconditionBlockFlag = 0;
						char id1[50];
						sprintf(id1, "%s", (yyvsp[-1].string));
						char *tyoe = getVariableType(id1, scope);
						char type[50];
						sprintf(type, "%s", tyoe);
						printf("Type: %s\n", type);
						(yyval.ast) = AST_Write("write",type, (yyvsp[-1].string));
						
						int numid = getItemID(id1, scope);


						// SEMANTIC ANALYSIS ACTIONS   
						if (found((yyvsp[-1].string), scope) != 1) {	 
							printf("SEMANTIC ERROR: Variable %s has NOT been declared in scope %s \n", (yyvsp[-1].string), scope);
							semanticCheckPassed = 0;
						}

						if (semanticCheckPassed == 1) {
							printf("\n\nRule is semantically correct!\n\n");
							// emitMIPSConstantIntAssignment(id1, id2, numid);
							if (strcmp(type, "int") == 0){
								int val = getVal((yyvsp[-1].string), scope);
								char valStr[50];
								sprintf(valStr, "%d", val);
								emitMIPSConstantIntAssignment(valStr, numid);
								emitMIPSWriteId(numid);
							}
							else if(strcmp(type, "float") == 0){
								double val = getFloatVal((yyvsp[-1].string), scope);
								char valStr[50];
								sprintf(valStr, "%f", val);
								char pythonCommand[50];
								sprintf(pythonCommand, "python3 WriteFloatsMips.py %s\n", valStr);
								char command[50];
								strcpy(command, pythonCommand);
							
								system(command);
								sleep(0.5);
								emitfloatAssignment();

							}
							else if(strcmp(type, "char") == 0){
								char *val = getCharVal((yyvsp[-1].string), scope);
								char valStr[50];
								sprintf(valStr, "%s", val);
								char pythonCommand[50];
								sprintf(pythonCommand, "python3 writeCharToMips.py %s\n", valStr);
								char command[50];
								strcpy(command, pythonCommand);
								system(command);
								sleep(0.5);
								emitMIPSCharAssignment();
							}
				
							
						}
					}else{
						condiotionFlag = 0;
						elseconditionBlockFlag = 0;
					}
				}
#line 2170 "parser.tab.c"
    break;

  case 73:
#line 593 "parser.y"
                                                             { printf("\nRECOGNIZED RULE: WRITE STATMENT FOR ARRAY\n");
					if (elseconditionBlockFlag == 1)
					{
						elseconditionBlockFlag = 0;
						char id1[50];
						sprintf(id1, "%s[%s]", (yyvsp[-4].string), (yyvsp[-2].string));
						char *tyoe = getVariableType(id1, scope);
						char type[50];
						sprintf(type, "%s", tyoe);

						(yyval.ast) = AST_Write("write",type, (yyvsp[-4].string));
						
						int numid = getItemID(id1, scope);
						if (found(id1, scope) != 1) {	 
							printf("SEMANTIC ERROR: Variable %s has NOT been declared in scope %s \n", (yyvsp[-4].string), scope);
							semanticCheckPassed = 0;
						}

						if (semanticCheckPassed == 1) {
							printf("\n\nRule is semantically correct!\n\n");
							if (strcmp(type, "int") == 0){
								int val = getVal(id1, scope);
								// emitWriteInt(id1, numid);
								// emitMIPSWriteInt(id1, numid);	// EMITS TO IR AND MIPS

								char valStr[50];
								sprintf(valStr, "%d", val);
								emitMIPSConstantIntAssignment(valStr, numid);	// EMITS TO IR AND MIPS

							} else if (strcmp(type, "float") == 0){
								double val = getFloatVal(id1, scope);
								char valStr[50];
								sprintf(valStr, "%lf", val);
								emitMIPSConstantIntAssignment(valStr, numid);

							} else if (strcmp(type, "char") == 0){
								char *val = getCharVal(id1, scope);
								char valStr[50];
								sprintf(valStr, "%s", val);
								emitMIPSConstantIntAssignment(valStr, numid); 				

							}
							emitMIPSWriteId(numid);
						}
					} 
					else
					{
						condiotionFlag = 0;
						elseconditionBlockFlag = 0;
					}

		}
#line 2227 "parser.tab.c"
    break;

  case 74:
#line 647 "parser.y"
                   {}
#line 2233 "parser.tab.c"
    break;

  case 75:
#line 648 "parser.y"
                             {}
#line 2239 "parser.tab.c"
    break;

  case 76:
#line 649 "parser.y"
                               {}
#line 2245 "parser.tab.c"
    break;

  case 77:
#line 650 "parser.y"
                             {}
#line 2251 "parser.tab.c"
    break;

  case 78:
#line 651 "parser.y"
                            {}
#line 2257 "parser.tab.c"
    break;

  case 79:
#line 653 "parser.y"
                                                          {(yyvsp[-1].ast)->left = (yyvsp[0].ast);
							  (yyval.ast) = (yyvsp[-1].ast);}
#line 2264 "parser.tab.c"
    break;

  case 80:
#line 655 "parser.y"
                                         {(yyval.ast) = (yyvsp[0].ast);}
#line 2270 "parser.tab.c"
    break;

  case 81:
#line 658 "parser.y"
                                                                                                          {printf("\n RECOGNIZED RULE: While Condition\n");
					(yyval.ast) = AST_assignment("while","cond", "block");
					FILE * WhileFile;
					char * line = NULL;
					size_t len = 0;
					ssize_t read;

					sleep(0.3);
					char command[50];
					sprintf(command, "python3 ./WhileOps/fill_json.py ");
					system(command);

					WhileFile = fopen("./WhileOps/resultes/resultes.txt", "r");
					if (WhileFile == NULL)
						exit(EXIT_FAILURE);

					while ((read = getline(&line, &len, WhileFile)) != -1) {
						printf("%s", line);
						emitConstantWhileAssignment(line);
						emitMIPSWhileAssignment(line);
					}
					fclose(WhileFile);
					}
#line 2298 "parser.tab.c"
    break;

  case 82:
#line 681 "parser.y"
                                          {
					char ids[50];
					int id1Val = getVal((yyvsp[-2].string), scope);
					int id2Val = getVal((yyvsp[0].string), scope);
					sprintf(ids, "\n%s=%d\n%s=%d\n", (yyvsp[-2].string), id1Val, (yyvsp[0].string), id2Val);
					write_var_to_string(ids);
					char string[50];
					sprintf(string, "%s%s%s", (yyvsp[-2].string), (yyvsp[-1].ast), (yyvsp[0].string));
					printf("%s\n",string);
					write_cond_to_string(string);

	}
#line 2315 "parser.tab.c"
    break;

  case 83:
#line 694 "parser.y"
               {}
#line 2321 "parser.tab.c"
    break;

  case 84:
#line 695 "parser.y"
                             {}
#line 2327 "parser.tab.c"
    break;

  case 85:
#line 696 "parser.y"
                                  {}
#line 2333 "parser.tab.c"
    break;

  case 86:
#line 697 "parser.y"
                             {}
#line 2339 "parser.tab.c"
    break;

  case 87:
#line 698 "parser.y"
                                               {
					char ids[50];
					int id1Val = getVal((yyvsp[-5].string), scope);
					int id2Val = getVal((yyvsp[-3].string), scope);
					int id3Val = getVal((yyvsp[-1].string), scope);
					sprintf(ids, "\n%s=%d\n%s=%d\n%s=%d\n", (yyvsp[-5].string), id1Val, (yyvsp[-3].string), id2Val, (yyvsp[-1].string), id3Val);
					write_var_to_string(ids);
					char string[50];
				
					sprintf(string, "\t%s %s %s %s %s\n", (yyvsp[-5].string), (yyvsp[-4].string), (yyvsp[-3].string), (yyvsp[-2].ast), (yyvsp[-1].string));
					write_blcok_to_string(string);

			}
#line 2357 "parser.tab.c"
    break;

  case 88:
#line 711 "parser.y"
                                                              {

				int id1Val = getVal((yyvsp[-5].string), scope);
				char ids[50];
				int id2Val = getVal((yyvsp[-3].string), scope);

				sprintf(ids,"\n%s=%d\n%s=%d\n", (yyvsp[-5].string), id1Val, (yyvsp[-3].string), id2Val);
				write_var_to_string(ids);
				char string[50];
				sprintf(string, "\t%s %s %s %s %s\n", (yyvsp[-5].string), (yyvsp[-4].string), (yyvsp[-3].string), (yyvsp[-2].ast), (yyvsp[-1].string));
				printf("%s\n", string);
				write_blcok_to_string(string);

			}
#line 2376 "parser.tab.c"
    break;

  case 89:
#line 725 "parser.y"
                                            {	
				int id1Val = getVal((yyvsp[-2].string), scope);
				char ids[50];
				sprintf(ids, "%s=%d\n", (yyvsp[-2].string), id1Val);
				char string[50];
				sprintf(string, "\tprint(%s)\n", (yyvsp[-1].string));
				write_blcok_to_string(string);

			}
#line 2390 "parser.tab.c"
    break;

  case 91:
#line 736 "parser.y"
                                              {
					char ids[50];
					int id1Val = getVal((yyvsp[-5].string), scope);
					int id2Val = getVal((yyvsp[-3].string), scope);
					int id3Val = getVal((yyvsp[-1].string), scope);
					sprintf(ids, "\n%s=%d\n%s=%d\n%s=%d\n", (yyvsp[-5].string), id1Val, (yyvsp[-3].string), id2Val, (yyvsp[-1].string), id3Val);
					write_var_to_string(ids);
					char string[50];
				
					sprintf(string, "\t%s %s %s %s %s\n", (yyvsp[-5].string), (yyvsp[-4].string), (yyvsp[-3].string), (yyvsp[-2].ast), (yyvsp[-1].string));
					write_blcok_to_string(string);


			}
#line 2409 "parser.tab.c"
    break;

  case 92:
#line 750 "parser.y"
                                                              {
				int id1Val = getVal((yyvsp[-5].string), scope);
				char ids[50];
				int id2Val = getVal((yyvsp[-3].string), scope);
				sprintf(ids,"\n%s=%d\n%s=%d\n", (yyvsp[-5].string), id1Val, (yyvsp[-3].string), id2Val);
				write_var_to_string(ids);
				char string[50];
				sprintf(string, "\t%s %s %s %s %s\n", (yyvsp[-5].string), (yyvsp[-4].string), (yyvsp[-3].string), (yyvsp[-2].ast), (yyvsp[-1].string));
				write_blcok_to_string(string);

			}
#line 2425 "parser.tab.c"
    break;

  case 93:
#line 761 "parser.y"
                                            {	
				int id1Val = getVal((yyvsp[-2].string), scope);
				char ids[50];
				sprintf(ids, "%s=%d\n", (yyvsp[-2].string), id1Val);
				char string[50];
				sprintf(string, "\tprint(%s)\n", (yyvsp[-1].string));
				write_blcok_to_string(string);


			}
#line 2440 "parser.tab.c"
    break;

  case 95:
#line 772 "parser.y"
                                              {
					char ids[50];
					int id1Val = getVal((yyvsp[-5].string), scope);
					int id2Val = getVal((yyvsp[-3].string), scope);
					int id3Val = getVal((yyvsp[-1].string), scope);
					sprintf(ids, "\n%s=%d\n%s=%d\n%s=%d\n", (yyvsp[-5].string), id1Val, (yyvsp[-3].string), id2Val, (yyvsp[-1].string), id3Val);
					write_var_to_string(ids);
					char string[50];
				
					sprintf(string, "\t%s %s %s %s %s\n", (yyvsp[-5].string), (yyvsp[-4].string), (yyvsp[-3].string), (yyvsp[-2].ast), (yyvsp[-1].string));
					write_blcok_to_string(string);


			}
#line 2459 "parser.tab.c"
    break;

  case 96:
#line 786 "parser.y"
                                                              {
				int id1Val = getVal((yyvsp[-5].string), scope);
				char ids[50];
				int id2Val = getVal((yyvsp[-3].string), scope);
				sprintf(ids,"\n%s=%d\n%s=%d\n", (yyvsp[-5].string), id1Val, (yyvsp[-3].string), id2Val);
				write_var_to_string(ids);
				char string[50];
				sprintf(string, "\t%s %s %s %s %s\n", (yyvsp[-5].string), (yyvsp[-4].string), (yyvsp[-3].string), (yyvsp[-2].ast), (yyvsp[-1].string));
				write_blcok_to_string(string);

			}
#line 2475 "parser.tab.c"
    break;

  case 97:
#line 797 "parser.y"
                                            {	
				int id1Val = getVal((yyvsp[-2].string), scope);
				char ids[50];
				sprintf(ids, "%s=%d\n", (yyvsp[-2].string), id1Val);
				char string[50];
				sprintf(string, "\tprint(%s)\n", (yyvsp[-1].string));
				write_blcok_to_string(string);


			}
#line 2490 "parser.tab.c"
    break;

  case 99:
#line 812 "parser.y"
                                    {(yyvsp[-1].ast)->left = (yyvsp[0].ast);
							  (yyval.ast) = (yyvsp[-1].ast);}
#line 2497 "parser.tab.c"
    break;

  case 100:
#line 814 "parser.y"
                                  {(yyval.ast) = (yyvsp[0].ast);}
#line 2503 "parser.tab.c"
    break;

  case 101:
#line 816 "parser.y"
                                  { printf("\n RECOGNIZED RULE: Variable declaration\n");

									char id1[50];

									symTabAccess();
									int inSymTab = found((yyvsp[-1].string), scope);

									
									if (inSymTab == 0) 
										add_Item_to_var_sym_table((yyvsp[-1].string), "Var", (yyvsp[-2].string), 0, scope);
									else						
										printf("SEMANTIC ERROR: Var %s is already in the symbol table", (yyvsp[-1].string));

									showVarSymTable();
									
									sprintf(id1, "%s", (yyvsp[-1].string));
									int numid = getItemID(id1, scope);   // ADDING TO IR CODE T0 = X
									emitConstantIntAssignment ((yyvsp[-1].string), numid);								

									
								    (yyval.ast) = AST_Type("Type",(yyvsp[-2].string),(yyvsp[-1].string));  	// SEMANTIC ACTIONS
								}
#line 2530 "parser.tab.c"
    break;

  case 102:
#line 840 "parser.y"
                                        {(yyvsp[-1].ast)->left = (yyvsp[0].ast);
							  (yyval.ast) = (yyvsp[-1].ast);}
#line 2537 "parser.tab.c"
    break;

  case 103:
#line 842 "parser.y"
                                    {(yyval.ast) = (yyvsp[0].ast);}
#line 2543 "parser.tab.c"
    break;

  case 104:
#line 844 "parser.y"
                                                       { printf("\n RECOGNIZED RULE: Array declaration %s\n", (yyvsp[-4].string));
									char id1[50];
									(yyvsp[-2].string) = atoi((yyvsp[-2].string));

									char concat[50];
									sprintf(concat, "%s[%d]", (yyvsp[-4].string), (yyvsp[-2].string));

									
									char temp[50];

									
									int inSymTab = found((yyvsp[-4].string), scope);

									if (inSymTab == 0){
										printf("Adding array to symbol table\n");
										int tempint = (yyvsp[-2].string);

										for (int i = 0; i < (yyvsp[-2].string); i++){
											char arrayname[50];
											
											sprintf(temp, "%d", i);

											sprintf(arrayname, "%s[%s]", (yyvsp[-4].string), temp);

											add_Item_to_var_sym_table(arrayname, "Array", (yyvsp[-5].string), (yyvsp[-2].string), &scope);
											
											tempint--;

	
										}
									}else{
														
										printf("SEMANTIC ERROR: Array %s is already in the symbol table", (yyvsp[-4].string));
									}
									showVarSymTable();
									
									sprintf(id1, "%s", (yyvsp[-4].string));
									int numid = getItemID(id1, scope);   // ADDING TO IR CODE T0 = X
									//emitConstantIntAssignment ($2, numid);								
									
								    (yyval.ast) = AST_Type("Type",(yyvsp[-5].string),concat);
									printf("%s", (yyval.ast)->LHS);
								}
#line 2591 "parser.tab.c"
    break;

  case 105:
#line 888 "parser.y"
                       { (yyvsp[-1].ast)->left = (yyvsp[0].ast);
					(yyval.ast) = (yyvsp[-1].ast);}
#line 2598 "parser.tab.c"
    break;

  case 106:
#line 890 "parser.y"
               { (yyval.ast) = (yyvsp[0].ast); }
#line 2604 "parser.tab.c"
    break;

  case 107:
#line 892 "parser.y"
                     {printf("AssignStmt\n");}
#line 2610 "parser.tab.c"
    break;

  case 108:
#line 893 "parser.y"
                       {printf("MathStat\n");}
#line 2616 "parser.tab.c"
    break;

  case 109:
#line 894 "parser.y"
                        {printf("WriteStmt\n");}
#line 2622 "parser.tab.c"
    break;

  case 110:
#line 895 "parser.y"
                          {printf("FuncallStmt\n");}
#line 2628 "parser.tab.c"
    break;

  case 111:
#line 896 "parser.y"
                             {}
#line 2634 "parser.tab.c"
    break;

  case 112:
#line 900 "parser.y"
                                         { (yyvsp[-1].ast)->left = (yyvsp[0].ast);
					(yyval.ast) = (yyvsp[-1].ast);}
#line 2641 "parser.tab.c"
    break;

  case 113:
#line 902 "parser.y"
                                            { (yyval.ast) = (yyvsp[0].ast); }
#line 2647 "parser.tab.c"
    break;

  case 114:
#line 904 "parser.y"
                                                                { printf("\nRECOGNIZED RULE: Set Val of array at certine index\n"); 
									
									char concat[50];
									sprintf(concat, "%s[%s]", (yyvsp[-6].string), (yyvsp[-4].string));
									

									if (strcmp(scope, Global) == 0){
										if(found(concat, scope) != 1) { // Issue is here
											printf("SEMANTIC ERROR: Array %s has NOT been declared in scope %s \n", (yyvsp[-6].string), scope);
											semanticCheckPassed = 0;
										}
										if(semanticCheckPassed == 1) {
											printf("\n\nRule is semantically correct!\n\n");
											setVal(concat, (yyvsp[-1].string), scope);
											(yyval.ast) = AST_assignment("=",concat, (yyvsp[-1].string));
									
											int numid = getItemID(concat, scope);   // ADDING TO IR CODE T0 = X
											emitIRAssignment(concat, (yyvsp[-1].string), numid);             // EMITS TO IR AND MIPS
											//emitMIPSConstantIntAssignment(concat, $6, numid);
											memset(concat, 0, sizeof(concat));
										}

									}else{
										if(found_in_fun_sym(concat, scope) != 1) { // Issue is here
											printf("SEMANTIC ERROR: Array %s has NOT been declared in scope %s \n", (yyvsp[-6].string), scope);
											semanticCheckPassed = 0;
											set_Int_Fun_Val(concat, (yyvsp[-1].string), scope);
										}
										if(semanticCheckPassed == 1) {
											printf("\n\nRule is semantically correct!\n\n");
											set_Int_Fun_Val(concat, (yyvsp[-1].string), scope);
											(yyval.ast) = AST_assignment("=",concat, (yyvsp[-1].string));
									
											int numid = getItemID_fun_sym(concat, scope);   // ADDING TO IR CODE T0 = X
											emitIRAssignment(concat, (yyvsp[-1].string), numid);             // EMITS TO IR AND MIPS
											//emitMIPSConstantIntAssignment(concat, $6, numid);
											memset(concat, 0, sizeof(concat));
										}

									}							
								}
#line 2693 "parser.tab.c"
    break;

  case 115:
#line 945 "parser.y"
                                                        { printf("\nRECOGNIZED RULE: Set Val of array at certine index\n"); 
									
									char concat[50];
									sprintf(concat, "%s[%s]", (yyvsp[-6].string), (yyvsp[-4].string));
									

									if (strcmp(scope, Global) == 0){
										if(found(concat, scope) != 1) { // Issue is here
											printf("SEMANTIC ERROR: Array %s has NOT been declared in scope %s \n", (yyvsp[-6].string), scope);
											semanticCheckPassed = 0;
										}
										if(semanticCheckPassed == 1) {
											printf("\n\nRule is semantically correct!\n\n");
											setcharVal(concat, (yyvsp[-1].string), scope);
											(yyval.ast) = AST_assignment("=",concat, (yyvsp[-1].string));
									
											int numid = getItemID(concat, scope);   // ADDING TO IR CODE T0 = X
											emitIRAssignment(concat, (yyvsp[-1].string), numid);             // EMITS TO IR AND MIPS
											//emitMIPSConstantIntAssignment(concat, $6, numid);
											memset(concat, 0, sizeof(concat));
										}

									}else{
										if(found_in_fun_sym(concat, scope) != 1) { // Issue is here
											printf("SEMANTIC ERROR: Array %s has NOT been declared in scope %s \n", (yyvsp[-6].string), scope);
											semanticCheckPassed = 0;
										}
										if(semanticCheckPassed == 1) {
											printf("\n\nRule is semantically correct!\n\n");
											set_fun_char_val(concat, (yyvsp[-1].string), scope);
											(yyval.ast) = AST_assignment("=",concat, (yyvsp[-1].string));
									
											int numid = getItemID_fun_sym(concat, scope);   // ADDING TO IR CODE T0 = X
											emitIRAssignment(concat, (yyvsp[-1].string), numid);             // EMITS TO IR AND MIPS
											//emitMIPSConstantIntAssignment(concat, $6, numid);
											memset(concat, 0, sizeof(concat));
										}

									}							
								}
#line 2738 "parser.tab.c"
    break;

  case 116:
#line 986 "parser.y"
                              { printf("\nRECOGNIZED RULE: Set String\n"); 
	
					char char1[50];
					char id1[50];
					sprintf(char1, "%s", (yyvsp[-1].string));
					sprintf(id1, "%s", (yyvsp[-3].string));
					if (strcmp(scope, Global) == 0){

						if(found(id1, scope) != 1) {
							printf("SEMANTIC ERROR: Variable %s has NOT been declared in scope %s \n", (yyvsp[-3].string), scope);
							semanticCheckPassed = 0;
						}

						if (semanticCheckPassed == 1) {
							printf("\n\nRule is semantically correct!\n\n");
							setcharVal(id1, char1, scope);
							showVarSymTable();
							(yyval.ast) = AST_assignment("=",(yyvsp[-3].string), (yyvsp[-1].string));
							int numid = getItemID((yyvsp[-3].string), scope);   // ADDING TO IR CODE T0 = X
							emitIRAssignment((yyvsp[-3].string), (yyvsp[-1].string), numid);             // EMITS TO IR AND MIPS
							// emitMIPSConstantIntAssignment($1, $3, numid);
						}

					}else{
						if(found_in_fun_sym(id1, scope) != 1) {
							printf("SEMANTIC ERROR: Variable %s has NOT been declared in scope %s \n", (yyvsp[-3].string), scope);
							semanticCheckPassed = 0;
						}
						if (semanticCheckPassed == 1) {
							printf("\n\nRule is semantically correct!\n\n");
							set_fun_char_val(id1, char1, scope);
							showVarSymTable();
							(yyval.ast) = AST_assignment("=",(yyvsp[-3].string), (yyvsp[-1].string));
							int numid = getVal_from_fun_sym((yyvsp[-3].string), scope);   // ADDING TO IR CODE T0 = X
							emitIRAssignment((yyvsp[-3].string), (yyvsp[-1].string), numid);             // EMITS TO IR AND MIPS
							// emitMIPSConstantIntAssignment($1, $3, numid);
						}

					}
				}
#line 2783 "parser.tab.c"
    break;

  case 117:
#line 1027 "parser.y"
                                 { printf("\nRECOGNIZED RULE: Set Val\n"); 


						char str[50];
						char id1[50];
						char id2[50];

						if (strcmp(scope, Global) == 0){


							if(found((yyvsp[-3].string), scope) != 1) {
								printf("SEMANTIC ERROR: Variable %s has NOT been declared in scope %s \n", (yyvsp[-3].string), scope);
								semanticCheckPassed = 0;
							}


							if (semanticCheckPassed == 1) {
								printf("\n\nRule is semantically correct!\n\n");
								sprintf(id2, "%s", (yyvsp[-1].string)); 
								sprintf(id1, "%s", (yyvsp[-3].string));
								symTabAccess();
								int CheckForFloat = 0;
								for(int i = 0; (yyvsp[-1].string)[i] != '\0'; ++i)
								{
									if((yyvsp[-1].string)[i] == '.')
									{
									CheckForFloat = 1;
									break;
									}
								}
								if (CheckForFloat == 1){
									printf("%s\n",(yyvsp[-1].string));
									setfloatVal(id1, (yyvsp[-1].string), scope);
								}else{
									// printf("Decimal point\n");
									setVal(id1, (yyvsp[-1].string), scope);
								}



								showVarSymTable();
								(yyval.ast) = AST_assignment("=",(yyvsp[-3].string), id2);
								int numid = getItemID(id1, scope);   // ADDING TO IR CODE T0 = X
								emitIRAssignment(id1, id2, numid);             // EMITS TO IR AND MIPS
								// emitMIPSConstantIntAssignment(id2, numid);

							}
						}else{
							if(found_in_fun_sym((yyvsp[-3].string), scope) != 1) {
								printf("SEMANTIC ERROR: Variable %s has NOT been declared in scope %s \n", (yyvsp[-3].string), scope);
								semanticCheckPassed = 0;
							}
							if (semanticCheckPassed == 1) {
								printf("\n\nRule is semantically correct!\n\n");
								sprintf(id2, "%s", (yyvsp[-1].string)); 
								sprintf(id1, "%s", (yyvsp[-3].string));
								int CheckForFloat = 0;
								for(int i = 0; (yyvsp[-1].string)[i] != '\0'; ++i)
								{
									if((yyvsp[-1].string)[i] == '.')
									{
									CheckForFloat = 1;
									break;
									}
								}
								if (CheckForFloat == 1){
									printf("%s\n",(yyvsp[-1].string));
									set_float_Fun_Val(id1, (yyvsp[-1].string), scope);
								}else{
									// printf("Decimal point\n");
									set_Int_Fun_Val(id1, (yyvsp[-1].string), scope);
								}
								showFuncSymTable();
								(yyval.ast) = AST_assignment("=",(yyvsp[-3].string), id2);
								int numid = getItemID_fun_sym(id1, scope);   // ADDING TO IR CODE T0 = X
								emitIRAssignment(id1, id2, numid);             // EMITS TO IR AND MIPS
								// emitMIPSConstantIntAssignment(id1, id2, numid);

							}
						}
					}
#line 2869 "parser.tab.c"
    break;

  case 118:
#line 1109 "parser.y"
                                  {
					char id1[50];
					char id2[50];
					FILE * ResultF;
					sprintf(id1, "%s", (yyvsp[-3].string));
					char command[50], mathVal[50];
					char ch;
					int i = 0;
					int numid = getItemID(id1, scope);
					reverseNumArr();
					strcpy( command, "python3 Operations.py" );
					printf("\n");
					addCalcFile();
					addOpArr('\0');
					system(command);
					sleep(1);
					ResultF = fopen("./Operations/Results/CalcF.txt_results.txt", "r");
					fgets(mathVal,20,ResultF);
					int x = atoi(mathVal);
					fclose(ResultF);

					int CheckForFloat = 0;
					for(int i = 0; mathVal[i] != '\0'; ++i){
						if(mathVal[i] == '.'){
							CheckForFloat = 1;
							break;
						}
					}
						if (CheckForFloat == 1){
							printf("%s\n",mathVal);
							setfloatVal((yyvsp[-3].string), mathVal, scope);
						}else{
							setVal((yyvsp[-3].string), mathVal, scope);
						}
					sprintf(id2, "%s", mathVal);	
					(yyval.ast) = AST_assignment("=",(yyvsp[-3].string),mathVal);
					emitConstantIntAssignment (mathVal, numid);
					// emitMIPSConstantIntAssignment(id1, id2, numid);	

					clearClacFile();
					clearArr();
					clearOpArr();
		}
#line 2917 "parser.tab.c"
    break;

  case 119:
#line 1153 "parser.y"
                                      { (yyvsp[-1].ast)->left = (yyvsp[0].ast);
					(yyval.ast) = (yyvsp[-1].ast);}
#line 2924 "parser.tab.c"
    break;

  case 120:
#line 1155 "parser.y"
                                                 { (yyval.ast) = (yyvsp[0].ast); }
#line 2930 "parser.tab.c"
    break;

  case 121:
#line 1157 "parser.y"
                             { printf("\nRECOGNIZED RULE: WRITE STATMENT\n");

					char id1[50];
					sprintf(id1, "%s", (yyvsp[-1].string));
					char *tyoe = getVariableType(id1, scope);
					char type[50];
					sprintf(type, "%s", tyoe);
					printf("Type: %s\n", type);
					(yyval.ast) = AST_Write("write",type, (yyvsp[-1].string));
					
					int numid = getItemID(id1, scope);


					// SEMANTIC ANALYSIS ACTIONS   
					if (found((yyvsp[-1].string), scope) != 1) {	 
						printf("SEMANTIC ERROR: Variable %s has NOT been declared in scope %s \n", (yyvsp[-1].string), scope);
						semanticCheckPassed = 0;
					}

					if (semanticCheckPassed == 1) {
						printf("\n\nRule is semantically correct!\n\n");
						// emitMIPSConstantIntAssignment(id1, id2, numid);
						if (strcmp(type, "int") == 0){
							int val = getVal((yyvsp[-1].string), scope);
							char valStr[50];
							sprintf(valStr, "%d", val);
							emitMIPSConstantIntAssignment(valStr, numid);
							emitMIPSWriteId(numid);
						}
						else if(strcmp(type, "float") == 0){
							double val = getFloatVal((yyvsp[-1].string), scope);
							char valStr[50];
							sprintf(valStr, "%f", val);
							char pythonCommand[50];
							sprintf(pythonCommand, "python3 WriteFloatsMips.py %s\n", valStr);
							char command[50];
							strcpy(command, pythonCommand);
						
							system(command);
							sleep(0.5);
							emitfloatAssignment();

						}
						else if(strcmp(type, "char") == 0){
							char *val = getCharVal((yyvsp[-1].string), scope);
							char valStr[50];
							sprintf(valStr, "%s", val);
							char pythonCommand[50];
							sprintf(pythonCommand, "python3 writeCharToMips.py %s\n", valStr);
							char command[50];
							strcpy(command, pythonCommand);
							system(command);
							sleep(0.5);
							emitMIPSCharAssignment();
						}
			
						
					}


				}
#line 2996 "parser.tab.c"
    break;

  case 122:
#line 1218 "parser.y"
                                                             { printf("\nRECOGNIZED RULE: WRITE STATMENT FOR ARRAY\n");

					char id1[50];
					sprintf(id1, "%s[%s]", (yyvsp[-4].string), (yyvsp[-2].string));
					char *tyoe = getVariableType(id1, scope);
					char type[50];
					sprintf(type, "%s", tyoe);

					(yyval.ast) = AST_Write("write",type, (yyvsp[-4].string));
					
					int numid = getItemID(id1, scope);
					if (found(id1, scope) != 1) {	 
						printf("SEMANTIC ERROR: Variable %s has NOT been declared in scope %s \n", (yyvsp[-4].string), scope);
						semanticCheckPassed = 0;
					}

					if (semanticCheckPassed == 1) {
						printf("\n\nRule is semantically correct!\n\n");
						if (strcmp(type, "int") == 0){
							int val = getVal(id1, scope);
							// emitWriteInt(id1, numid);
							// emitMIPSWriteInt(id1, numid);	// EMITS TO IR AND MIPS

							char valStr[50];
							sprintf(valStr, "%d", val);
							emitMIPSConstantIntAssignment(valStr, numid);	// EMITS TO IR AND MIPS

						} else if (strcmp(type, "float") == 0){
							double val = getFloatVal(id1, scope);
							char valStr[50];
							sprintf(valStr, "%lf", val);
							emitMIPSConstantIntAssignment(valStr, numid);

						} else if (strcmp(type, "char") == 0){
							char *val = getCharVal(id1, scope);
							char valStr[50];
							sprintf(valStr, "%s", val);
							emitMIPSConstantIntAssignment(valStr, numid); 				

						}
						emitMIPSWriteId(numid);
					}


		}
#line 3046 "parser.tab.c"
    break;

  case 123:
#line 1268 "parser.y"
                {addOpArr('+');}
#line 3052 "parser.tab.c"
    break;

  case 124:
#line 1270 "parser.y"
                        {addOpArr('-');}
#line 3058 "parser.tab.c"
    break;

  case 125:
#line 1272 "parser.y"
                                {addOpArr('*');}
#line 3064 "parser.tab.c"
    break;

  case 126:
#line 1274 "parser.y"
                        {addOpArr('/');}
#line 3070 "parser.tab.c"
    break;

  case 127:
#line 1276 "parser.y"
                                    {(yyvsp[-1].ast)->left = (yyvsp[0].ast);
					(yyval.ast) = (yyvsp[-1].ast);}
#line 3077 "parser.tab.c"
    break;

  case 128:
#line 1278 "parser.y"
                                          { (yyval.ast) = (yyvsp[0].ast); }
#line 3083 "parser.tab.c"
    break;

  case 129:
#line 1280 "parser.y"
                                        {addNumArr((yyvsp[-2].string));}
#line 3089 "parser.tab.c"
    break;

  case 130:
#line 1282 "parser.y"
                                                {

					symTabAccess();
					int id1;
					id1 = getVal((yyvsp[-2].string), scope);
					addIDNumArr(id1);  //ADD ID TO SUM GLOBAL VALUE
					
			}
#line 3102 "parser.tab.c"
    break;

  case 131:
#line 1291 "parser.y"
                                        {addNumArr((yyvsp[0].string));}
#line 3108 "parser.tab.c"
    break;

  case 132:
#line 1293 "parser.y"
                                {
					symTabAccess();
					int id1;
					id1 = getVal((yyvsp[0].string), scope);
					addIDNumArr(id1);	//ADD ID TO SUM GLOBAL VALUE
					}
#line 3119 "parser.tab.c"
    break;


#line 3123 "parser.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

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
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
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


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
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
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 1300 "parser.y"


int main(int argc, char**argv)
{
	clearVarFile();
	create_Var_file();
	clearBlockFile();
	create_block_file();

	printf("\n\n##### COMPILER STARTED #####\n\n");
	
	if (argc > 1){
	  if(!(yyin = fopen(argv[1], "r")))
          {
		perror(argv[1]);
		return(1);
	  }
	}

	// Initialize IR and MIPS files
	initIRcodeFile();
	initAssemblyFile();

	// Start parser
	yyparse();

	// Add the closing part required for any MIPS file
	emitEndOfAssemblyCode();

}

void yyerror(const char* s) {
	fprintf(stderr, "Parse error: %s\n", s);
	exit(1);
}
