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

#ifndef YY_HSQL_BISON_PARSER_H_INCLUDED
# define YY_HSQL_BISON_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef HSQL_DEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define HSQL_DEBUG 1
#  else
#   define HSQL_DEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define HSQL_DEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined HSQL_DEBUG */
#if HSQL_DEBUG
extern int hsql_debug;
#endif
/* "%code requires" blocks.  */
#line 35 "bison_parser.y" /* yacc.c:1909  */

// %code requires block

#include "../sql/statements.h"
#include "../SQLParserResult.h"
#include "parser_typedef.h"

// Auto update column and line number
#define YY_USER_ACTION \
		yylloc->first_line = yylloc->last_line; \
		yylloc->first_column = yylloc->last_column; \
		for(int i = 0; yytext[i] != '\0'; i++) { \
			yylloc->total_column++; \
				if(yytext[i] == '\n') { \
						yylloc->last_line++; \
						yylloc->last_column = 0; \
				} \
				else { \
						yylloc->last_column++; \
				} \
		}

#line 75 "bison_parser.h" /* yacc.c:1909  */

/* Token type.  */
#ifndef HSQL_TOKENTYPE
# define HSQL_TOKENTYPE
  enum hsql_tokentype
  {
    SQL_IDENTIFIER = 258,
    SQL_STRING = 259,
    SQL_FLOATVAL = 260,
    SQL_INTVAL = 261,
    SQL_AUTO_INCREMENT = 262,
    SQL_DEALLOCATE = 263,
    SQL_MEDIUMBLOB = 264,
    SQL_MEDIUMTEXT = 265,
    SQL_PARAMETERS = 266,
    SQL_INTERSECT = 267,
    SQL_MEDIUMINT = 268,
    SQL_TEMPORARY = 269,
    SQL_TIMESTAMP = 270,
    SQL_DATETIME = 271,
    SQL_DISTINCT = 272,
    SQL_LONGBLOB = 273,
    SQL_LONGTEXT = 274,
    SQL_NVARCHAR = 275,
    SQL_RESTRICT = 276,
    SQL_SMALLINT = 277,
    SQL_TINYBLOB = 278,
    SQL_TINYTEXT = 279,
    SQL_TRUNCATE = 280,
    SQL_UNSIGNED = 281,
    SQL_ANALYZE = 282,
    SQL_BETWEEN = 283,
    SQL_CASCADE = 284,
    SQL_COLUMNS = 285,
    SQL_CONTROL = 286,
    SQL_DEFAULT = 287,
    SQL_EXECUTE = 288,
    SQL_EXPLAIN = 289,
    SQL_HISTORY = 290,
    SQL_INTEGER = 291,
    SQL_NATURAL = 292,
    SQL_PREPARE = 293,
    SQL_PRIMARY = 294,
    SQL_SCHEMAS = 295,
    SQL_SPATIAL = 296,
    SQL_TINYINT = 297,
    SQL_VARCHAR = 298,
    SQL_VIRTUAL = 299,
    SQL_BEFORE = 300,
    SQL_BIGINT = 301,
    SQL_COLUMN = 302,
    SQL_CREATE = 303,
    SQL_DELETE = 304,
    SQL_DIRECT = 305,
    SQL_DOUBLE = 306,
    SQL_ESCAPE = 307,
    SQL_EXCEPT = 308,
    SQL_EXISTS = 309,
    SQL_GLOBAL = 310,
    SQL_HAVING = 311,
    SQL_IMPORT = 312,
    SQL_INSERT = 313,
    SQL_ISNULL = 314,
    SQL_OFFSET = 315,
    SQL_RENAME = 316,
    SQL_SCHEMA = 317,
    SQL_SELECT = 318,
    SQL_SORTED = 319,
    SQL_TABLES = 320,
    SQL_UNIQUE = 321,
    SQL_UNLOAD = 322,
    SQL_UPDATE = 323,
    SQL_VALUES = 324,
    SQL_AFTER = 325,
    SQL_ALTER = 326,
    SQL_ARRAY = 327,
    SQL_CROSS = 328,
    SQL_DELTA = 329,
    SQL_FLOAT = 330,
    SQL_GROUP = 331,
    SQL_INDEX = 332,
    SQL_INNER = 333,
    SQL_LIMIT = 334,
    SQL_LOCAL = 335,
    SQL_MERGE = 336,
    SQL_MINUS = 337,
    SQL_ORDER = 338,
    SQL_OUTER = 339,
    SQL_RIGHT = 340,
    SQL_TABLE = 341,
    SQL_UNION = 342,
    SQL_USING = 343,
    SQL_WHERE = 344,
    SQL_BLOB = 345,
    SQL_CALL = 346,
    SQL_CASE = 347,
    SQL_CHAR = 348,
    SQL_DATE = 349,
    SQL_DESC = 350,
    SQL_DROP = 351,
    SQL_ELSE = 352,
    SQL_FILE = 353,
    SQL_FROM = 354,
    SQL_FULL = 355,
    SQL_HASH = 356,
    SQL_HINT = 357,
    SQL_INTO = 358,
    SQL_JOIN = 359,
    SQL_LEFT = 360,
    SQL_LIKE = 361,
    SQL_LOAD = 362,
    SQL_NULL = 363,
    SQL_PART = 364,
    SQL_PLAN = 365,
    SQL_SHOW = 366,
    SQL_TEXT = 367,
    SQL_THEN = 368,
    SQL_TIME = 369,
    SQL_VIEW = 370,
    SQL_WHEN = 371,
    SQL_WITH = 372,
    SQL_ADD = 373,
    SQL_ALL = 374,
    SQL_AND = 375,
    SQL_ASC = 376,
    SQL_CSV = 377,
    SQL_END = 378,
    SQL_FOR = 379,
    SQL_INT = 380,
    SQL_KEY = 381,
    SQL_NOT = 382,
    SQL_OFF = 383,
    SQL_SET = 384,
    SQL_TBL = 385,
    SQL_TOP = 386,
    SQL_AS = 387,
    SQL_BY = 388,
    SQL_IF = 389,
    SQL_IN = 390,
    SQL_IS = 391,
    SQL_OF = 392,
    SQL_ON = 393,
    SQL_OR = 394,
    SQL_TO = 395,
    SQL_EQUALS = 396,
    SQL_NOTEQUALS = 397,
    SQL_ILIKE = 398,
    SQL_LESS = 399,
    SQL_GREATER = 400,
    SQL_LESSEQ = 401,
    SQL_GREATEREQ = 402,
    SQL_NOTNULL = 403,
    SQL_CONCAT = 404,
    SQL_UMINUS = 405
  };
#endif

/* Value type.  */
#if ! defined HSQL_STYPE && ! defined HSQL_STYPE_IS_DECLARED

union HSQL_STYPE
{
#line 93 "bison_parser.y" /* yacc.c:1909  */

	double fval;
	int64_t ival;
	char* sval;
	uintmax_t uval;
	bool bval;

	hsql::SQLStatement* statement;
	hsql::SelectStatement* 	select_stmt;
	hsql::ImportStatement* 	import_stmt;
	hsql::CreateStatement* 	create_stmt;
	hsql::InsertStatement* 	insert_stmt;
	hsql::DeleteStatement* 	delete_stmt;
	hsql::UpdateStatement* 	update_stmt;
	hsql::DropStatement*   	drop_stmt;
	hsql::PrepareStatement* prep_stmt;
	hsql::ExecuteStatement* exec_stmt;
	hsql::ShowStatement*    show_stmt;

	hsql::TableRef* table;
	hsql::Expr* expr;
	hsql::OrderDescription* order;
	hsql::OrderType order_type;
	hsql::LimitDescription* limit;
	hsql::ColumnDefinition* column_t;
	hsql::GroupByDescription* group_t;
	hsql::UpdateClause* update_t;

	std::vector<hsql::SQLStatement*>* stmt_vec;

	std::vector<char*>* str_vec;
	std::vector<hsql::TableRef*>* table_vec;
	std::vector<hsql::ColumnDefinition*>* column_vec;
	std::vector<hsql::UpdateClause*>* update_vec;
	std::vector<hsql::Expr*>* expr_vec;
	std::vector<hsql::OrderDescription*>* order_vec;

#line 276 "bison_parser.h" /* yacc.c:1909  */
};

typedef union HSQL_STYPE HSQL_STYPE;
# define HSQL_STYPE_IS_TRIVIAL 1
# define HSQL_STYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined HSQL_LTYPE && ! defined HSQL_LTYPE_IS_DECLARED
typedef struct HSQL_LTYPE HSQL_LTYPE;
struct HSQL_LTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define HSQL_LTYPE_IS_DECLARED 1
# define HSQL_LTYPE_IS_TRIVIAL 1
#endif



int hsql_parse (hsql::SQLParserResult* result, yyscan_t scanner);

#endif /* !YY_HSQL_BISON_PARSER_H_INCLUDED  */
