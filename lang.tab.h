
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

/* Line 1676 of yacc.c  */
#line 15 "lang.y"

    char* id; char* type; int entier; double reel; char* chaine;
    struct {int type;char* res;}NT;



/* Line 1676 of yacc.c  */
#line 119 "lang.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


