/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
