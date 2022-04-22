/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_LANG_TAB_H_INCLUDED
# define YY_YY_LANG_TAB_H_INCLUDED
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
    VARIABLE = 258,
    BODY = 259,
    CONSTANTE = 260,
    IDF = 261,
    AS = 262,
    IDP = 263,
    DOCP = 264,
    SUB = 265,
    OR = 266,
    AND = 267,
    SUP = 268,
    SUPE = 269,
    INF = 270,
    INFE = 271,
    EGA = 272,
    DIF = 273,
    NOT = 274,
    AFF = 275,
    INPUT = 276,
    OUTPUT = 277,
    IF = 278,
    THEN = 279,
    ELSE = 280,
    DO = 281,
    WHILE = 282,
    FOR = 283,
    UNTIL = 284,
    ARRAY = 285,
    INT = 286,
    FLT = 287,
    STR = 288,
    CHR = 289,
    BOL = 290,
    INTEGER = 291,
    FLOAT = 292,
    CHAR = 293,
    STRING = 294,
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 13 "lang.y"

    char* id; char* type; int entier; double reel; char* chaine;
    struct {int type;char* res;}NT;

#line 123 "lang.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_LANG_TAB_H_INCLUDED  */
