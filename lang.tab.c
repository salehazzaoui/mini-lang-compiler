
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "lang.y"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include"TS.h"
#include"RS.h"
#include"Quad.h"
int yylex();
int yyerror(char *);
extern FILE* yyin;
extern int row, column;
int ntemp=1; char temp[12]=""; 
int arrayType, typeV, typeC, if_BZ = 0, if_BR=0, for_BZ = 0, while_BZ=0;
int varType;


/* Line 189 of yacc.c  */
#line 90 "lang.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     VARIABLE = 258,
     BODY = 259,
     CONSTANTE = 260,
     IDF = 261,
     AS = 262,
     IDP = 263,
     DOCP = 264,
     SUB = 265,
     AFF = 266,
     INPUT = 267,
     OUTPUT = 268,
     IF = 269,
     THEN = 270,
     ELSE = 271,
     DO = 272,
     WHILE = 273,
     FOR = 274,
     UNTIL = 275,
     ARRAY = 276,
     INT = 277,
     FLT = 278,
     STR = 279,
     CHR = 280,
     BOL = 281,
     INTEGER = 282,
     FLOAT = 283,
     CHAR = 284,
     STRING = 285,
     OR = 286,
     AND = 287,
     SUP = 288,
     SUPE = 289,
     INF = 290,
     INFE = 291,
     EGA = 292,
     DIF = 293,
     NOT = 294,
     OP = 295,
     CL = 296,
     SCL = 297,
     OCL = 298,
     XLA = 299,
     MIN = 300,
     ADD = 301,
     MUL = 302,
     DIV = 303,
     BAR = 304,
     DP = 305,
     V = 306,
     PV = 307,
     SFINT = 308,
     SFFLT = 309,
     SFSTR = 310,
     SFCHR = 311,
     SFBOL = 312,
     AFC = 313,
     OPR = 314,
     CPR = 315,
     QU = 316
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 16 "lang.y"

    char* id; char* type; int entier; double reel; char* chaine;
    struct {int type;char* res;}NT;



/* Line 214 of yacc.c  */
#line 194 "lang.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 206 "lang.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   254

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  86
/* YYNRULES -- Number of states.  */
#define YYNSTATES  257

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   316

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      55,    56,    57,    58,    59,    60,    61
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,    13,    17,    21,    24,    26,    34,
      44,    50,    52,    55,    59,    61,    64,    67,    70,    73,
      76,    87,    88,    90,    92,    94,    96,    98,   105,   106,
     116,   122,   128,   129,   133,   137,   140,   144,   146,   149,
     152,   155,   158,   161,   164,   166,   168,   170,   172,   174,
     176,   178,   186,   190,   194,   198,   202,   206,   208,   210,
     212,   219,   225,   230,   232,   236,   242,   243,   249,   257,
     258,   267,   273,   275,   282,   289,   294,   301,   308,   315,
     322,   329,   336,   342,   351,   358,   364
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      63,     0,    -1,    64,    66,    65,    -1,    40,    44,     9,
       8,    41,    -1,    43,     9,    41,    -1,    68,    76,    67,
      -1,    68,    67,    -1,    67,    -1,    40,     4,    41,    82,
      43,     4,    41,    -1,    40,    10,     3,    41,    69,    43,
      10,     3,    41,    -1,    40,    70,    42,    52,    69,    -1,
      73,    -1,     6,    71,    -1,    49,     6,    71,    -1,    72,
      -1,     7,    22,    -1,     7,    23,    -1,     7,    25,    -1,
       7,    24,    -1,     7,    26,    -1,    40,    21,     7,    74,
      41,    75,    43,    21,    41,    73,    -1,    -1,    22,    -1,
      23,    -1,    25,    -1,    24,    -1,    26,    -1,    40,     6,
      50,    27,    42,    75,    -1,    -1,    40,    10,     5,    41,
      77,    43,    10,     5,    41,    -1,    40,    78,    42,    52,
      77,    -1,    40,    79,    42,    52,    77,    -1,    -1,     6,
      58,    27,    -1,     6,    58,    28,    -1,     6,    80,    -1,
      49,     6,    80,    -1,    81,    -1,     7,    22,    -1,     7,
      23,    -1,     7,    25,    -1,     7,    24,    -1,     7,    26,
      -1,    82,    83,    -1,    83,    -1,    84,    -1,    90,    -1,
      95,    -1,    97,    -1,    86,    -1,    87,    -1,    40,    11,
      50,     6,    51,    85,    42,    -1,    85,    46,    85,    -1,
      85,    45,    85,    -1,    85,    47,    85,    -1,    85,    48,
      85,    -1,    59,    85,    60,    -1,    27,    -1,    28,    -1,
       6,    -1,    40,    12,    50,     6,    30,    42,    -1,    40,
      13,    50,    88,    42,    -1,    30,    46,     6,    89,    -1,
      30,    -1,    46,    30,    89,    -1,    46,    30,    46,     6,
      89,    -1,    -1,    92,    91,    43,    14,    41,    -1,    40,
      16,    41,    82,    43,    16,    41,    -1,    -1,    93,    40,
      15,    41,    82,    43,    15,    41,    -1,    40,    14,    50,
      94,    41,    -1,    85,    -1,    32,    59,    94,    51,    94,
      60,    -1,    31,    59,    94,    51,    94,    60,    -1,    39,
      59,    94,    60,    -1,    33,    59,    94,    51,    94,    60,
      -1,    35,    59,    94,    51,    94,    60,    -1,    34,    59,
      94,    51,    94,    60,    -1,    36,    59,    94,    51,    94,
      60,    -1,    37,    59,    94,    51,    94,    60,    -1,    38,
      59,    94,    51,    94,    60,    -1,    96,    82,    43,    19,
      41,    -1,    40,    19,     6,    58,    27,    20,     6,    41,
      -1,    98,    94,    42,    43,    17,    41,    -1,    99,    82,
      40,    18,    50,    -1,    40,    17,    41,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    37,    37,    38,    39,    40,    40,    40,    41,    44,
      45,    46,    49,    51,    52,    54,    55,    56,    57,    58,
      62,    62,    63,    64,    65,    66,    67,    69,    74,    78,
      79,    79,    79,    81,    88,    98,   100,   101,   103,   104,
     105,   106,   107,   113,   114,   116,   116,   116,   116,   116,
     116,   118,   128,   140,   152,   164,   178,   179,   180,   181,
     185,   205,   206,   206,   208,   208,   208,   212,   214,   218,
     221,   234,   242,   243,   260,   280,   294,   308,   322,   336,
     350,   369,   390,   398,   409,   415,   418
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "VARIABLE", "BODY", "CONSTANTE", "IDF",
  "AS", "IDP", "DOCP", "SUB", "AFF", "INPUT", "OUTPUT", "IF", "THEN",
  "ELSE", "DO", "WHILE", "FOR", "UNTIL", "ARRAY", "INT", "FLT", "STR",
  "CHR", "BOL", "INTEGER", "FLOAT", "CHAR", "STRING", "OR", "AND", "SUP",
  "SUPE", "INF", "INFE", "EGA", "DIF", "NOT", "OP", "CL", "SCL", "OCL",
  "XLA", "MIN", "ADD", "MUL", "DIV", "BAR", "DP", "V", "PV", "SFINT",
  "SFFLT", "SFSTR", "SFCHR", "SFBOL", "AFC", "OPR", "CPR", "QU", "$accept",
  "s", "start", "fin", "program", "body", "variable", "declare", "dec",
  "listV", "TypeVar", "arrays", "arraytype", "arraysdec", "constante",
  "ass", "impl", "decC", "listC", "TypeCon", "inst_list", "inst", "affect",
  "exp", "input", "output", "content_out", "addition_idf", "condition",
  "else_bloc", "Bcond", "Acond", "exp_log", "for", "Afor", "while",
  "Awhile", "Bwhile", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    62,    63,    64,    65,    66,    66,    66,    67,    68,
      69,    69,    70,    71,    71,    72,    72,    72,    72,    72,
      73,    73,    74,    74,    74,    74,    74,    75,    75,    76,
      77,    77,    77,    78,    78,    79,    80,    80,    81,    81,
      81,    81,    81,    82,    82,    83,    83,    83,    83,    83,
      83,    84,    85,    85,    85,    85,    85,    85,    85,    85,
      86,    87,    88,    88,    89,    89,    89,    90,    91,    91,
      92,    93,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    95,    96,    97,    98,    99
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     5,     3,     3,     2,     1,     7,     9,
       5,     1,     2,     3,     1,     2,     2,     2,     2,     2,
      10,     0,     1,     1,     1,     1,     1,     6,     0,     9,
       5,     5,     0,     3,     3,     2,     3,     1,     2,     2,
       2,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     7,     3,     3,     3,     3,     3,     1,     1,     1,
       6,     5,     4,     1,     3,     5,     0,     5,     7,     0,
       8,     5,     1,     6,     6,     4,     6,     6,     6,     6,
       6,     6,     5,     8,     6,     5,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     1,     0,     0,     7,     0,
       0,     0,     0,     0,     2,     0,     6,     0,     0,     0,
       0,     0,     0,     0,     5,     3,     0,     0,    44,    45,
      49,    50,    46,    69,     0,    47,     0,    48,     0,     0,
      21,     4,     0,     0,     0,     0,     0,     0,     0,     0,
      43,     0,     0,     0,     0,    59,    57,    58,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    72,     0,
       0,     0,     0,    11,    32,     0,     0,     0,     0,    86,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      63,     0,     0,     0,     8,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    56,    53,
      52,    54,    55,     0,     0,     0,     0,    12,    14,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    61,
      71,     0,     0,    67,     0,    82,     0,     0,     0,     0,
       0,     0,     0,     0,    75,     0,    85,    15,    16,    18,
      17,    19,     0,    22,    23,    25,    24,    26,     0,    21,
       0,     0,     0,     0,    35,    37,     0,     0,     0,     0,
      60,    66,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    84,    13,    28,    10,     9,    38,    39,
      41,    40,    42,     0,    33,    34,    32,    32,     0,    51,
       0,    62,     0,     0,     0,    74,    73,    76,    78,    77,
      79,    80,    81,     0,     0,    36,    30,    31,    29,    66,
      83,    68,    70,     0,     0,     0,    64,     0,     0,    66,
       0,    21,    65,    28,     0,    20,    27
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    14,     7,     8,     9,    72,   104,   137,
     138,    73,   178,   234,    17,   107,   143,   144,   184,   185,
      27,    28,    29,    68,    30,    31,   111,   221,    32,    52,
      33,    34,    69,    35,    36,    37,    38,    39
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -185
static const yytype_int16 yypact[] =
{
     -21,    15,    67,    60,    84,  -185,    53,    81,  -185,    86,
     124,    92,   131,   126,  -185,    62,  -185,    96,    97,    99,
     100,   102,   132,   136,  -185,  -185,    77,   -36,  -185,  -185,
    -185,  -185,  -185,   104,   105,  -185,    99,  -185,    -3,    99,
     106,  -185,   107,   103,   108,   109,   110,   111,   141,   138,
    -185,   133,   112,   135,   -17,  -185,  -185,  -185,    95,    98,
     113,   114,   115,   116,   117,   118,   119,    14,    75,   120,
     121,    39,   122,  -185,   123,   145,   150,   134,    -3,  -185,
     125,   127,   128,   152,   129,   148,    -3,    -3,    -3,    -3,
      -3,    -3,    -3,    -3,    -3,     4,    14,    14,    14,    14,
     137,    57,    -2,   164,   139,   169,   176,   142,   140,   154,
     143,   144,   146,   161,  -185,    99,   149,    99,   151,   147,
     153,   155,   156,   157,   158,   159,   160,   162,  -185,    30,
      30,  -185,  -185,   177,   163,    83,   187,  -185,  -185,    88,
     165,   192,    -5,   170,   172,   186,    14,   173,   191,  -185,
    -185,   179,    18,  -185,    52,  -185,    -3,    -3,    -3,    -3,
      -3,    -3,    -3,    -3,  -185,   175,  -185,  -185,  -185,  -185,
    -185,  -185,    -2,  -185,  -185,  -185,  -185,  -185,   178,   106,
     180,    93,   194,   101,  -185,  -185,   166,   168,   196,    56,
    -185,   181,   197,   189,   208,   171,   174,   182,   183,   184,
     185,   188,   190,  -185,  -185,   193,  -185,  -185,  -185,  -185,
    -185,  -185,  -185,    -1,  -185,  -185,   123,   123,   195,  -185,
     198,  -185,   199,   200,   205,  -185,  -185,  -185,  -185,  -185,
    -185,  -185,  -185,   218,   204,  -185,  -185,  -185,  -185,   203,
    -185,  -185,  -185,   201,   209,    16,  -185,   202,   211,   181,
     212,   213,  -185,   193,   214,  -185,  -185
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -185,  -185,  -185,  -185,  -185,    45,  -185,    23,  -185,    54,
    -185,   -26,  -185,   -16,  -185,   -86,  -185,  -185,    19,  -185,
     -18,   -27,  -185,   -59,  -185,  -185,  -185,  -184,  -185,  -185,
    -185,  -185,   -77,  -185,  -185,  -185,  -185,  -185
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      50,   112,   181,    55,    26,   135,   181,    49,    95,   119,
     120,   121,   122,   123,   124,   125,   126,   127,    54,     1,
      55,    70,   249,    26,    56,    57,    85,    50,    58,    59,
      60,    61,    62,    63,    64,    65,    66,   129,   130,   131,
     132,    56,    57,    50,   182,   102,   239,   136,   182,    96,
      97,    98,    99,   183,    16,   246,    67,    11,    26,     4,
     103,   193,    24,    12,   128,   252,    11,     5,    43,    44,
      45,    46,    22,    67,    47,   134,    48,    98,    99,   195,
     196,   197,   198,   199,   200,   201,   202,   189,    43,    44,
      45,    46,    26,    10,    47,   194,    48,   152,   219,   154,
       6,    96,    97,    98,    99,   167,   168,   169,   170,   171,
     173,   174,   175,   176,   177,   208,   209,   210,   211,   212,
      96,    97,    98,    99,    13,    50,    15,    50,   214,   215,
     236,   237,    18,    19,    20,    21,    23,    42,    25,    26,
      11,    40,    81,    41,    51,    53,    71,    80,    74,    82,
      84,   108,    79,    75,    86,    83,   109,    87,    76,    77,
      78,   101,   100,   106,   110,   105,   116,   118,   114,   115,
     117,   139,    88,    89,    90,    91,    92,    93,    94,   141,
     133,   140,   142,   113,   147,   145,   149,   150,   151,   148,
     153,   146,   155,   172,   165,   180,   188,   191,   156,   192,
     213,   218,   206,   222,   157,   223,   158,   159,   160,   161,
     162,   163,   186,   166,   187,   190,   203,   179,   216,   205,
     217,   207,   164,   224,   243,   255,   204,   220,   239,   250,
     248,   225,   235,   233,   226,   103,   238,   256,     0,     0,
     240,   241,   227,   228,   229,   230,   242,   244,   231,   245,
     232,   247,   251,   254,   253
};

static const yytype_int16 yycheck[] =
{
      27,    78,     7,     6,    40,     7,     7,    43,    67,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    36,    40,
       6,    39,     6,    40,    27,    28,    43,    54,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    96,    97,    98,
      99,    27,    28,    70,    49,     6,    30,    49,    49,    45,
      46,    47,    48,    58,     9,   239,    59,     4,    40,    44,
      21,    43,    17,    10,    60,   249,     4,     0,    11,    12,
      13,    14,    10,    59,    17,    18,    19,    47,    48,   156,
     157,   158,   159,   160,   161,   162,   163,   146,    11,    12,
      13,    14,    40,     9,    17,    43,    19,   115,    42,   117,
      40,    45,    46,    47,    48,    22,    23,    24,    25,    26,
      22,    23,    24,    25,    26,    22,    23,    24,    25,    26,
      45,    46,    47,    48,    43,   152,    40,   154,    27,    28,
     216,   217,     8,    41,     3,     9,    40,     5,    41,    40,
       4,    41,     4,    41,    40,    40,    40,     6,    41,    16,
      15,     6,    41,    50,    59,    43,     6,    59,    50,    50,
      50,    40,    42,    40,    30,    43,    14,    19,    41,    41,
      41,     7,    59,    59,    59,    59,    59,    59,    59,    10,
      43,    42,     6,    58,    30,    43,    42,    41,    27,    46,
      41,    51,    41,     6,    17,     3,    10,     6,    51,    20,
       6,     5,   179,     6,    51,    16,    51,    51,    51,    51,
      51,    51,    42,    50,    42,    42,    41,    52,    52,    41,
      52,    41,    60,    15,     6,   251,   172,    46,    30,    27,
      21,    60,   213,    40,    60,    21,    41,   253,    -1,    -1,
      41,    41,    60,    60,    60,    60,    41,    43,    60,    46,
      60,    50,    41,    40,    42
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    40,    63,    64,    44,     0,    40,    66,    67,    68,
       9,     4,    10,    43,    65,    40,    67,    76,     8,    41,
       3,     9,    10,    40,    67,    41,    40,    82,    83,    84,
      86,    87,    90,    92,    93,    95,    96,    97,    98,    99,
      41,    41,     5,    11,    12,    13,    14,    17,    19,    43,
      83,    40,    91,    40,    82,     6,    27,    28,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    59,    85,    94,
      82,    40,    69,    73,    41,    50,    50,    50,    50,    41,
       6,     4,    16,    43,    15,    43,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    85,    45,    46,    47,    48,
      42,    40,     6,    21,    70,    43,    40,    77,     6,     6,
      30,    88,    94,    58,    41,    41,    14,    41,    19,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    60,    85,
      85,    85,    85,    43,    18,     7,    49,    71,    72,     7,
      42,    10,     6,    78,    79,    43,    51,    30,    46,    42,
      41,    27,    82,    41,    82,    41,    51,    51,    51,    51,
      51,    51,    51,    51,    60,    17,    50,    22,    23,    24,
      25,    26,     6,    22,    23,    24,    25,    26,    74,    52,
       3,     7,    49,    58,    80,    81,    42,    42,    10,    85,
      42,     6,    20,    43,    43,    94,    94,    94,    94,    94,
      94,    94,    94,    41,    71,    41,    69,    41,    22,    23,
      24,    25,    26,     6,    27,    28,    52,    52,     5,    42,
      46,    89,     6,    16,    15,    60,    60,    60,    60,    60,
      60,    60,    60,    40,    75,    80,    77,    77,    41,    30,
      41,    41,    41,     6,    43,    46,    89,    50,    21,     6,
      27,    41,    89,    42,    40,    73,    75
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 12:

/* Line 1455 of yacc.c  */
#line 49 "lang.y"
    {double_dec(strdup((yyvsp[(1) - (2)].id)));insert_type(strdup((yyvsp[(1) - (2)].id)) ,"variable" ,typeV, 0);;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 51 "lang.y"
    {double_dec(strdup((yyvsp[(2) - (3)].id))); insert_type(strdup((yyvsp[(2) - (3)].id)) ,"variable" ,typeV, 0);;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 54 "lang.y"
    {typeV=1;;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 55 "lang.y"
    {typeV=2;;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 56 "lang.y"
    {typeV=3;;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 57 "lang.y"
    {typeV=4;;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 58 "lang.y"
    {typeV=5;;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 63 "lang.y"
    {arrayType = 1;;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 64 "lang.y"
    {arrayType = 2;;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 65 "lang.y"
    {arrayType = 3;;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 66 "lang.y"
    {arrayType = 4;;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 67 "lang.y"
    {arrayType = 5;;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 70 "lang.y"
    {
              double_dec(strdup((yyvsp[(2) - (6)].id))); 
              insert_type(strdup((yyvsp[(2) - (6)].id)) ,"variable" , arrayType, (yyvsp[(4) - (6)].entier));
            ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 81 "lang.y"
    {
                        double_dec(strdup((yyvsp[(1) - (3)].id))); 
                        insert_type(strdup((yyvsp[(1) - (3)].id)) ,"constante" ,1, 0);
                        sprintf (temp, "%d",(yyvsp[(3) - (3)].entier));
                        generer_quad("=", temp, " ", (yyvsp[(1) - (3)].id));
                        ntemp++; temp[0]='\0';
                      ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 88 "lang.y"
    {
                        double_dec(strdup((yyvsp[(1) - (3)].id)));
                        insert_type(strdup((yyvsp[(1) - (3)].id)) ,"constante" ,2, 0);
                        sprintf (temp, "%f",(yyvsp[(3) - (3)].reel));
                        generer_quad("=", temp, " ", (yyvsp[(1) - (3)].id));
                        ntemp++; temp[0]='\0';
                      ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 98 "lang.y"
    {double_dec(strdup((yyvsp[(1) - (2)].id)));insert_type(strdup((yyvsp[(1) - (2)].id)) ,"constante" ,typeC, 0);;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 100 "lang.y"
    {double_dec(strdup((yyvsp[(2) - (3)].id))); insert_type(strdup((yyvsp[(2) - (3)].id)) ,"constante" ,typeC, 0);;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 103 "lang.y"
    {typeC=1;;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 104 "lang.y"
    {typeC=2;;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 105 "lang.y"
    {typeC=3;;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 106 "lang.y"
    {typeC=4;;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 107 "lang.y"
    {typeC=5;;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 118 "lang.y"
    {
                                        dec((yyvsp[(4) - (7)].id));
                                        check_constante((yyvsp[(4) - (7)].id));
                                        if(typeIdf((yyvsp[(4) - (7)].id)) != (yyvsp[(6) - (7)].NT).type){
                                          yyerror("error semantique uncomptabilite des types \n");
                                        }else{
                                          generer_quad("=", (yyvsp[(6) - (7)].NT).res, " ", (yyvsp[(4) - (7)].id));
                                        }
                                    ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 128 "lang.y"
    {
                    if((yyvsp[(1) - (3)].NT).type != (yyvsp[(3) - (3)].NT).type){
                      yyerror("error semantique uncomptabilite des types \n");
                    }else{
                      (yyval.NT).type=(yyvsp[(1) - (3)].NT).type;   
                      sprintf(temp,"T%d",ntemp);
                      ntemp++;
                      (yyval.NT).res=strdup(temp);
                      temp[0]='\0';
							        generer_quad("+",(yyvsp[(1) - (3)].NT).res,(yyvsp[(3) - (3)].NT).res,(yyval.NT).res);
                    }
                  ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 140 "lang.y"
    {
                    if((yyvsp[(1) - (3)].NT).type != (yyvsp[(3) - (3)].NT).type){
                      yyerror("error semantique uncomptabilite des types \n");
                    }else{
                      (yyval.NT).type=(yyvsp[(1) - (3)].NT).type;   
                      sprintf(temp,"T%d",ntemp);
                      ntemp++;
                      (yyval.NT).res=strdup(temp);
                      temp[0]='\0';
							        generer_quad("-",(yyvsp[(1) - (3)].NT).res,(yyvsp[(3) - (3)].NT).res,(yyval.NT).res);
                    }
                  ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 152 "lang.y"
    {
                    if((yyvsp[(1) - (3)].NT).type != (yyvsp[(3) - (3)].NT).type){
                      yyerror("error semantique uncomptabilite des types \n");
                    }else{
                      (yyval.NT).type=(yyvsp[(1) - (3)].NT).type;   
                      sprintf(temp,"T%d",ntemp);
                      ntemp++;
                      (yyval.NT).res=strdup(temp);
                      temp[0]='\0';
							        generer_quad("*",(yyvsp[(1) - (3)].NT).res,(yyvsp[(3) - (3)].NT).res,(yyval.NT).res);
                    }
                  ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 164 "lang.y"
    {
                    if((yyvsp[(1) - (3)].NT).type != (yyvsp[(3) - (3)].NT).type){
                      yyerror("error semantique uncomptabilite des types \n");
                    }else if((yyvsp[(3) - (3)].NT).res == 0){
                      yyerror("error semantique divise sur zero \n");
                    }else{
                      (yyval.NT).type=(yyvsp[(1) - (3)].NT).type;   
                      sprintf(temp,"T%d",ntemp);
                      ntemp++;
                      (yyval.NT).res=strdup(temp);
                      temp[0]='\0';
							        generer_quad("/",(yyvsp[(1) - (3)].NT).res,(yyvsp[(3) - (3)].NT).res,(yyval.NT).res);
                    }
                  ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 178 "lang.y"
    {(yyval.NT).type=(yyvsp[(2) - (3)].NT).type; (yyval.NT).res=(yyvsp[(2) - (3)].NT).res;;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 179 "lang.y"
    {(yyval.NT).type = 1; sprintf (temp, "%d",(yyvsp[(1) - (1)].entier)); (yyval.NT).res= strdup(temp);ntemp++; temp[0]='\0';;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 180 "lang.y"
    {(yyval.NT).type = 2; sprintf (temp, "%f",(yyvsp[(1) - (1)].reel)); (yyval.NT).res= strdup(temp);ntemp++; temp[0]='\0';;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 181 "lang.y"
    {dec((yyvsp[(1) - (1)].id)); (yyval.NT).type = typeIdf((yyvsp[(1) - (1)].id)); (yyval.NT).res = strdup((yyvsp[(1) - (1)].id));;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 185 "lang.y"
    {
                                    dec((yyvsp[(4) - (6)].id));
                                    printf("la string est : %s \n", (yyvsp[(5) - (6)].chaine));
                                    if(strstr((yyvsp[(5) - (6)].chaine), "$") != NULL){
                                      printf("Elle inclued dollar \n");
                                    }
                                    if(strstr((yyvsp[(5) - (6)].chaine), "%") != NULL){
                                      printf("Elle inclued porsontage \n");
                                    }
                                    if(strstr((yyvsp[(5) - (6)].chaine), "#") != NULL){
                                      printf("Elle inclued dyaz \n");
                                    }
                                    if(strstr((yyvsp[(5) - (6)].chaine), "&") != NULL){
                                      printf("Elle inclued and \n");
                                    }
                                    if(strstr((yyvsp[(5) - (6)].chaine), "@") != NULL){
                                      printf("Elle inclued arobast \n");
                                    }
                                  ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 214 "lang.y"
    {
                                                  sprintf(temp, "%d", qc);
                                                  strcpy(quad[if_BR].res, temp);
                                              ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 221 "lang.y"
    {
                                         if_BR = qc;
                                         if_BZ = pile_pop();
                                         printf("pile bz pop = %d \n", if_BZ);
                                         printf("qcThen = %d \n", qc);
                                         printf("if_bz = %d \n", if_BZ);
                                         generer_quad("BR", " ", " ", " ");
                                         sprintf(temp, "%d", qc);
                                         strcpy(quad[if_BZ].res, temp);
                                         printf("quad = %s \n", quad[if_BZ].oper);
                              
                                       ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 234 "lang.y"
    {
                                  //if_BZ = qc;
                                  pile_push(qc);
                                  generer_quad("BZ", " ", (yyvsp[(4) - (5)].NT).res, " ");
                              ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 242 "lang.y"
    {(yyval.NT).res = (yyvsp[(1) - (1)].NT).res;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 243 "lang.y"
    {
                                           sprintf(temp, "%d", qc+4);
                                           generer_quad("BZ", " ", (yyvsp[(3) - (6)].NT).res, temp);
                                           temp[0] ='\0';
                                           sprintf(temp, "%d", qc+3);
                                           generer_quad("BZ", " ", (yyvsp[(5) - (6)].NT).res, temp);
                                           temp[0] ='\0';
                                           sprintf(temp, "T%d", ntemp);
                                           ntemp++;
                                           (yyval.NT).res = strdup(temp);
                                           temp[0] ='\0';
                                           generer_quad("=", "1", " ", (yyval.NT).res);
                                           sprintf(temp, "%d", qc+2);
                                           generer_quad("BR", " ", " ", temp);
                                           temp[0] ='\0';
                                           generer_quad("=", "0", " ", (yyval.NT).res);
                                        ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 260 "lang.y"
    {
                                           sprintf(temp, "%d", qc+3);
                                           generer_quad("BZ", " ", (yyvsp[(3) - (6)].NT).res, temp);
                                           temp[0] ='\0';
                                           sprintf(temp, "T%d", ntemp);
                                           ntemp++;
                                           (yyval.NT).res = strdup(temp);
                                           temp[0] ='\0';
                                           generer_quad("=", "1", " ", (yyval.NT).res);
                                           sprintf(temp, "%d", qc+4);
                                           generer_quad("BR", " ", " ", temp);
                                           temp[0] ='\0';
                                           sprintf(temp, "%d", qc+2);
                                           generer_quad("BZ", " ", (yyvsp[(5) - (6)].NT).res, temp);
                                           temp[0] ='\0';
                                           sprintf(temp, "%d", qc-2);
                                           generer_quad("BR", " ", " ", temp);
                                           temp[0] ='\0';
                                           generer_quad("=", "0", " ", (yyval.NT).res);
                                        ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 280 "lang.y"
    {
                                           sprintf(temp, "%d", qc+3);
                                           generer_quad("BZ", " ", (yyvsp[(3) - (4)].NT).res, temp);
                                           temp[0] ='\0';
                                           sprintf(temp, "T%d", ntemp);
                                           ntemp++;
                                           (yyval.NT).res = strdup(temp);
                                           temp[0] ='\0';
                                           generer_quad("=", "0", " ", (yyval.NT).res);
                                           sprintf(temp, "%d", qc+2);
                                           generer_quad("BR", " ", " ", temp);
                                           temp[0] ='\0';
                                           generer_quad("=", "1", " ", (yyval.NT).res);
                                        ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 294 "lang.y"
    {
                                           sprintf(temp, "%d", qc+3);
                                           generer_quad("BGT", (yyvsp[(3) - (6)].NT).res, (yyvsp[(5) - (6)].NT).res, temp);
                                           temp[0] ='\0';
                                           sprintf(temp, "T%d", ntemp);
                                           ntemp++;
                                           (yyval.NT).res = strdup(temp);
                                           temp[0] ='\0';
                                           generer_quad("=", "0", " ", (yyval.NT).res);
                                           sprintf(temp, "%d", qc+2);
                                           generer_quad("BR", " ", " ", temp);
                                           temp[0] ='\0';
                                           generer_quad("=", "1", " ", (yyval.NT).res);
                                        ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 308 "lang.y"
    {
                                           sprintf(temp, "%d", qc+3);
                                           generer_quad("BLT", (yyvsp[(3) - (6)].NT).res, (yyvsp[(5) - (6)].NT).res, temp);
                                           temp[0] ='\0';
                                           sprintf(temp, "T%d", ntemp);
                                           ntemp++;
                                           (yyval.NT).res = strdup(temp);
                                           temp[0] ='\0';
                                           generer_quad("=", "0", " ", (yyval.NT).res);
                                           sprintf(temp, "%d", qc+2);
                                           generer_quad("BR", " ", " ", temp);
                                           temp[0] ='\0';
                                           generer_quad("=", "1", " ", (yyval.NT).res);
                                        ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 322 "lang.y"
    {
                                           sprintf(temp, "%d", qc+3);
                                           generer_quad("BGE", (yyvsp[(3) - (6)].NT).res, (yyvsp[(5) - (6)].NT).res, temp);
                                           temp[0] ='\0';
                                           sprintf(temp, "T%d", ntemp);
                                           ntemp++;
                                           (yyval.NT).res = strdup(temp);
                                           temp[0] ='\0';
                                           generer_quad("=", "0", " ", (yyval.NT).res);
                                           sprintf(temp, "%d", qc+2);
                                           generer_quad("BR", " ", " ", temp);
                                           temp[0] ='\0';
                                           generer_quad("=", "1", " ", (yyval.NT).res);
                                        ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 336 "lang.y"
    {
                                           sprintf(temp, "%d", qc+3);
                                           generer_quad("BLE", (yyvsp[(3) - (6)].NT).res, (yyvsp[(5) - (6)].NT).res, temp);
                                           temp[0] ='\0';
                                           sprintf(temp, "T%d", ntemp);
                                           ntemp++;
                                           (yyval.NT).res = strdup(temp);
                                           temp[0] ='\0';
                                           generer_quad("=", "0", " ", (yyval.NT).res);
                                           sprintf(temp, "%d", qc+2);
                                           generer_quad("BR", " ", " ", temp);
                                           temp[0] ='\0';
                                           generer_quad("=", "1", " ", (yyval.NT).res);
                                        ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 350 "lang.y"
    {
                                           sprintf(temp, "T%d", ntemp);
                                           ntemp++;
                                           (yyval.NT).res = strdup(temp);
                                           temp[0] ='\0';
                                           generer_quad("-", (yyvsp[(3) - (6)].NT).res, (yyvsp[(5) - (6)].NT).res, (yyval.NT).res);
                                           sprintf(temp, "%d", qc+3);
                                           generer_quad("BZ", " ", (yyval.NT).res, temp);
                                           temp[0] ='\0';
                                           sprintf(temp, "T%d", ntemp);
                                           ntemp++;
                                           (yyval.NT).res = strdup(temp);
                                           temp[0] ='\0';
                                           generer_quad("=", "0", " ", (yyval.NT).res);
                                           sprintf(temp, "%d", qc+2);
                                           generer_quad("BR", " ", " ", temp);
                                           temp[0] ='\0';
                                           generer_quad("=", "1", " ", (yyval.NT).res);
                                        ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 369 "lang.y"
    {
                                           sprintf(temp, "T%d", ntemp);
                                           ntemp++;
                                           (yyval.NT).res = strdup(temp);
                                           temp[0] ='\0';
                                           generer_quad("-", (yyvsp[(3) - (6)].NT).res, (yyvsp[(5) - (6)].NT).res, (yyval.NT).res);
                                           sprintf(temp, "%d", qc+3);
                                           generer_quad("BNZ", " ", (yyval.NT).res, temp);
                                           temp[0] ='\0';
                                           sprintf(temp, "T%d", ntemp);
                                           ntemp++;
                                           (yyval.NT).res = strdup(temp);
                                           temp[0] ='\0';
                                           generer_quad("=", "0", " ", (yyval.NT).res);
                                           sprintf(temp, "%d", qc+2);
                                          generer_quad("BR", " ", " ", temp);
                                           temp[0] ='\0';
                                           generer_quad("=", "1", " ", (yyval.NT).res);
                                        ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 390 "lang.y"
    {
                                  for_BZ = pile_pop_1();
                                  sprintf(temp, "%d", qc+1);
                                  strcpy(quad[for_BZ].res, temp);
                                  sprintf(temp, "%d", for_BZ);
                                  generer_quad("BR", " ", " ", temp);
                                ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 398 "lang.y"
    {
                                            dec((yyvsp[(3) - (8)].id)); 
                                            dec((yyvsp[(7) - (8)].id));
                                            sprintf(temp, "%d", (yyvsp[(5) - (8)].entier));
                                            generer_quad("=", temp, " ", (yyvsp[(3) - (8)].id));   
                                            pile_push_1(qc);
                                            generer_quad("BGT", (yyvsp[(3) - (8)].id), (yyvsp[(7) - (8)].id), " ");
                                          ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 409 "lang.y"
    {
                                          while_BZ = pile_pop_2();
                                          sprintf(temp, "%d", while_BZ);
                                          generer_quad("BZ", " ", (yyvsp[(2) - (6)].NT).res, temp);
                                        ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 418 "lang.y"
    { 
                    printf(" qc in debut while = %d \n" , qc); 
                    pile_push_2(qc);
                  ;}
    break;



/* Line 1455 of yacc.c  */
#line 2209 "lang.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 424 "lang.y"

int yyerror (char* msg)
{printf (" %s ligne %d colonne %d \n",msg,row,column); exit (0);return 1;}

int main ()
{ 
yyin = fopen("in.txt", "r");
init();
yyparse ();
printHashTable();
afficher_quad();
fclose (yyin);
}


