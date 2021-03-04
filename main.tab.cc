/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "main.y" /* yacc.c:339  */

    #include "common.h"
    #include <iostream>
    using namespace std;
    extern Node * root;
    int yylex();
    extern int yyparse();
    int yyerror(char const * );
    extern block b[100];
    extern curblock cb;
    extern int blockindex;
    extern int forflag;
    extern int IfLevel;
    extern int WhileLevel;
    extern int ForLevel;
    extern vector<string> forvariable[100];
	extern vector<string> printfTable;
	extern vector<string> scanfTable;
	extern vector<string> warnings;

#line 87 "main.tab.cc" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "main.tab.hh".  */
#ifndef YY_YY_MAIN_TAB_HH_INCLUDED
# define YY_YY_MAIN_TAB_HH_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    Printf = 258,
    Scanf = 259,
    If = 260,
    Else = 261,
    While = 262,
    For = 263,
    Return = 264,
    Id = 265,
    Idadd = 266,
    Integer = 267,
    Int = 268,
    Char = 269,
    Semicolon = 270,
    True = 271,
    False = 272,
    Comma = 273,
    ModEqual = 274,
    Assign = 275,
    AddEqual = 276,
    SubEqual = 277,
    MulEqual = 278,
    DivEqual = 279,
    Or = 280,
    And = 281,
    OrBit = 282,
    AndBit = 283,
    Equal = 284,
    NotEqual = 285,
    Big = 286,
    BigEqual = 287,
    Small = 288,
    SmallEqual = 289,
    Add = 290,
    Sub = 291,
    Mul = 292,
    Div = 293,
    Mod = 294,
    Not = 295,
    AddAdd = 296,
    SubSub = 297,
    LParen = 298,
    RParen = 299,
    LBrace = 300,
    RBrace = 301,
    Void = 302,
    Main = 303,
    Const = 304,
    Intt = 305,
    Quote = 306,
    String = 307,
    Cmtbegin1 = 308,
    CmtElement1 = 309,
    Cmtend1 = 310,
    Cmtbegin2 = 311,
    CmtElement2 = 312,
    Cmtend2 = 313,
    UMINUS = 314,
    IntegerDec = 315,
    IntegerOct = 316,
    IntegerHex = 317,
    Cha = 318,
    STR = 319,
    Lower_than_else = 320
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MAIN_TAB_HH_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 204 "main.tab.cc" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  51
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   408

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  88
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  169

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   320

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    71,    71,    78,    79,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    99,   108,   121,   132,   144,
     147,   155,   162,   170,   171,   177,   184,   191,   192,   198,
     205,   209,   210,   211,   217,   218,   224,   238,   252,   253,
     259,   266,   273,   282,   283,   289,   295,   302,   313,   314,
     320,   325,   336,   344,   347,   350,   353,   356,   359,   362,
     384,   391,   398,   405,   412,   419,   426,   433,   440,   447,
     453,   459,   465,   472,   479,   486,   493,   500,   507,   514,
     521,   528,   535,   538,   547,   552,   557,   562,   567
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "Printf", "Scanf", "If", "Else", "While",
  "For", "Return", "Id", "Idadd", "Integer", "Int", "Char", "Semicolon",
  "True", "False", "Comma", "ModEqual", "Assign", "AddEqual", "SubEqual",
  "MulEqual", "DivEqual", "Or", "And", "OrBit", "AndBit", "Equal",
  "NotEqual", "Big", "BigEqual", "Small", "SmallEqual", "Add", "Sub",
  "Mul", "Div", "Mod", "Not", "AddAdd", "SubSub", "LParen", "RParen",
  "LBrace", "RBrace", "Void", "Main", "Const", "Intt", "Quote", "String",
  "Cmtbegin1", "CmtElement1", "Cmtend1", "Cmtbegin2", "CmtElement2",
  "Cmtend2", "UMINUS", "IntegerDec", "IntegerOct", "IntegerHex", "Cha",
  "STR", "Lower_than_else", "$accept", "Program", "Statements",
  "Statement", "If_Else", "Whilee", "Forr", "For_Statement",
  "For_Expression", "For_Instruction", "For_Declarations",
  "For_Declaration", "For_Assignments", "For_Assignment", "Bool_Statement",
  "Bool_Expression", "Declarations", "Declaration", "Assignments",
  "Assignment", "Instruction", "PrintfArgs", "PrintfArg", "printf",
  "ScanfArgs", "ScanfArg", "scanf", "return", "Expression", "Type", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320
};
# endif

#define YYPACT_NINF -29

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-29)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     160,   -20,   -13,   -11,   -11,    -1,    36,   -29,   -29,   -29,
      36,    36,    36,   160,    57,   -29,   -29,   -29,   -29,   -29,
     -29,    37,   160,   -29,   -29,   -29,   -29,    62,   -29,   -29,
     -29,   -29,   -29,   235,    -7,    -3,    31,   191,   160,   160,
      26,   160,   -29,   260,    36,    52,    52,   283,    98,   -29,
     -29,   -29,   -29,   -29,    68,   -29,    36,    36,    36,    36,
      36,    36,    36,    36,    36,    36,    36,    36,    36,    36,
      36,    36,    36,    36,    36,    36,   -29,   -29,    71,    61,
      67,   -29,   -16,    77,   -29,   -29,    56,   308,   103,   -29,
      90,    70,   191,    69,   -29,   105,   -29,   -29,   308,   -29,
     -29,    93,   -29,   308,   308,   308,   308,   308,   325,   -17,
     340,   354,   366,   366,   156,   156,   156,   156,     6,     6,
      52,    52,    52,    36,    72,   -29,   108,    36,   107,   109,
     -29,   160,    36,   -29,   110,   -29,   113,   104,    74,   -29,
     308,   160,   -29,   -10,   -29,   308,   -29,   -29,    -9,   -29,
     -29,   308,    36,   -29,    36,   -29,   105,   176,    36,   112,
     109,   115,   308,   308,   -29,   -29,   -29,   -29,   -29
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,    53,    84,    85,
       0,     0,     0,     0,     0,    58,    54,    55,    56,    57,
      88,     0,     2,     3,     8,     9,    10,     0,    38,     5,
      12,    13,    14,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    53,     0,     0,    71,    83,     0,     0,    86,
      87,     1,     4,    42,     0,     6,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    69,    70,    37,     0,
       0,    34,     0,     0,    31,    32,     0,    33,    15,    17,
       0,     0,     0,     0,    27,     0,    18,    52,    40,    82,
      11,     0,    39,    59,    64,    65,    66,    67,    77,    76,
      73,    72,    74,    75,    78,    80,    79,    81,    60,    61,
      62,    63,    68,     0,     0,    41,     0,     0,     0,     0,
      30,     0,     0,    19,     0,    22,     0,    26,     0,    23,
      36,     0,    35,     0,    43,    45,    46,    50,     0,    48,
      16,    29,     0,    28,     0,    21,     0,     7,     0,     0,
       0,     0,    20,    25,    24,    44,    47,    49,    51
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -29,   -29,   -12,   -15,   -29,   -29,   -29,   -29,   -29,   -29,
     -29,   -28,   -29,    -5,   128,    41,   -29,    10,   -29,    83,
     -29,   -29,   -19,   -29,   -29,    -4,   -29,   -29,    -6,   100
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    21,    22,    23,    24,    25,    26,    41,    91,    92,
     138,   139,    93,    94,    38,    86,    80,    81,    27,    28,
      29,   143,   144,    30,   148,   149,    31,    32,    33,    34
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      43,    48,   127,    78,    45,    46,    47,    52,   158,   160,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    35,    76,    77,    88,    89,   128,    96,
      36,    87,    37,    52,   159,   161,    90,    51,    98,     8,
       9,    79,    40,    73,    74,    75,    42,    76,    77,    82,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
      49,    50,    10,    52,    52,    14,    11,    53,   101,    12,
      54,    52,   125,    83,   135,   126,    87,   136,    15,   155,
      20,   123,   156,    76,    77,   129,    16,    17,    18,    19,
     130,     1,     2,     3,   124,     4,     5,     6,     7,   131,
     132,     8,     9,    44,   133,   137,   141,   140,    78,   150,
     147,   145,   146,    90,   154,   152,   151,   166,   164,   157,
     168,   153,    39,   134,    10,    52,   142,   102,    11,   165,
      95,    12,    52,    13,   100,     0,   162,    14,   163,     0,
      15,     0,   145,     0,     0,     0,   167,     0,    16,    17,
      18,    19,    20,     1,     2,     3,     0,     4,     5,     6,
       7,     0,     0,     8,     9,     0,     0,     0,     0,     1,
       2,     3,     0,     4,     5,     6,     7,     0,     0,     8,
       9,    71,    72,    73,    74,    75,    10,    76,    77,     0,
      11,    42,     0,    12,     0,    13,     0,    84,    85,    14,
       0,     0,    15,     0,     0,     0,     0,     0,     0,     0,
      16,    17,    18,    19,    20,    14,     0,    10,    15,     0,
       0,    11,     0,     0,    12,     0,    16,    17,    18,    19,
      20,     0,     0,    15,     0,     0,     0,     0,     0,     0,
      55,    16,    17,    18,    19,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    97,    76,    77,     0,     0,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
       0,    76,    77,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,     0,    76,    77,     0,    99,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,     0,    76,
      77,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,     0,    76,    77,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
       0,    76,    77,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,     0,    76,    77,    67,    68,    69,
      70,    71,    72,    73,    74,    75,     0,    76,    77
};

static const yytype_int16 yycheck[] =
{
       6,    13,    18,    10,    10,    11,    12,    22,    18,    18,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    43,    41,    42,    38,    39,    44,    41,
      43,    37,    43,    48,    44,    44,    10,     0,    44,    13,
      14,    48,    43,    37,    38,    39,    10,    41,    42,    52,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      13,    14,    36,    88,    89,    49,    40,    15,    10,    43,
      18,    96,    15,    52,    15,    18,    92,    18,    52,    15,
      64,    20,    18,    41,    42,    18,    60,    61,    62,    63,
      44,     3,     4,     5,    43,     7,     8,     9,    10,     6,
      20,    13,    14,    20,    44,    10,    44,   123,    10,   131,
      11,   127,    15,    10,    20,    15,   132,    15,   156,   141,
      15,   136,     4,    92,    36,   150,   126,    54,    40,   158,
      40,    43,   157,    45,    46,    -1,   152,    49,   154,    -1,
      52,    -1,   158,    -1,    -1,    -1,   160,    -1,    60,    61,
      62,    63,    64,     3,     4,     5,    -1,     7,     8,     9,
      10,    -1,    -1,    13,    14,    -1,    -1,    -1,    -1,     3,
       4,     5,    -1,     7,     8,     9,    10,    -1,    -1,    13,
      14,    35,    36,    37,    38,    39,    36,    41,    42,    -1,
      40,    10,    -1,    43,    -1,    45,    -1,    16,    17,    49,
      -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      60,    61,    62,    63,    64,    49,    -1,    36,    52,    -1,
      -1,    40,    -1,    -1,    43,    -1,    60,    61,    62,    63,
      64,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      15,    60,    61,    62,    63,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    15,    41,    42,    -1,    -1,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      -1,    41,    42,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    -1,    41,    42,    -1,    44,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    -1,    41,
      42,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    -1,    41,    42,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      -1,    41,    42,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    -1,    41,    42,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    -1,    41,    42
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     7,     8,     9,    10,    13,    14,
      36,    40,    43,    45,    49,    52,    60,    61,    62,    63,
      64,    67,    68,    69,    70,    71,    72,    84,    85,    86,
      89,    92,    93,    94,    95,    43,    43,    43,    80,    80,
      43,    73,    10,    94,    20,    94,    94,    94,    68,    13,
      14,     0,    69,    15,    18,    15,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    41,    42,    10,    48,
      82,    83,    52,    52,    16,    17,    81,    94,    68,    68,
      10,    74,    75,    78,    79,    95,    68,    15,    94,    44,
      46,    10,    85,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    20,    43,    15,    18,    18,    44,    18,
      44,     6,    20,    44,    81,    15,    18,    10,    76,    77,
      94,    44,    83,    87,    88,    94,    15,    11,    90,    91,
      68,    94,    15,    79,    20,    15,    18,    68,    18,    44,
      18,    44,    94,    94,    77,    88,    15,    91,    15
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    66,    67,    68,    68,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    70,    70,    71,    72,    73,
      74,    75,    75,    76,    76,    77,    77,    78,    78,    79,
      80,    81,    81,    81,    82,    82,    83,    83,    84,    84,
      85,    86,    86,    87,    87,    88,    89,    89,    90,    90,
      91,    92,    93,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    95,    95,    95,    95,    95
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     2,     5,     1,     1,
       1,     3,     1,     1,     1,     3,     5,     3,     3,     3,
       4,     3,     2,     1,     3,     3,     1,     1,     3,     3,
       3,     1,     1,     1,     1,     3,     3,     1,     1,     3,
       3,     3,     2,     1,     3,     1,     5,     7,     1,     3,
       1,     7,     3,     1,     1,     1,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     1,     1,     2,     2,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
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
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

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
      int yyn = yypact[*yyssp];
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
          yyp++;
          yyformat++;
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

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
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
#line 71 "main.y" /* yacc.c:1646  */
    {
		root = new Node(Node_Program);
		root->addchild((yyvsp[0]));
	}
#line 1455 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 3:
#line 78 "main.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1461 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 4:
#line 79 "main.y" /* yacc.c:1646  */
    {
		(yyvsp[-1])->addsibling((yyvsp[0]));
		(yyval) = (yyvsp[-1]);
	}
#line 1470 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 5:
#line 86 "main.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 1476 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 6:
#line 87 "main.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); (yyvsp[-1])->typecheck((yyvsp[-1]));}
#line 1482 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 7:
#line 88 "main.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1488 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 8:
#line 89 "main.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1494 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 9:
#line 90 "main.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1500 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 10:
#line 91 "main.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1506 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 11:
#line 92 "main.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 1512 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 12:
#line 93 "main.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1518 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 13:
#line 94 "main.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1524 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 14:
#line 95 "main.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1530 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 15:
#line 99 "main.y" /* yacc.c:1646  */
    {
		Node *node = new Node(Node_Stmt);
		node->stmttype = Stmt_If;
		(yyvsp[-1])->addsibling((yyvsp[0]));
		node->addchild((yyvsp[-1]));
		node->iflevel = IfLevel;
		IfLevel++;
		(yyval) = node;
	}
#line 1544 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 16:
#line 108 "main.y" /* yacc.c:1646  */
    {
		Node *node = new Node(Node_Stmt);
		node->stmttype = Stmt_If;
		(yyvsp[-3])->addsibling((yyvsp[-2]));
		(yyvsp[-2])->addsibling((yyvsp[-1]));
		(yyvsp[-1])->addsibling((yyvsp[0]));
		node->addchild((yyvsp[-3]));
		node->iflevel = IfLevel;
		IfLevel++;
		(yyval) = node;
	}
#line 1560 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 17:
#line 121 "main.y" /* yacc.c:1646  */
    {
        Node *node = new Node(Node_Stmt);
        node->stmttype = Stmt_While;
        (yyvsp[-1])->addsibling((yyvsp[0]));
        node->addchild((yyvsp[-1]));
        node->whilelevel = WhileLevel;
        WhileLevel++;
        (yyval) = node;
    }
#line 1574 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 18:
#line 132 "main.y" /* yacc.c:1646  */
    {
		Node *node = new Node(Node_Stmt);
        node->stmttype = Stmt_For;
        (yyvsp[-1])->addsibling((yyvsp[0]));
        node->addchild((yyvsp[-1]));
        forflag--;
        node->forlevel = ForLevel;
        ForLevel++;
        (yyval) = node;
	}
#line 1589 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 19:
#line 144 "main.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 1595 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 20:
#line 147 "main.y" /* yacc.c:1646  */
    {
		(yyvsp[0])->typecheck((yyvsp[0]));
		(yyvsp[-3])->addsibling((yyvsp[-2]));
		(yyvsp[-3])->addsibling((yyvsp[0]));
		(yyval) = (yyvsp[-3]);
	}
#line 1606 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 21:
#line 155 "main.y" /* yacc.c:1646  */
    {
    	Node *node = new Node(Node_Stmt);
        node->stmttype = Stmt_Declare;
        (yyvsp[-2])->addsibling((yyvsp[-1]));
        node->addchild((yyvsp[-2]));
        (yyval) = node;
    }
#line 1618 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 22:
#line 162 "main.y" /* yacc.c:1646  */
    {
        Node *node = new Node(Node_Stmt);
        node->stmttype = Stmt_Assign;
        node->addchild((yyvsp[-1]));
        (yyval) = node;
    }
#line 1629 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 23:
#line 170 "main.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1635 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 24:
#line 171 "main.y" /* yacc.c:1646  */
    {
		(yyvsp[-2])->addsibling((yyvsp[0]));
		(yyval) = (yyvsp[-2]);
	}
#line 1644 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 25:
#line 177 "main.y" /* yacc.c:1646  */
    {
		(yyvsp[0])->typecheck((yyvsp[0]));
		forvariable[forflag].push_back((yyvsp[-2])->str_val);
    	cb.id.push_back((yyvsp[-2])->str_val);
		(yyvsp[-2])->addchild((yyvsp[0]));
		(yyval) = (yyvsp[-2]);
	}
#line 1656 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 26:
#line 184 "main.y" /* yacc.c:1646  */
    {
		forvariable[forflag].push_back((yyvsp[0])->str_val);
    	cb.id.push_back((yyvsp[0])->str_val);
		(yyval) = (yyvsp[0]);
	}
#line 1666 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 27:
#line 191 "main.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1672 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 28:
#line 192 "main.y" /* yacc.c:1646  */
    {
		(yyvsp[-2])->addsibling((yyvsp[0]));
		(yyval) = (yyvsp[-2]);
	}
#line 1681 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 29:
#line 198 "main.y" /* yacc.c:1646  */
    {
		(yyvsp[0])->typecheck((yyvsp[0]));
		(yyvsp[-2])->addchild((yyvsp[0]));
		(yyval) = (yyvsp[-2]);
	}
#line 1691 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 30:
#line 205 "main.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 1697 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 31:
#line 209 "main.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1703 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 32:
#line 210 "main.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1709 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 33:
#line 211 "main.y" /* yacc.c:1646  */
    {
		(yyvsp[0])->typecheck((yyvsp[0]));
		(yyval) = (yyvsp[0]); 
	}
#line 1718 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 34:
#line 217 "main.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1724 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 35:
#line 218 "main.y" /* yacc.c:1646  */
    {
		(yyvsp[-2])->addsibling((yyvsp[0]));
		(yyval) = (yyvsp[-2]);
	}
#line 1733 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 36:
#line 224 "main.y" /* yacc.c:1646  */
    {
		for(int i = b[blockindex].id.size(); i < cb.id.size(); i++)
		{
			if(cb.id[i] == (yyvsp[-2])->str_val)
			{
				cerr << "Error: Multiple Definition of " << (yyvsp[-2])->str_val << "." << endl;
				exit(1);
			}
		}
		(yyvsp[0])->typecheck((yyvsp[0]));
    	cb.id.push_back((yyvsp[-2])->str_val);
		(yyvsp[-2])->addchild((yyvsp[0]));
		(yyval) = (yyvsp[-2]);
	}
#line 1752 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 37:
#line 238 "main.y" /* yacc.c:1646  */
    {
		for(int i = b[blockindex].id.size(); i < cb.id.size(); i++)
		{
			if(cb.id[i] == (yyvsp[0])->str_val)
			{
				cerr << "Error: Multiple Definition of " << (yyvsp[0])->str_val << "." << endl;
				exit(1);
			}
		}
    	cb.id.push_back((yyvsp[0])->str_val);
		(yyval) = (yyvsp[0]);
	}
#line 1769 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 38:
#line 252 "main.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1775 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 39:
#line 253 "main.y" /* yacc.c:1646  */
    {
		(yyvsp[-2])->addsibling((yyvsp[0]));
		(yyval) = (yyvsp[-2]);
	}
#line 1784 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 40:
#line 259 "main.y" /* yacc.c:1646  */
    {
		(yyvsp[0])->typecheck((yyvsp[0]));
		(yyvsp[-2])->addchild((yyvsp[0]));
		(yyval) = (yyvsp[-2]);
	}
#line 1794 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 41:
#line 266 "main.y" /* yacc.c:1646  */
    {
    	Node *node = new Node(Node_Stmt);
        node->stmttype = Stmt_Declare;
        (yyvsp[-2])->addsibling((yyvsp[-1]));
        node->addchild((yyvsp[-2]));
        (yyval) = node;
    }
#line 1806 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 42:
#line 273 "main.y" /* yacc.c:1646  */
    {
        Node *node = new Node(Node_Stmt);
        node->stmttype = Stmt_Assign;
        node->addchild((yyvsp[-1]));
        (yyval) = node;
    }
#line 1817 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 43:
#line 282 "main.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1823 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 44:
#line 283 "main.y" /* yacc.c:1646  */
    {
		(yyvsp[-2])->addsibling((yyvsp[0]));
		(yyval) = (yyvsp[-2]);
	}
#line 1832 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 45:
#line 289 "main.y" /* yacc.c:1646  */
    {
		(yyval) = (yyvsp[0]);
	}
#line 1840 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 46:
#line 295 "main.y" /* yacc.c:1646  */
    {
        Node *node = new Node(Node_Stmt);
        node->stmttype = Stmt_Printf;
        node->addchild((yyvsp[-2]));
        (yyval) = node;
        printfTable.push_back((yyvsp[-2])->str_val);
    }
#line 1852 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 47:
#line 302 "main.y" /* yacc.c:1646  */
    {
    	Node *node = new Node(Node_Stmt);
        node->stmttype = Stmt_Printf;
        (yyvsp[-4])->addchild((yyvsp[-2]));
        node->addchild((yyvsp[-4]));
        (yyval) = node;
        printfTable.push_back((yyvsp[-4])->str_val);
    }
#line 1865 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 48:
#line 313 "main.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1871 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 49:
#line 314 "main.y" /* yacc.c:1646  */
    {
		(yyvsp[-2])->addsibling((yyvsp[0]));
		(yyval) = (yyvsp[-2]);
	}
#line 1880 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 50:
#line 320 "main.y" /* yacc.c:1646  */
    {
		(yyval) = (yyvsp[0]);
	}
#line 1888 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 51:
#line 325 "main.y" /* yacc.c:1646  */
    {
        Node *node = new Node(Node_Stmt);
        node->stmttype = Stmt_Scanf;
        (yyvsp[-4])->addsibling((yyvsp[-2]));
        node->addchild((yyvsp[-4]));
        (yyval) = node;
        scanfTable.push_back((yyvsp[-4])->str_val);
    }
#line 1901 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 52:
#line 336 "main.y" /* yacc.c:1646  */
    {
		Node *node = new Node(Node_Stmt);
		node->stmttype = Stmt_Return;
		node->addchild((yyvsp[-1]));
		(yyval) = node;
	}
#line 1912 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 53:
#line 344 "main.y" /* yacc.c:1646  */
    {
		(yyval) = (yyvsp[0]);
	}
#line 1920 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 54:
#line 347 "main.y" /* yacc.c:1646  */
    {
		(yyval) = (yyvsp[0]);
	}
#line 1928 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 55:
#line 350 "main.y" /* yacc.c:1646  */
    {
		(yyval) = (yyvsp[0]);
	}
#line 1936 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 56:
#line 353 "main.y" /* yacc.c:1646  */
    {
		(yyval) = (yyvsp[0]);
	}
#line 1944 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 57:
#line 356 "main.y" /* yacc.c:1646  */
    {
		(yyval) = (yyvsp[0]);
	}
#line 1952 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 58:
#line 359 "main.y" /* yacc.c:1646  */
    {
		(yyval) = (yyvsp[0]);
	}
#line 1960 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 59:
#line 362 "main.y" /* yacc.c:1646  */
    {
		int flag = 0;
		for(int i = 0; i < cb.id.size(); i++)
		{
			if(cb.id[i] == (yyvsp[-2])->str_val)
			{
				flag = 1;
				break;
			}
		}
		if(!flag)
		{
			cerr << "Error: No Declaration of " << (yyvsp[-2])->str_val << "." << endl;
			exit(1);
		}
		(yyvsp[0])->typecheck((yyvsp[0]));
		Node *node = new Node(Node_Stmt);
		node->stmttype = Stmt_Assign;
		node->createleftchild((yyvsp[-2]));
		node->createrightchild((yyvsp[0]));
		(yyval) = node;
	}
#line 1987 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 60:
#line 384 "main.y" /* yacc.c:1646  */
    {
		Node *node = new Node(Node_Operator);
		node->optype = Op_Add;
		node->createleftchild((yyvsp[-2]));
		node->createrightchild((yyvsp[0]));
		(yyval) = node;
	}
#line 1999 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 61:
#line 391 "main.y" /* yacc.c:1646  */
    {
		Node *node = new Node(Node_Operator);
		node->optype = Op_Sub;
		node->createleftchild((yyvsp[-2]));
		node->createrightchild((yyvsp[0]));
		(yyval) = node;
	}
#line 2011 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 62:
#line 398 "main.y" /* yacc.c:1646  */
    {
		Node *node = new Node(Node_Operator);
		node->optype = Op_Mul;
		node->createleftchild((yyvsp[-2]));
		node->createrightchild((yyvsp[0]));
		(yyval) = node;
	}
#line 2023 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 63:
#line 405 "main.y" /* yacc.c:1646  */
    {
		Node *node = new Node(Node_Operator);
		node->optype = Op_Div;
		node->createleftchild((yyvsp[-2]));
		node->createrightchild((yyvsp[0]));
		(yyval) = node;
	}
#line 2035 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 64:
#line 412 "main.y" /* yacc.c:1646  */
    {
		Node *node = new Node(Node_Operator);
		node->optype = Op_AddEqual;
		node->createleftchild((yyvsp[-2]));
		node->createrightchild((yyvsp[0]));
		(yyval) = node;
	}
#line 2047 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 65:
#line 419 "main.y" /* yacc.c:1646  */
    {
		Node *node = new Node(Node_Operator);
		node->optype = Op_SubEqual;
		node->createleftchild((yyvsp[-2]));
		node->createrightchild((yyvsp[0]));
		(yyval) = node;
	}
#line 2059 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 66:
#line 426 "main.y" /* yacc.c:1646  */
    {
		Node *node = new Node(Node_Operator);
		node->optype = Op_MulEqual;
		node->createleftchild((yyvsp[-2]));
		node->createrightchild((yyvsp[0]));
		(yyval) = node;
	}
#line 2071 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 67:
#line 433 "main.y" /* yacc.c:1646  */
    {
		Node *node = new Node(Node_Operator);
		node->optype = Op_DivEqual;
		node->createleftchild((yyvsp[-2]));
		node->createrightchild((yyvsp[0]));
		(yyval) = node;
	}
#line 2083 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 68:
#line 440 "main.y" /* yacc.c:1646  */
    {
		Node *node = new Node(Node_Operator);
		node->optype = Op_Mod;
		node->createleftchild((yyvsp[-2]));
		node->createrightchild((yyvsp[0]));
		(yyval) = node;
	}
#line 2095 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 69:
#line 447 "main.y" /* yacc.c:1646  */
    {
		Node *node = new Node(Node_Operator);
		node->optype = Op_AddAdd;
		node->addchild((yyvsp[-1]));
		(yyval) = node;
	}
#line 2106 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 70:
#line 453 "main.y" /* yacc.c:1646  */
    {
		Node *node = new Node(Node_Operator);
		node->optype = Op_SubSub;
		node->addchild((yyvsp[-1]));
		(yyval) = node;
	}
#line 2117 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 71:
#line 459 "main.y" /* yacc.c:1646  */
    {
		Node *node = new Node(Node_Operator);
		node->optype = Op_UMINUS;
		node->createleftchild((yyvsp[0]));
		(yyval) = node;
	}
#line 2128 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 72:
#line 465 "main.y" /* yacc.c:1646  */
    {
		Node *node = new Node(Node_Operator);
		node->optype = Op_AndBit;
		node->createleftchild((yyvsp[-2]));
		node->createrightchild((yyvsp[0]));
		(yyval) = node;
	}
#line 2140 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 73:
#line 472 "main.y" /* yacc.c:1646  */
    {
		Node *node = new Node(Node_Operator);
		node->optype = Op_OrBit;
		node->createleftchild((yyvsp[-2]));
		node->createrightchild((yyvsp[0]));
		(yyval) = node;
	}
#line 2152 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 74:
#line 479 "main.y" /* yacc.c:1646  */
    {
        Node *node = new Node(Node_Operator);
        node->optype = Op_Equal;
        node->createleftchild((yyvsp[-2]));
		node->createrightchild((yyvsp[0]));
        (yyval) = node;
    }
#line 2164 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 75:
#line 486 "main.y" /* yacc.c:1646  */
    {
        Node *node = new Node(Node_Operator);
        node->optype = Op_NotEqual;
        node->createleftchild((yyvsp[-2]));
		node->createrightchild((yyvsp[0]));
        (yyval) = node;
    }
#line 2176 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 76:
#line 493 "main.y" /* yacc.c:1646  */
    {
    	Node *node = new Node(Node_Operator);
        node->optype = Op_And;
        node->createleftchild((yyvsp[-2]));
		node->createrightchild((yyvsp[0]));
        (yyval) = node;
    }
#line 2188 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 77:
#line 500 "main.y" /* yacc.c:1646  */
    {
    	Node *node = new Node(Node_Operator);
        node->optype = Op_Or;
        node->createleftchild((yyvsp[-2]));
		node->createrightchild((yyvsp[0]));
        (yyval) = node;
    }
#line 2200 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 78:
#line 507 "main.y" /* yacc.c:1646  */
    {
		Node *node = new Node(Node_Operator);
		node->optype = Op_Big;
		node->createleftchild((yyvsp[-2]));
		node->createrightchild((yyvsp[0]));
		(yyval) = node;
	}
#line 2212 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 79:
#line 514 "main.y" /* yacc.c:1646  */
    {
		Node *node = new Node(Node_Operator);
		node->optype = Op_Small;
		node->createleftchild((yyvsp[-2]));
		node->createrightchild((yyvsp[0]));
		(yyval) = node;
	}
#line 2224 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 80:
#line 521 "main.y" /* yacc.c:1646  */
    {
		Node *node = new Node(Node_Operator);
		node->optype = Op_BigEqual;
		node->createleftchild((yyvsp[-2]));
		node->createrightchild((yyvsp[0]));
		(yyval) = node;
	}
#line 2236 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 81:
#line 528 "main.y" /* yacc.c:1646  */
    {
		Node *node = new Node(Node_Operator);
		node->optype = Op_SmallEqual;
		node->createleftchild((yyvsp[-2]));
		node->createrightchild((yyvsp[0]));
		(yyval) = node;
	}
#line 2248 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 82:
#line 535 "main.y" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[-1]);        
    }
#line 2256 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 83:
#line 538 "main.y" /* yacc.c:1646  */
    {
		Node *node = new Node(Node_Operator);
		node->optype = Op_Not;
		node->addchild((yyvsp[0]));
		(yyval) = node;
	}
#line 2267 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 84:
#line 547 "main.y" /* yacc.c:1646  */
    {
		Node *node = new Node(Node_Type);
		node->tytype = Type_Int;
		(yyval) = node;
	}
#line 2277 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 85:
#line 552 "main.y" /* yacc.c:1646  */
    {
		Node *node = new Node(Node_Type);
		node->tytype = Type_Char;
		(yyval) = node;
	}
#line 2287 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 86:
#line 557 "main.y" /* yacc.c:1646  */
    {
		Node *node = new Node(Node_Type);
		node->tytype = Type_ConstInt;
		(yyval) = node;
	}
#line 2297 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 87:
#line 562 "main.y" /* yacc.c:1646  */
    {
		Node *node = new Node(Node_Type);
		node->tytype = Type_ConstChar;
		(yyval) = node;
	}
#line 2307 "main.tab.cc" /* yacc.c:1646  */
    break;

  case 88:
#line 567 "main.y" /* yacc.c:1646  */
    {
		Node *node = new Node(Node_Type);
		node->tytype = Type_String;
		(yyval) = node;
	}
#line 2317 "main.tab.cc" /* yacc.c:1646  */
    break;


#line 2321 "main.tab.cc" /* yacc.c:1646  */
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

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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
                  yystos[*yyssp], yyvsp);
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
#line 575 "main.y" /* yacc.c:1906  */

