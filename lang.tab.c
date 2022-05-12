
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
int arrayType, if_BZ;


/* Line 189 of yacc.c  */
#line 89 "lang.tab.c"

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
     SFINT = 307,
     SFFLT = 308,
     SFSTR = 309,
     SFCHR = 310,
     SFBOL = 311,
     AFC = 312,
     OPR = 313,
     CPR = 314,
     QU = 315
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 15 "lang.y"

    char* id; char* type; int entier; double reel; char* chaine;
    struct {int type;char* res;}NT;



/* Line 214 of yacc.c  */
#line 192 "lang.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 204 "lang.tab.c"

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
#define YYLAST   258

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  68
/* YYNRULES -- Number of states.  */
#define YYNSTATES  229

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   315

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
      55,    56,    57,    58,    59,    60
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,    13,    17,    21,    24,    26,    34,
      44,    49,    51,    62,    63,    65,    67,    69,    76,    77,
      81,    85,    89,    93,    97,   107,   112,   113,   117,   121,
     124,   126,   128,   130,   132,   134,   136,   138,   146,   150,
     154,   158,   162,   166,   168,   170,   172,   179,   185,   190,
     192,   196,   202,   203,   214,   222,   230,   231,   233,   240,
     247,   252,   259,   266,   273,   280,   287,   294,   307
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      62,     0,    -1,    63,    65,    64,    -1,    40,    44,     9,
       8,    41,    -1,    43,     9,    41,    -1,    67,    73,    66,
      -1,    67,    66,    -1,    66,    -1,    40,     4,    41,    76,
      43,     4,    41,    -1,    40,    10,     3,    41,    68,    43,
      10,     3,    41,    -1,    40,    72,    42,    68,    -1,    69,
      -1,    40,    21,     7,    70,    41,    71,    43,    21,    41,
      69,    -1,    -1,    22,    -1,    23,    -1,    25,    -1,    40,
       6,    50,    27,    42,    71,    -1,    -1,     6,     7,    22,
      -1,     6,     7,    23,    -1,     6,     7,    25,    -1,     6,
       7,    24,    -1,     6,     7,    26,    -1,    40,    10,     5,
      41,    74,    43,    10,     5,    41,    -1,    40,    75,    42,
      74,    -1,    -1,     6,    57,    27,    -1,     6,    57,    28,
      -1,    76,    77,    -1,    77,    -1,    78,    -1,    84,    -1,
      88,    -1,    89,    -1,    80,    -1,    81,    -1,    40,    11,
      50,     6,    51,    79,    42,    -1,    79,    46,    79,    -1,
      79,    45,    79,    -1,    79,    47,    79,    -1,    79,    48,
      79,    -1,    58,    79,    59,    -1,    27,    -1,    28,    -1,
       6,    -1,    40,    12,    50,     6,    30,    42,    -1,    40,
      13,    50,    82,    42,    -1,    30,    46,     6,    83,    -1,
      30,    -1,    46,    30,    83,    -1,    46,    30,    46,     6,
      83,    -1,    -1,    40,    14,    50,    87,    41,    85,    86,
      43,    14,    41,    -1,    40,    15,    41,    76,    43,    15,
      41,    -1,    40,    16,    41,    76,    43,    16,    41,    -1,
      -1,    79,    -1,    32,    58,    87,    51,    87,    59,    -1,
      31,    58,    87,    51,    87,    59,    -1,    39,    58,    87,
      59,    -1,    33,    58,    87,    51,    87,    59,    -1,    35,
      58,    87,    51,    87,    59,    -1,    34,    58,    87,    51,
      87,    59,    -1,    36,    58,    87,    51,    87,    59,    -1,
      37,    58,    87,    51,    87,    59,    -1,    38,    58,    87,
      51,    87,    59,    -1,    40,    19,     6,    57,    27,    20,
       6,    41,    76,    43,    19,    41,    -1,    40,    17,    41,
      76,    40,    18,    50,    87,    42,    43,    17,    41,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    36,    36,    37,    38,    39,    39,    39,    40,    43,
      44,    45,    47,    47,    48,    49,    50,    52,    56,    58,
      62,    66,    70,    74,    79,    80,    80,    81,    88,    97,
      98,   100,   100,   100,   100,   100,   100,   102,   112,   124,
     136,   148,   160,   161,   162,   163,   167,   187,   188,   188,
     190,   190,   190,   201,   207,   216,   220,   223,   224,   245,
     269,   287,   310,   333,   356,   379,   402,   427,   430
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
  "XLA", "MIN", "ADD", "MUL", "DIV", "BAR", "DP", "V", "SFINT", "SFFLT",
  "SFSTR", "SFCHR", "SFBOL", "AFC", "OPR", "CPR", "QU", "$accept", "s",
  "start", "fin", "program", "body", "variable", "declare", "arrays",
  "arraytype", "arraysdec", "dec", "constante", "ass", "impl", "inst_list",
  "inst", "affect", "exp", "input", "output", "content_out",
  "addition_idf", "condition", "then", "else", "exp_log", "for", "while", 0
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
     315
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    61,    62,    63,    64,    65,    65,    65,    66,    67,
      68,    68,    69,    69,    70,    70,    70,    71,    71,    72,
      72,    72,    72,    72,    73,    74,    74,    75,    75,    76,
      76,    77,    77,    77,    77,    77,    77,    78,    79,    79,
      79,    79,    79,    79,    79,    79,    80,    81,    82,    82,
      83,    83,    83,    84,    85,    86,    86,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    88,    89
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     5,     3,     3,     2,     1,     7,     9,
       4,     1,    10,     0,     1,     1,     1,     6,     0,     3,
       3,     3,     3,     3,     9,     4,     0,     3,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     7,     3,     3,
       3,     3,     3,     1,     1,     1,     6,     5,     4,     1,
       3,     5,     0,    10,     7,     7,     0,     1,     6,     6,
       4,     6,     6,     6,     6,     6,     6,    12,    12
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     1,     0,     0,     7,     0,
       0,     0,     0,     0,     2,     0,     6,     0,     0,     0,
       0,     0,     0,     0,     5,     3,     0,     0,    30,    31,
      35,    36,    32,    33,    34,    13,     4,     0,     0,     0,
       0,     0,     0,     0,     0,    29,     0,     0,    11,    26,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    49,     0,    45,    43,    44,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      57,     0,     0,     0,     8,     0,     0,    13,     0,     0,
       0,     0,     0,     0,     0,    47,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    19,    20,    22,    21,    23,    14,    15,
      16,     0,    10,     0,     0,    26,     0,     0,    46,    52,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    42,
      39,    38,    40,    41,     0,    56,     0,     0,    18,     9,
      27,    28,    25,     0,    37,     0,    48,     0,     0,     0,
       0,     0,     0,     0,     0,    60,     0,     0,     0,     0,
       0,     0,     0,    24,    52,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    50,    59,    58,    61,    63,    62,    64,    65,    66,
       0,     0,     0,     0,     0,     0,     0,    52,     0,     0,
      53,     0,     0,     0,    13,    51,     0,     0,     0,     0,
      18,     0,    12,    54,     0,    68,    67,    17,    55
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    14,     7,     8,     9,    47,    48,   121,
     172,    59,    17,    62,    90,    27,    28,    29,    80,    30,
      31,    66,   156,    32,   145,   168,    81,    33,    34
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -155
static const yytype_int16 yypact[] =
{
     -22,   -12,    22,    -6,     4,  -155,    70,    18,  -155,    16,
      73,    42,    87,    83,  -155,    81,  -155,    72,    74,    76,
      77,    78,   112,   116,  -155,  -155,    65,    62,  -155,  -155,
    -155,  -155,  -155,  -155,  -155,    84,  -155,    80,    75,    79,
      85,    86,    90,   117,   118,  -155,     6,    89,  -155,    88,
     120,   121,   103,    13,    76,    92,    96,   131,   132,    98,
     133,   135,    99,    93,   115,   100,   105,  -155,  -155,  -155,
      94,    95,    97,   101,   102,   104,   106,   107,   108,    15,
      53,   109,   111,   127,  -155,    71,    35,    84,   153,   110,
     119,   147,    15,   126,   152,  -155,    13,    13,    13,    13,
      13,    13,    13,    13,    13,   -31,    15,    15,    15,    15,
     123,    12,   149,  -155,  -155,  -155,  -155,  -155,  -155,  -155,
    -155,   129,  -155,   130,    82,    88,   167,    -9,  -155,   128,
     124,   125,   134,   136,   137,   138,   139,   140,   122,  -155,
      66,    66,  -155,  -155,   163,   143,   142,   173,   144,  -155,
    -155,  -155,  -155,   145,  -155,   150,  -155,    13,    13,    13,
      13,    13,    13,    13,    13,  -155,   154,   177,   151,    13,
     155,   191,   156,  -155,   157,   141,   146,   148,   158,   159,
     160,   161,   162,    76,   165,   184,   166,    76,   164,   180,
       5,  -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,
      63,    76,   168,   169,    64,   175,   170,   128,   189,    68,
    -155,   193,   194,   174,   182,  -155,   183,   199,   185,   186,
     144,   202,  -155,  -155,   187,  -155,  -155,  -155,  -155
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -155,  -155,  -155,  -155,  -155,    45,  -155,   171,    11,  -155,
       9,  -155,  -155,   113,  -155,   -53,   -27,  -155,   -20,  -155,
    -155,  -155,  -154,  -155,  -155,  -155,   -94,  -155,  -155
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      45,    82,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   207,    57,    10,   106,   107,   108,   109,     1,    67,
     191,    67,     5,    38,    39,    40,    41,    58,   139,    42,
     146,    43,     4,   154,     6,   174,   106,   107,   108,   109,
      68,    69,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,   215,    16,    45,    15,   118,   119,   105,
     120,    13,    24,   175,   176,   177,   178,   179,   180,   181,
     182,    79,   127,    79,    11,   186,    38,    39,    40,    41,
      12,    18,    42,    19,    43,    11,   140,   141,   142,   143,
      20,    22,    21,   113,   114,   115,   116,   117,   106,   107,
     108,   109,    26,    26,    26,    44,   208,   212,    26,   150,
     151,   217,    23,   108,   109,    25,    26,    37,    35,    36,
      11,    49,    56,    55,    46,    50,    63,    64,    61,    51,
     200,    54,    60,    65,   204,    52,    53,    84,    85,    86,
      87,    89,    91,    88,    92,    93,    94,    95,   209,    83,
     110,   111,    96,    97,   112,    98,   123,   126,   129,    99,
     100,   125,   101,   144,   102,   103,   104,   124,   128,   147,
     148,   149,   153,    45,   155,   157,   158,    45,   166,   170,
     174,   165,    45,   167,   171,   159,   173,   160,   161,   162,
     163,   164,   169,   184,   185,   183,   187,   188,   202,   189,
     192,   206,   213,   190,   216,   193,   201,   194,   203,   210,
     218,   214,   211,   219,   205,   224,   220,   195,   196,   197,
     198,   199,   221,    58,   223,   222,   225,   226,   228,   227,
       0,     0,     0,     0,     0,     0,     0,     0,   152,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   122
};

static const yytype_int16 yycheck[] =
{
      27,    54,    96,    97,    98,    99,   100,   101,   102,   103,
     104,     6,     6,     9,    45,    46,    47,    48,    40,     6,
     174,     6,     0,    11,    12,    13,    14,    21,    59,    17,
      18,    19,    44,    42,    40,    30,    45,    46,    47,    48,
      27,    28,    27,    28,    31,    32,    33,    34,    35,    36,
      37,    38,    39,   207,     9,    82,    40,    22,    23,    79,
      25,    43,    17,   157,   158,   159,   160,   161,   162,   163,
     164,    58,    92,    58,     4,   169,    11,    12,    13,    14,
      10,     8,    17,    41,    19,     4,   106,   107,   108,   109,
       3,    10,     9,    22,    23,    24,    25,    26,    45,    46,
      47,    48,    40,    40,    40,    43,    43,    43,    40,    27,
      28,    43,    40,    47,    48,    41,    40,     5,    41,    41,
       4,    41,     4,     6,    40,    50,     6,     6,    40,    50,
     183,    41,    43,    30,   187,    50,    50,    41,     7,     7,
      42,     6,    43,    10,    51,    30,    46,    42,   201,    57,
      41,    40,    58,    58,    27,    58,     3,    10,     6,    58,
      58,    42,    58,    40,    58,    58,    58,    57,    42,    20,
      41,    41,     5,   200,    46,    51,    51,   204,    15,     6,
      30,    59,   209,    40,    40,    51,    41,    51,    51,    51,
      51,    51,    50,    16,    43,    41,    41,     6,    14,    43,
      59,    21,    27,    46,    15,    59,    41,    59,    42,    41,
      17,    41,    43,    19,    50,    16,    42,    59,    59,    59,
      59,    59,    40,    21,    41,   214,    41,    41,    41,   220,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    40,    62,    63,    44,     0,    40,    65,    66,    67,
       9,     4,    10,    43,    64,    40,    66,    73,     8,    41,
       3,     9,    10,    40,    66,    41,    40,    76,    77,    78,
      80,    81,    84,    88,    89,    41,    41,     5,    11,    12,
      13,    14,    17,    19,    43,    77,    40,    68,    69,    41,
      50,    50,    50,    50,    41,     6,     4,     6,    21,    72,
      43,    40,    74,     6,     6,    30,    82,     6,    27,    28,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    58,
      79,    87,    76,    57,    41,     7,     7,    42,    10,     6,
      75,    43,    51,    30,    46,    42,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    79,    45,    46,    47,    48,
      41,    40,    27,    22,    23,    24,    25,    26,    22,    23,
      25,    70,    68,     3,    57,    42,    10,    79,    42,     6,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    59,
      79,    79,    79,    79,    40,    85,    18,    20,    41,    41,
      27,    28,    74,     5,    42,    46,    83,    51,    51,    51,
      51,    51,    51,    51,    51,    59,    15,    40,    86,    50,
       6,    40,    71,    41,    30,    87,    87,    87,    87,    87,
      87,    87,    87,    41,    16,    43,    87,    41,     6,    43,
      46,    83,    59,    59,    59,    59,    59,    59,    59,    59,
      76,    41,    14,    42,    76,    50,    21,     6,    43,    76,
      41,    43,    43,    27,    41,    83,    15,    43,    17,    19,
      42,    40,    69,    41,    16,    41,    41,    71,    41
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
        case 14:

/* Line 1455 of yacc.c  */
#line 48 "lang.y"
    {arrayType = 1;;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 49 "lang.y"
    {arrayType = 2;;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 50 "lang.y"
    {arrayType = 3;;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 52 "lang.y"
    {
                                              double_dec(strdup((yyvsp[(2) - (6)].id))); 
                                              insert_type(strdup((yyvsp[(2) - (6)].id)) ,"variable" , arrayType, (yyvsp[(4) - (6)].entier));
                                            ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 58 "lang.y"
    {
                  double_dec(strdup((yyvsp[(1) - (3)].id))); 
                  insert_type(strdup((yyvsp[(1) - (3)].id)) ,"variable" ,1, 0);
                ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 62 "lang.y"
    {
                  double_dec(strdup((yyvsp[(1) - (3)].id))); 
                  insert_type(strdup((yyvsp[(1) - (3)].id)) ,"variable" ,2, 0);
                ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 66 "lang.y"
    {
                  double_dec(strdup((yyvsp[(1) - (3)].id))); 
                  insert_type(strdup((yyvsp[(1) - (3)].id)) ,"variable" ,3, 0);
                ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 70 "lang.y"
    {
                  double_dec(strdup((yyvsp[(1) - (3)].id))); 
                  insert_type(strdup((yyvsp[(1) - (3)].id)) ,"variable" ,4, 0);
                ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 74 "lang.y"
    {
                  double_dec(strdup((yyvsp[(1) - (3)].id))); 
                  insert_type(strdup((yyvsp[(1) - (3)].id)) ,"variable" ,5, 0);
                ;}
    break;

  case 27:

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

  case 28:

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

  case 37:

/* Line 1455 of yacc.c  */
#line 102 "lang.y"
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

  case 38:

/* Line 1455 of yacc.c  */
#line 112 "lang.y"
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

  case 39:

/* Line 1455 of yacc.c  */
#line 124 "lang.y"
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

  case 40:

/* Line 1455 of yacc.c  */
#line 136 "lang.y"
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

  case 41:

/* Line 1455 of yacc.c  */
#line 148 "lang.y"
    {
                    if((yyvsp[(1) - (3)].NT).type != (yyvsp[(3) - (3)].NT).type){
                      yyerror("error semantique uncomptabilite des types \n");
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

  case 42:

/* Line 1455 of yacc.c  */
#line 160 "lang.y"
    {(yyval.NT).type=(yyvsp[(2) - (3)].NT).type; (yyval.NT).res=(yyvsp[(2) - (3)].NT).res;;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 161 "lang.y"
    {(yyval.NT).type = 1; sprintf (temp, "%d",(yyvsp[(1) - (1)].entier)); (yyval.NT).res= strdup(temp);ntemp++; temp[0]='\0';;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 162 "lang.y"
    {(yyval.NT).type = 2; sprintf (temp, "%f",(yyvsp[(1) - (1)].reel)); (yyval.NT).res= strdup(temp);ntemp++; temp[0]='\0';;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 163 "lang.y"
    {dec((yyvsp[(1) - (1)].id)); (yyval.NT).type = typeIdf((yyvsp[(1) - (1)].id)); (yyval.NT).res = strdup((yyvsp[(1) - (1)].id));;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 167 "lang.y"
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

  case 53:

/* Line 1455 of yacc.c  */
#line 201 "lang.y"
    {
                                           if_BZ = qc;
                                           printf("if_bz = %d \n", if_BZ);
                                           generer_quad("BZ", " ", " ", " ");
                                        ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 207 "lang.y"
    {
                                         printf("qcThen = %d \n", qc);
                                         sprintf(temp, "%d", qc);
                                         strcpy(quad[if_BZ].res, temp);
                                         printf("quad = %s \n", quad[if_BZ].oper);
                                         //qc++;
                                         temp[0] ='\0';
                                       ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 216 "lang.y"
    {
                                         printf("qcElse = %d \n", qc);
                                         //qc++;
                                       ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 223 "lang.y"
    {(yyval.NT).res = (yyvsp[(1) - (1)].NT).res;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 224 "lang.y"
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
                                           sprintf(temp, "T%d", ntemp);
                                           ntemp++;
                                           (yyval.NT).res = strdup(temp);
                                           temp[0] ='\0';
                                           generer_quad("=", "0", " ", (yyval.NT).res);
                                        ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 245 "lang.y"
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
                                           sprintf(temp, "T%d", ntemp);
                                           ntemp++;
                                           (yyval.NT).res = strdup(temp);
                                           temp[0] ='\0';
                                           generer_quad("=", "0", " ", (yyval.NT).res);
                                        ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 269 "lang.y"
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
                                           sprintf(temp, "T%d", ntemp);
                                           ntemp++;
                                           (yyval.NT).res = strdup(temp);
                                           temp[0] ='\0';
                                           generer_quad("=", "1", " ", (yyval.NT).res);
                                        ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 287 "lang.y"
    {
                                           sprintf(temp, "T%d", ntemp);
                                           ntemp++;
                                           (yyval.NT).res = strdup(temp);
                                           temp[0] ='\0';
                                           generer_quad("-", (yyvsp[(3) - (6)].NT).res, (yyvsp[(5) - (6)].NT).res, (yyval.NT).res);
                                           sprintf(temp, "%d", qc+3);
                                           generer_quad("BGT", temp, (yyval.NT).res, "0");
                                           temp[0] ='\0';
                                           sprintf(temp, "T%d", ntemp);
                                           ntemp++;
                                           (yyval.NT).res = strdup(temp);
                                           temp[0] ='\0';
                                           generer_quad("=", "0", " ", (yyval.NT).res);
                                           sprintf(temp, "%d", qc+2);
                                           generer_quad("BZ", " ", (yyval.NT).res, temp);
                                           temp[0] ='\0';
                                           sprintf(temp, "T%d", ntemp);
                                           ntemp++;
                                           (yyval.NT).res = strdup(temp);
                                           temp[0] ='\0';
                                           generer_quad("=", "1", " ", (yyval.NT).res);
                                        ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 310 "lang.y"
    {
                                           sprintf(temp, "T%d", ntemp);
                                           ntemp++;
                                           (yyval.NT).res = strdup(temp);
                                           temp[0] ='\0';
                                           generer_quad("-", (yyvsp[(3) - (6)].NT).res, (yyvsp[(5) - (6)].NT).res, (yyval.NT).res);
                                           sprintf(temp, "%d", qc+3);
                                           generer_quad("BLT", temp, (yyval.NT).res, "0");
                                           temp[0] ='\0';
                                           sprintf(temp, "T%d", ntemp);
                                           ntemp++;
                                           (yyval.NT).res = strdup(temp);
                                           temp[0] ='\0';
                                           generer_quad("=", "0", " ", (yyval.NT).res);
                                           sprintf(temp, "%d", qc+2);
                                           generer_quad("BZ", " ", (yyval.NT).res, temp);
                                           temp[0] ='\0';
                                           sprintf(temp, "T%d", ntemp);
                                           ntemp++;
                                           (yyval.NT).res = strdup(temp);
                                           temp[0] ='\0';
                                           generer_quad("=", "1", " ", (yyval.NT).res);
                                        ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 333 "lang.y"
    {
                                           sprintf(temp, "T%d", ntemp);
                                           ntemp++;
                                           (yyval.NT).res = strdup(temp);
                                           temp[0] ='\0';
                                           generer_quad("-", (yyvsp[(3) - (6)].NT).res, (yyvsp[(5) - (6)].NT).res, (yyval.NT).res);
                                           sprintf(temp, "%d", qc+3);
                                           generer_quad("BGE", temp, (yyval.NT).res, "0");
                                           temp[0] ='\0';
                                           sprintf(temp, "T%d", ntemp);
                                           ntemp++;
                                           (yyval.NT).res = strdup(temp);
                                           temp[0] ='\0';
                                           generer_quad("=", "0", " ", (yyval.NT).res);
                                           sprintf(temp, "%d", qc+2);
                                           generer_quad("BZ", " ", (yyval.NT).res, temp);
                                           temp[0] ='\0';
                                           sprintf(temp, "T%d", ntemp);
                                           ntemp++;
                                           (yyval.NT).res = strdup(temp);
                                           temp[0] ='\0';
                                           generer_quad("=", "1", " ", (yyval.NT).res);
                                        ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 356 "lang.y"
    {
                                           sprintf(temp, "T%d", ntemp);
                                           ntemp++;
                                           (yyval.NT).res = strdup(temp);
                                           temp[0] ='\0';
                                           generer_quad("-", (yyvsp[(3) - (6)].NT).res, (yyvsp[(5) - (6)].NT).res, (yyval.NT).res);
                                           sprintf(temp, "%d", qc+3);
                                           generer_quad("BLE", temp, (yyval.NT).res, "0");
                                           temp[0] ='\0';
                                           sprintf(temp, "T%d", ntemp);
                                           ntemp++;
                                           (yyval.NT).res = strdup(temp);
                                           temp[0] ='\0';
                                           generer_quad("=", "0", " ", (yyval.NT).res);
                                           sprintf(temp, "%d", qc+2);
                                           generer_quad("BZ", " ", (yyval.NT).res, temp);
                                           temp[0] ='\0';
                                           sprintf(temp, "T%d", ntemp);
                                           ntemp++;
                                           (yyval.NT).res = strdup(temp);
                                           temp[0] ='\0';
                                           generer_quad("=", "1", " ", (yyval.NT).res);
                                        ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 379 "lang.y"
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
                                           generer_quad("BZ", " ", (yyval.NT).res, temp);
                                           temp[0] ='\0';
                                           sprintf(temp, "T%d", ntemp);
                                           ntemp++;
                                           (yyval.NT).res = strdup(temp);
                                           temp[0] ='\0';
                                           generer_quad("=", "1", " ", (yyval.NT).res);
                                        ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 402 "lang.y"
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
                                           generer_quad("BZ", " ", (yyval.NT).res, temp);
                                           temp[0] ='\0';
                                           sprintf(temp, "T%d", ntemp);
                                           ntemp++;
                                           (yyval.NT).res = strdup(temp);
                                           temp[0] ='\0';
                                           generer_quad("=", "1", " ", (yyval.NT).res);
                                        ;}
    break;



/* Line 1455 of yacc.c  */
#line 2121 "lang.tab.c"
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
#line 432 "lang.y"

int yyerror (char* msg)
{printf (" %s ligne %d colonne %d \n",msg,row,column); exit (0);return 1;}

int main ()
{ yyin = fopen("in.txt", "r");
init();
yyparse ();
printHashTable();
afficher_quad();
fclose (yyin);
}


