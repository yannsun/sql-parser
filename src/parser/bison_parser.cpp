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
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Substitute the type names.  */
#define YYSTYPE         HSQL_STYPE
#define YYLTYPE         HSQL_LTYPE
/* Substitute the variable and function names.  */
#define yyparse         hsql_parse
#define yylex           hsql_lex
#define yyerror         hsql_error
#define yydebug         hsql_debug
#define yynerrs         hsql_nerrs


/* Copy the first part of user declarations.  */
#line 1 "bison_parser.y" /* yacc.c:339  */

/**
 * bison_parser.y
 * defines bison_parser.h
 * outputs bison_parser.c
 *
 * Grammar File Spec: http://dinosaur.compilertools.net/bison/bison_6.html
 *
 */
/*********************************
 ** Section 1: C Declarations
 *********************************/

#include "bison_parser.h"
#include "flex_lexer.h"

#include <stdio.h>
#include <string.h>

using namespace hsql;

int yyerror(YYLTYPE* llocp, SQLParserResult* result, yyscan_t scanner, const char *msg) {
	result->setIsValid(false);
	result->setErrorDetails(strdup(msg), llocp->first_line, llocp->first_column);
	return 0;
}


#line 103 "bison_parser.cpp" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "bison_parser.h".  */
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
#line 35 "bison_parser.y" /* yacc.c:355  */

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

#line 164 "bison_parser.cpp" /* yacc.c:355  */

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
#line 93 "bison_parser.y" /* yacc.c:355  */

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

#line 365 "bison_parser.cpp" /* yacc.c:355  */
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

/* Copy the second part of user declarations.  */

#line 395 "bison_parser.cpp" /* yacc.c:358  */

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
         || (defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL \
             && defined HSQL_STYPE_IS_TRIVIAL && HSQL_STYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  52
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   646

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  168
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  86
/* YYNRULES -- Number of rules.  */
#define YYNRULES  218
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  386

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   405

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   156,     2,     2,
     162,   163,   154,   152,   166,   153,   164,   155,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   165,
     145,   141,   146,   167,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   160,     2,   161,   157,     2,     2,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   142,   143,   144,   147,
     148,   149,   150,   151,   158,   159
};

#if HSQL_DEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   244,   244,   265,   266,   270,   274,   278,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   302,   303,   308,
     309,   313,   317,   329,   336,   339,   343,   355,   363,   367,
     377,   380,   393,   399,   405,   415,   416,   420,   421,   425,
     432,   433,   434,   435,   436,   437,   438,   439,   440,   441,
     442,   443,   444,   445,   446,   447,   448,   449,   450,   451,
     452,   453,   454,   464,   468,   472,   484,   492,   504,   510,
     520,   521,   531,   540,   541,   545,   557,   558,   559,   576,
     577,   581,   582,   586,   596,   613,   617,   618,   619,   623,
     624,   628,   640,   641,   645,   649,   654,   655,   659,   664,
     668,   669,   672,   673,   677,   678,   682,   686,   687,   688,
     694,   695,   699,   700,   701,   708,   709,   713,   714,   718,
     725,   726,   727,   728,   729,   733,   734,   735,   736,   737,
     738,   739,   740,   741,   745,   746,   750,   751,   752,   753,
     754,   758,   759,   760,   761,   762,   763,   764,   765,   766,
     767,   768,   772,   773,   777,   778,   779,   780,   785,   787,
     791,   792,   796,   797,   798,   799,   800,   801,   805,   806,
     810,   814,   818,   822,   823,   824,   825,   829,   830,   831,
     832,   836,   841,   842,   846,   850,   854,   866,   867,   877,
     878,   882,   883,   892,   893,   898,   908,   916,   917,   922,
     923,   927,   928,   936,   944,   954,   973,   974,   975,   976,
     977,   978,   979,   980,   985,   994,   995,  1000,  1001
};
#endif

#if HSQL_DEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "STRING", "FLOATVAL",
  "INTVAL", "AUTO_INCREMENT", "DEALLOCATE", "MEDIUMBLOB", "MEDIUMTEXT",
  "PARAMETERS", "INTERSECT", "MEDIUMINT", "TEMPORARY", "TIMESTAMP",
  "DATETIME", "DISTINCT", "LONGBLOB", "LONGTEXT", "NVARCHAR", "RESTRICT",
  "SMALLINT", "TINYBLOB", "TINYTEXT", "TRUNCATE", "UNSIGNED", "ANALYZE",
  "BETWEEN", "CASCADE", "COLUMNS", "CONTROL", "DEFAULT", "EXECUTE",
  "EXPLAIN", "HISTORY", "INTEGER", "NATURAL", "PREPARE", "PRIMARY",
  "SCHEMAS", "SPATIAL", "TINYINT", "VARCHAR", "VIRTUAL", "BEFORE",
  "BIGINT", "COLUMN", "CREATE", "DELETE", "DIRECT", "DOUBLE", "ESCAPE",
  "EXCEPT", "EXISTS", "GLOBAL", "HAVING", "IMPORT", "INSERT", "ISNULL",
  "OFFSET", "RENAME", "SCHEMA", "SELECT", "SORTED", "TABLES", "UNIQUE",
  "UNLOAD", "UPDATE", "VALUES", "AFTER", "ALTER", "ARRAY", "CROSS",
  "DELTA", "FLOAT", "GROUP", "INDEX", "INNER", "LIMIT", "LOCAL", "MERGE",
  "MINUS", "ORDER", "OUTER", "RIGHT", "TABLE", "UNION", "USING", "WHERE",
  "BLOB", "CALL", "CASE", "CHAR", "DATE", "DESC", "DROP", "ELSE", "FILE",
  "FROM", "FULL", "HASH", "HINT", "INTO", "JOIN", "LEFT", "LIKE", "LOAD",
  "NULL", "PART", "PLAN", "SHOW", "TEXT", "THEN", "TIME", "VIEW", "WHEN",
  "WITH", "ADD", "ALL", "AND", "ASC", "CSV", "END", "FOR", "INT", "KEY",
  "NOT", "OFF", "SET", "TBL", "TOP", "AS", "BY", "IF", "IN", "IS", "OF",
  "ON", "OR", "TO", "'='", "EQUALS", "NOTEQUALS", "ILIKE", "'<'", "'>'",
  "LESS", "GREATER", "LESSEQ", "GREATEREQ", "NOTNULL", "'+'", "'-'", "'*'",
  "'/'", "'%'", "'^'", "CONCAT", "UMINUS", "'['", "']'", "'('", "')'",
  "'.'", "';'", "','", "'?'", "$accept", "input", "statement_list",
  "statement", "preparable_statement", "opt_hints", "hint_list", "hint",
  "prepare_statement", "prepare_target_query", "execute_statement",
  "import_statement", "import_file_type", "file_path", "show_statement",
  "create_statement", "opt_not_exists", "column_def_commalist",
  "column_def", "column_type", "drop_statement", "delete_statement",
  "truncate_statement", "insert_statement", "opt_column_list",
  "update_statement", "update_clause_commalist", "update_clause",
  "select_statement", "select_with_paren", "select_paren_or_clause",
  "select_no_paren", "set_operator", "set_type", "opt_all",
  "select_clause", "opt_distinct", "select_list", "from_clause",
  "opt_where", "opt_group", "opt_having", "opt_order", "order_list",
  "order_desc", "opt_order_type", "opt_top", "opt_limit", "expr_list",
  "literal_list", "expr_alias", "expr", "operand", "scalar_expr",
  "unary_expr", "binary_expr", "logic_expr", "in_expr", "case_expr",
  "exists_expr", "comp_expr", "function_expr", "array_expr", "array_index",
  "between_expr", "column_name", "literal", "string_literal",
  "num_literal", "int_literal", "null_literal", "param_expr", "table_ref",
  "table_ref_atomic", "nonjoin_table_ref_atomic", "table_ref_commalist",
  "table_ref_name", "table_ref_name_no_alias", "table_name", "alias",
  "opt_alias", "join_clause", "opt_join_type", "join_condition",
  "opt_semicolon", "ident_commalist", YY_NULLPTR
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,    61,   396,   397,   398,    60,    62,   399,   400,   401,
     402,   403,    43,    45,    42,    47,    37,    94,   404,   405,
      91,    93,    40,    41,    46,    59,    44,    63
};
# endif

#define YYPACT_NINF -228

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-228)))

#define YYTABLE_NINF -214

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-214)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     241,    -9,    35,    86,    92,    27,   -46,     6,   -73,   -14,
      35,    61,    50,   -42,   143,   -16,  -228,    40,    40,  -228,
    -228,  -228,  -228,  -228,  -228,  -228,  -228,  -228,  -228,    21,
    -228,    15,   158,    -1,  -228,    33,    90,    54,    54,    35,
      88,    35,   194,   184,    98,  -228,    35,    35,    35,  -228,
      68,    81,  -228,   241,  -228,   115,  -228,  -228,  -228,  -228,
    -228,   -42,   118,   108,   -42,   174,  -228,   251,     8,   253,
     131,    35,    35,   173,  -228,   166,   105,  -228,  -228,  -228,
      72,   266,  -228,  -228,  -228,  -228,  -228,  -228,   109,  -228,
     189,  -228,  -228,  -228,    72,   189,   194,  -228,  -228,  -228,
    -228,  -228,  -228,     7,  -228,  -228,  -228,  -228,  -228,  -228,
    -228,  -228,   222,   -80,   105,    72,  -228,   273,   277,    22,
     -61,   122,   121,   169,   148,   178,  -228,   106,   188,   125,
    -228,    47,   219,  -228,  -228,  -228,  -228,  -228,  -228,  -228,
    -228,  -228,  -228,  -228,  -228,  -228,  -228,   147,   -78,  -228,
     289,   174,   127,  -228,   -60,   174,   235,  -228,     8,  -228,
     167,   293,   168,   -94,   200,  -228,  -228,    30,   144,  -228,
      -8,     4,   244,    72,    72,   146,   178,   460,    51,   149,
     -96,     3,   173,    72,  -228,    72,   308,    72,  -228,  -228,
     178,  -228,   178,    42,   151,   -76,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     194,    72,   266,  -228,   152,    49,  -228,  -228,    72,  -228,
    -228,  -228,  -228,   194,  -228,   218,   371,    55,  -228,   -42,
      35,  -228,   314,     8,  -228,    72,  -228,  -228,   155,  -124,
      74,   244,   213,  -228,  -228,   -42,  -228,   -21,  -228,  -228,
      14,  -228,   245,  -228,  -228,  -228,   202,   386,   486,   178,
     162,   106,  -228,   212,   486,   486,   486,   274,   274,   274,
     274,    51,    51,    78,    78,    78,   103,   170,   165,   -94,
    -228,     8,  -228,   289,  -228,  -228,   273,  -228,  -228,  -228,
    -228,  -228,  -228,  -228,  -228,  -228,  -228,  -228,  -228,  -228,
    -228,  -228,  -228,  -228,  -228,  -228,  -228,  -228,  -228,  -228,
    -228,  -228,   293,  -228,  -228,  -228,    56,    66,  -228,  -228,
     178,   164,   171,   224,  -228,  -228,  -228,   252,   254,     3,
     225,  -228,   206,  -228,   178,   486,   106,   172,    79,  -228,
    -228,    80,  -228,  -228,  -228,  -228,  -228,   345,  -228,    14,
       3,  -228,  -228,   119,   175,     3,    72,   460,   179,    89,
    -228,  -228,  -228,   178,  -228,  -228,  -228,     3,   -19,   -25,
    -228,  -228,   428,   119,   181,    72,    72,  -228,  -228,    12,
     -94,  -228,   -94,   180,   185,  -228
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,   111,
       0,     0,     0,     0,     0,   216,     3,    18,    18,    16,
       9,     7,    10,    15,    12,    13,    11,    14,     8,    76,
      77,   103,     0,   197,    67,    25,     0,    36,    36,     0,
       0,     0,     0,    93,     0,   196,     0,     0,     0,    30,
       0,     0,     1,   215,     2,     0,     6,     5,    87,    88,
      86,     0,    90,     0,     0,   114,    65,     0,     0,     0,
       0,     0,     0,    97,    28,     0,    71,   184,   110,    92,
       0,     0,    63,    64,    31,    80,    79,     4,     0,    81,
     103,    82,    89,    85,     0,   103,     0,    83,   198,   181,
     182,   185,   186,     0,   117,   177,   178,   183,   179,   180,
      24,    23,     0,     0,    71,     0,    66,     0,     0,     0,
     173,     0,     0,     0,     0,     0,   175,     0,     0,    94,
     115,   202,   120,   127,   128,   129,   122,   124,   130,   123,
     141,   131,   132,   126,   121,   134,   135,     0,    97,    73,
       0,   114,   102,   104,   109,   114,   112,    26,     0,    35,
       0,     0,     0,    96,     0,    29,   217,     0,     0,    69,
      93,     0,     0,     0,     0,     0,     0,   137,   136,     0,
       0,     0,    97,     0,   200,     0,     0,     0,   201,   119,
       0,   138,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    72,    21,     0,    19,    78,     0,   108,
     107,   106,    84,     0,   118,     0,     0,     0,    37,     0,
       0,    70,     0,     0,   168,     0,   174,   176,     0,     0,
       0,     0,     0,   133,   125,     0,    95,   187,   189,   191,
     202,   190,    99,   116,   152,   199,   153,     0,   148,     0,
       0,     0,   139,     0,   162,   163,   150,   164,   165,   166,
     167,   143,   142,   145,   144,   146,   147,   151,     0,    75,
      74,     0,    17,     0,   105,   113,     0,    61,    57,    46,
      43,    42,    62,    58,    54,    45,    59,    55,    47,    44,
      53,    49,    51,    50,    60,    52,    40,    56,    41,    48,
      39,    33,     0,    34,    27,   218,     0,     0,   160,   170,
       0,     0,     0,     0,   212,   206,   207,   211,   210,     0,
       0,   195,     0,    91,     0,   149,     0,     0,     0,   140,
     171,     0,    20,    32,    38,    68,   169,     0,   161,   202,
       0,   209,   208,   193,   188,     0,     0,   172,     0,     0,
     156,   154,    22,     0,   158,   192,   203,     0,   213,   101,
     157,   155,     0,   194,     0,     0,     0,    98,   159,     0,
     214,   204,   100,   173,     0,   205
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -228,  -228,  -228,   294,  -228,   331,  -228,    67,  -228,  -228,
    -228,  -228,  -228,    65,  -228,  -228,   315,  -228,    44,  -228,
    -228,  -228,  -228,  -228,   243,  -228,  -228,   154,  -209,    36,
     295,   -13,   327,  -228,  -228,    26,   191,  -228,  -228,  -120,
    -228,  -228,     9,  -228,   160,  -228,  -228,  -111,  -165,  -208,
     187,   -93,   -69,  -228,  -228,  -228,  -228,  -228,  -228,  -228,
    -228,  -228,  -228,  -228,  -228,   -12,   -65,  -112,  -228,   -38,
    -228,  -228,  -228,  -205,    32,  -228,  -228,  -228,     0,  -228,
    -227,  -228,  -228,  -228,  -228,  -228
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    14,    15,    16,    17,    56,   215,   216,    18,   111,
      19,    20,    75,   164,    21,    22,    71,   227,   228,   310,
      23,    24,    25,    26,   119,    27,   148,   149,    28,    29,
      90,    30,    61,    62,    93,    31,    80,   128,   182,   116,
     333,   377,    65,   152,   153,   221,    43,    97,   129,   103,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   105,   106,   107,
     108,   109,   246,   247,   248,   354,   249,    44,   250,   188,
     189,   251,   330,   381,    54,   167
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      51,   154,    34,   104,    78,   165,    33,   236,   239,    79,
      45,   115,    99,   100,    77,   383,   323,   184,   323,   160,
     313,     9,   163,   331,   185,   316,   185,    58,   213,    32,
      41,   376,   262,    58,   180,   219,   322,   319,    33,    73,
     217,    76,   183,   187,   222,   187,    82,    83,    84,    50,
     184,   263,   324,    39,   324,   177,   178,   325,   156,   325,
     185,   220,   252,   326,   327,   326,   327,   244,    59,   374,
     317,   113,   114,   341,    59,   120,    99,   100,    77,   187,
      48,   240,   161,  -213,   328,     9,   328,    91,   212,    35,
      91,   168,   254,   224,   256,    36,   338,    89,    63,   151,
      89,   170,    60,   171,   155,    40,   169,   177,    60,   120,
      99,   100,    77,    37,   179,    49,   101,    42,   279,   375,
      13,   257,   365,   258,   353,   154,   121,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   183,    38,    52,   122,   329,   186,    46,   259,    53,
     368,   120,    99,   100,    77,   234,   323,    55,   237,   238,
     121,    66,   373,    67,   123,   245,   126,   185,   104,     9,
     157,   359,   278,   158,   165,   102,    47,   260,   122,   186,
     101,   120,    99,   100,    77,   285,   187,   320,    70,    69,
     335,   369,   324,   231,   185,    68,   232,   325,   123,   124,
      77,    79,   175,   326,   327,   205,   206,   207,   208,   209,
      74,   210,   282,   187,   101,   283,   104,    88,   311,   345,
     122,   312,   158,  -213,   328,   125,   126,    81,   321,   346,
     314,    85,   183,   124,   127,   208,   209,    92,   210,   102,
     123,    94,   361,   362,    86,   183,   158,   190,   337,     1,
     122,   347,   371,    96,    98,   183,   101,   110,   112,   125,
     126,   209,   115,   210,   117,   357,     2,   118,   127,   147,
     123,   150,    63,   102,     3,   176,   159,    99,   191,     4,
     166,   173,   380,   382,   172,   174,   101,   181,   211,     5,
       6,   183,   214,   218,   372,   223,   226,   225,     7,     8,
     229,   125,   126,   230,     9,   176,   233,     9,   241,    10,
     127,   255,   243,   261,   281,   102,   286,   315,   318,   259,
     339,   332,   185,   358,   336,   192,   340,   348,   350,   355,
     210,   125,   126,   191,   349,   360,   351,    11,   352,   356,
     127,   367,   370,   379,   171,   102,   193,    87,   385,    57,
     342,   343,    12,    72,   194,   195,   344,   162,    64,    95,
     196,   235,   197,   198,   199,   200,   280,   384,   201,   202,
     253,   203,   204,   205,   206,   207,   208,   209,   284,   210,
     287,   288,   366,     0,   289,     0,   290,   291,     0,   292,
     293,   294,     0,   295,   296,   297,     0,     0,     0,     0,
       0,     0,     0,    13,   191,     0,     0,   298,     0,     0,
     195,     0,     0,   299,   300,     0,     0,   301,     0,  -214,
    -214,     0,   302,  -214,  -214,     0,   203,   204,   205,   206,
     207,   208,   209,     0,   210,     0,     0,     0,     0,     0,
       0,     0,   363,     0,     0,   191,   303,     0,     0,     0,
       0,   192,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   304,     0,     0,   305,   306,     0,     0,   364,     0,
       0,     0,   242,     0,     0,     0,     0,     0,     0,     0,
       0,   195,     0,   307,     0,   308,   196,   191,   197,   198,
     199,   200,   192,     0,   201,   202,   309,   203,   204,   205,
     206,   207,   208,   209,     0,   210,   334,     0,     0,     0,
       0,     0,     0,   242,     0,     0,     0,     0,     0,   191,
       0,     0,   195,     0,     0,     0,     0,   196,     0,   197,
     198,   199,   200,     0,   192,   201,   202,     0,   203,   204,
     205,   206,   207,   208,   209,   191,   210,     0,     0,     0,
       0,   378,     0,     0,     0,   242,     0,     0,     0,     0,
       0,     0,     0,     0,   195,     0,   192,     0,     0,   196,
       0,   197,   198,   199,   200,     0,     0,   201,   202,     0,
     203,   204,   205,   206,   207,   208,   209,   242,   210,     0,
       0,     0,  -214,     0,     0,     0,   195,     0,     0,     0,
       0,   196,     0,   197,   198,   199,   200,     0,     0,   201,
     202,     0,   203,   204,   205,   206,   207,   208,   209,     0,
     210,     0,   195,     0,     0,     0,     0,  -214,     0,  -214,
    -214,   199,   200,     0,     0,   201,   202,     0,   203,   204,
     205,   206,   207,   208,   209,     0,   210
};

static const yytype_int16 yycheck[] =
{
      13,    94,     2,    68,    42,   117,     3,     3,   173,    17,
      10,    89,     4,     5,     6,     3,    37,     3,    37,    99,
     229,    63,   115,   250,   120,   233,   120,    12,   148,    38,
     103,    56,   108,    12,   127,    95,   245,   161,     3,    39,
     151,    41,   166,   139,   155,   139,    46,    47,    48,    13,
       3,   127,    73,    99,    73,   124,   125,    78,    96,    78,
     120,   121,   182,    84,    85,    84,    85,   163,    53,    88,
     235,    71,    72,   281,    53,     3,     4,     5,     6,   139,
      30,   174,   162,   104,   105,    63,   105,    61,   166,     3,
      64,    69,   185,   158,   187,     3,   261,    61,    83,    90,
      64,   162,    87,   164,    95,    99,   119,   176,    87,     3,
       4,     5,     6,    86,   127,    65,   108,   131,   211,   138,
     162,   190,   349,   192,   329,   218,    54,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   166,   115,     0,    72,   166,   132,    86,   106,   165,
     355,     3,     4,     5,     6,   163,    37,   117,   154,   172,
      54,     3,   367,   164,    92,   162,   154,   120,   233,    63,
     163,   336,   210,   166,   286,   167,   115,   135,    72,   132,
     108,     3,     4,     5,     6,   223,   139,   113,   134,    99,
     259,   356,    73,   163,   120,   162,   166,    78,    92,   127,
       6,    17,    54,    84,    85,   154,   155,   156,   157,   158,
     122,   160,   163,   139,   108,   166,   281,   102,   163,   163,
      72,   166,   166,   104,   105,   153,   154,   129,   241,   163,
     230,   163,   166,   127,   162,   157,   158,   119,   160,   167,
      92,   133,   163,   163,   163,   166,   166,    28,   261,     8,
      72,   320,   163,    79,     3,   166,   108,     4,   127,   153,
     154,   158,    89,   160,    98,   334,    25,   162,   162,     3,
      92,   162,    83,   167,    33,   127,    54,     4,    59,    38,
       3,   160,   375,   376,   162,   116,   108,    99,   141,    48,
      49,   166,     3,   166,   363,    60,     3,   130,    57,    58,
     132,   153,   154,   103,    63,   127,   162,    63,   162,    68,
     162,     3,   163,   162,   162,   167,    98,     3,   163,   106,
     108,    76,   120,   336,   162,   106,   161,   163,   104,   104,
     160,   153,   154,    59,   163,   163,    84,    96,    84,   133,
     162,   166,   163,   162,   164,   167,   127,    53,   163,    18,
     283,   286,   111,    38,   135,   136,   312,   114,    31,    64,
     141,   170,   143,   144,   145,   146,   212,   379,   149,   150,
     183,   152,   153,   154,   155,   156,   157,   158,   218,   160,
       9,    10,   350,    -1,    13,    -1,    15,    16,    -1,    18,
      19,    20,    -1,    22,    23,    24,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   162,    59,    -1,    -1,    36,    -1,    -1,
     136,    -1,    -1,    42,    43,    -1,    -1,    46,    -1,   145,
     146,    -1,    51,   149,   150,    -1,   152,   153,   154,   155,
     156,   157,   158,    -1,   160,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    97,    -1,    -1,    59,    75,    -1,    -1,    -1,
      -1,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    90,    -1,    -1,    93,    94,    -1,    -1,   123,    -1,
      -1,    -1,   127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   136,    -1,   112,    -1,   114,   141,    59,   143,   144,
     145,   146,   106,    -1,   149,   150,   125,   152,   153,   154,
     155,   156,   157,   158,    -1,   160,   120,    -1,    -1,    -1,
      -1,    -1,    -1,   127,    -1,    -1,    -1,    -1,    -1,    59,
      -1,    -1,   136,    -1,    -1,    -1,    -1,   141,    -1,   143,
     144,   145,   146,    -1,   106,   149,   150,    -1,   152,   153,
     154,   155,   156,   157,   158,    59,   160,    -1,    -1,    -1,
      -1,   123,    -1,    -1,    -1,   127,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   136,    -1,   106,    -1,    -1,   141,
      -1,   143,   144,   145,   146,    -1,    -1,   149,   150,    -1,
     152,   153,   154,   155,   156,   157,   158,   127,   160,    -1,
      -1,    -1,   106,    -1,    -1,    -1,   136,    -1,    -1,    -1,
      -1,   141,    -1,   143,   144,   145,   146,    -1,    -1,   149,
     150,    -1,   152,   153,   154,   155,   156,   157,   158,    -1,
     160,    -1,   136,    -1,    -1,    -1,    -1,   141,    -1,   143,
     144,   145,   146,    -1,    -1,   149,   150,    -1,   152,   153,
     154,   155,   156,   157,   158,    -1,   160
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     8,    25,    33,    38,    48,    49,    57,    58,    63,
      68,    96,   111,   162,   169,   170,   171,   172,   176,   178,
     179,   182,   183,   188,   189,   190,   191,   193,   196,   197,
     199,   203,    38,     3,   246,     3,     3,    86,   115,    99,
      99,   103,   131,   214,   245,   246,    86,   115,    30,    65,
     197,   199,     0,   165,   252,   117,   173,   173,    12,    53,
      87,   200,   201,    83,   200,   210,     3,   164,   162,    99,
     134,   184,   184,   246,   122,   180,   246,     6,   237,    17,
     204,   129,   246,   246,   246,   163,   163,   171,   102,   197,
     198,   203,   119,   202,   133,   198,    79,   215,     3,     4,
       5,   108,   167,   217,   234,   235,   236,   237,   238,   239,
       4,   177,   127,   246,   246,    89,   207,    98,   162,   192,
       3,    54,    72,    92,   127,   153,   154,   162,   205,   216,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,     3,   194,   195,
     162,   210,   211,   212,   219,   210,   237,   163,   166,    54,
      99,   162,   192,   219,   181,   235,     3,   253,    69,   199,
     162,   164,   162,   160,   116,    54,   127,   220,   220,   199,
     219,    99,   206,   166,     3,   120,   132,   139,   247,   248,
      28,    59,   106,   127,   135,   136,   141,   143,   144,   145,
     146,   149,   150,   152,   153,   154,   155,   156,   157,   158,
     160,   141,   166,   207,     3,   174,   175,   215,   166,    95,
     121,   213,   215,    60,   234,   130,     3,   185,   186,   132,
     103,   163,   166,   162,   163,   204,     3,   154,   199,   216,
     219,   162,   127,   163,   163,   162,   240,   241,   242,   244,
     246,   249,   207,   218,   219,     3,   219,   220,   220,   106,
     135,   162,   108,   127,   220,   220,   220,   220,   220,   220,
     220,   220,   220,   220,   220,   220,   220,   220,   237,   219,
     195,   162,   163,   166,   212,   237,    98,     9,    10,    13,
      15,    16,    18,    19,    20,    22,    23,    24,    36,    42,
      43,    46,    51,    75,    90,    93,    94,   112,   114,   125,
     187,   163,   166,   196,   246,     3,   217,   216,   163,   161,
     113,   199,   196,    37,    73,    78,    84,    85,   105,   166,
     250,   248,    76,   208,   120,   220,   162,   199,   216,   108,
     161,   217,   175,   181,   186,   163,   163,   220,   163,   163,
     104,    84,    84,   241,   243,   104,   133,   220,   199,   216,
     163,   163,   163,    97,   123,   248,   242,   166,   241,   216,
     163,   163,   220,   241,    88,   138,    56,   209,   123,   162,
     219,   251,   219,     3,   233,   163
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   168,   169,   170,   170,   171,   171,   171,   172,   172,
     172,   172,   172,   172,   172,   172,   172,   173,   173,   174,
     174,   175,   175,   176,   177,   178,   178,   179,   180,   181,
     182,   182,   183,   183,   183,   184,   184,   185,   185,   186,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     187,   187,   187,   188,   188,   188,   189,   190,   191,   191,
     192,   192,   193,   194,   194,   195,   196,   196,   196,   197,
     197,   198,   198,   199,   199,   200,   201,   201,   201,   202,
     202,   203,   204,   204,   205,   206,   207,   207,   208,   208,
     209,   209,   210,   210,   211,   211,   212,   213,   213,   213,
     214,   214,   215,   215,   215,   216,   216,   217,   217,   218,
     219,   219,   219,   219,   219,   220,   220,   220,   220,   220,
     220,   220,   220,   220,   221,   221,   222,   222,   222,   222,
     222,   223,   223,   223,   223,   223,   223,   223,   223,   223,
     223,   223,   224,   224,   225,   225,   225,   225,   226,   226,
     227,   227,   228,   228,   228,   228,   228,   228,   229,   229,
     230,   231,   232,   233,   233,   233,   233,   234,   234,   234,
     234,   235,   236,   236,   237,   238,   239,   240,   240,   241,
     241,   242,   242,   243,   243,   244,   245,   246,   246,   247,
     247,   248,   248,   249,   249,   249,   250,   250,   250,   250,
     250,   250,   250,   250,   251,   252,   252,   253,   253
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     5,     0,     1,
       3,     1,     4,     4,     1,     2,     5,     7,     1,     1,
       2,     3,     8,     7,     7,     3,     0,     1,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     3,     4,     2,     8,     5,
       3,     0,     5,     1,     3,     3,     1,     1,     5,     3,
       3,     1,     1,     3,     5,     2,     1,     1,     1,     1,
       0,     7,     1,     0,     1,     2,     2,     0,     4,     0,
       2,     0,     3,     0,     1,     3,     2,     1,     1,     0,
       2,     0,     2,     4,     0,     1,     3,     1,     3,     2,
       1,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     2,     2,     2,     3,
       4,     1,     3,     3,     3,     3,     3,     3,     3,     4,
       3,     3,     3,     3,     5,     6,     5,     6,     6,     8,
       4,     5,     3,     3,     3,     3,     3,     3,     3,     5,
       4,     4,     5,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     4,     1,     3,     2,     1,     1,     3,     2,
       1,     1,     0,     4,     6,     8,     1,     1,     2,     2,
       1,     1,     1,     0,     1,     1,     0,     1,     3
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
      yyerror (&yylloc, result, scanner, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if HSQL_DEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location, result, scanner); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  YYUSE (result);
  YYUSE (scanner);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, result, scanner);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, hsql::SQLParserResult* result, yyscan_t scanner)
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
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , result, scanner);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, result, scanner); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !HSQL_DEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !HSQL_DEBUG */


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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (result);
  YYUSE (scanner);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
          case 3: /* IDENTIFIER  */
#line 136 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1676 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 4: /* STRING  */
#line 136 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1682 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 5: /* FLOATVAL  */
#line 135 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1688 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 6: /* INTVAL  */
#line 135 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1694 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 170: /* statement_list  */
#line 137 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).stmt_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).stmt_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).stmt_vec));
}
#line 1707 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 171: /* statement  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).statement)); }
#line 1713 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 172: /* preparable_statement  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).statement)); }
#line 1719 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 173: /* opt_hints  */
#line 137 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1732 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 174: /* hint_list  */
#line 137 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1745 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 175: /* hint  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1751 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 176: /* prepare_statement  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).prep_stmt)); }
#line 1757 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 177: /* prepare_target_query  */
#line 136 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1763 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 178: /* execute_statement  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).exec_stmt)); }
#line 1769 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 179: /* import_statement  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).import_stmt)); }
#line 1775 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 180: /* import_file_type  */
#line 135 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1781 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 181: /* file_path  */
#line 136 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1787 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 182: /* show_statement  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).show_stmt)); }
#line 1793 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 183: /* create_statement  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).create_stmt)); }
#line 1799 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 184: /* opt_not_exists  */
#line 135 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1805 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 185: /* column_def_commalist  */
#line 137 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).column_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).column_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).column_vec));
}
#line 1818 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 186: /* column_def  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).column_t)); }
#line 1824 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 187: /* column_type  */
#line 135 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1830 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 188: /* drop_statement  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).drop_stmt)); }
#line 1836 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 189: /* delete_statement  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).delete_stmt)); }
#line 1842 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 190: /* truncate_statement  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).delete_stmt)); }
#line 1848 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 191: /* insert_statement  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).insert_stmt)); }
#line 1854 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 192: /* opt_column_list  */
#line 137 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 1867 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 193: /* update_statement  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).update_stmt)); }
#line 1873 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 194: /* update_clause_commalist  */
#line 137 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).update_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).update_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).update_vec));
}
#line 1886 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 195: /* update_clause  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).update_t)); }
#line 1892 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 196: /* select_statement  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1898 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 197: /* select_with_paren  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1904 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 198: /* select_paren_or_clause  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1910 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 199: /* select_no_paren  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1916 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 203: /* select_clause  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1922 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 204: /* opt_distinct  */
#line 135 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1928 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 205: /* select_list  */
#line 137 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1941 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 206: /* from_clause  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 1947 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 207: /* opt_where  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1953 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 208: /* opt_group  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).group_t)); }
#line 1959 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 209: /* opt_having  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1965 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 210: /* opt_order  */
#line 137 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 1978 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 211: /* order_list  */
#line 137 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 1991 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 212: /* order_desc  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).order)); }
#line 1997 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 213: /* opt_order_type  */
#line 135 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2003 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 214: /* opt_top  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).limit)); }
#line 2009 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 215: /* opt_limit  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).limit)); }
#line 2015 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 216: /* expr_list  */
#line 137 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2028 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 217: /* literal_list  */
#line 137 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2041 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 218: /* expr_alias  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2047 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 219: /* expr  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2053 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 220: /* operand  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2059 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 221: /* scalar_expr  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2065 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 222: /* unary_expr  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2071 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 223: /* binary_expr  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2077 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 224: /* logic_expr  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2083 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 225: /* in_expr  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2089 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 226: /* case_expr  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2095 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 227: /* exists_expr  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2101 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 228: /* comp_expr  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2107 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 229: /* function_expr  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2113 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 230: /* array_expr  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2119 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 231: /* array_index  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2125 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 232: /* between_expr  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2131 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 233: /* column_name  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2137 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 234: /* literal  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2143 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 235: /* string_literal  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2149 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 236: /* num_literal  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2155 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 237: /* int_literal  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2161 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 238: /* null_literal  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2167 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 239: /* param_expr  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2173 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 240: /* table_ref  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2179 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 241: /* table_ref_atomic  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2185 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 242: /* nonjoin_table_ref_atomic  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2191 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 243: /* table_ref_commalist  */
#line 137 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).table_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).table_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).table_vec));
}
#line 2204 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 244: /* table_ref_name  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2210 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 245: /* table_ref_name_no_alias  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2216 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 246: /* table_name  */
#line 136 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 2222 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 247: /* alias  */
#line 136 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 2228 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 248: /* opt_alias  */
#line 136 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 2234 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 249: /* join_clause  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2240 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 250: /* opt_join_type  */
#line 135 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2246 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 251: /* join_condition  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2252 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 253: /* ident_commalist  */
#line 137 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 2265 "bison_parser.cpp" /* yacc.c:1257  */
        break;


      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (hsql::SQLParserResult* result, yyscan_t scanner)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

/* User initialization code.  */
#line 72 "bison_parser.y" /* yacc.c:1429  */
{
	// Initialize
	yylloc.first_column = 0;
	yylloc.last_column = 0;
	yylloc.first_line = 0;
	yylloc.last_line = 0;
	yylloc.total_column = 0;
}

#line 2383 "bison_parser.cpp" /* yacc.c:1429  */
  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
      yychar = yylex (&yylval, &yylloc, scanner);
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
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 244 "bison_parser.y" /* yacc.c:1646  */
    {
			for (SQLStatement* stmt : *(yyvsp[-1].stmt_vec)) {
				// Transfers ownership of the statement.
				result->addStatement(stmt);
			}

			unsigned param_id = 0;
			for (void* param : yyloc.param_list) {
				if (param != nullptr) {
					Expr* expr = (Expr*) param;
					expr->ival = param_id;
					result->addParameter(expr);
					++param_id;
				}
			}
			delete (yyvsp[-1].stmt_vec);
		}
#line 2588 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 265 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.stmt_vec) = new std::vector<SQLStatement*>(); (yyval.stmt_vec)->push_back((yyvsp[0].statement)); }
#line 2594 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 266 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement)); (yyval.stmt_vec) = (yyvsp[-2].stmt_vec); }
#line 2600 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 270 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.statement) = (yyvsp[-1].prep_stmt);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 2609 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 274 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.statement) = (yyvsp[-1].statement);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 2618 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 278 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.statement) = (yyvsp[0].show_stmt);
		}
#line 2626 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 285 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 2632 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 286 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].import_stmt); }
#line 2638 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 287 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 2644 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 288 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 2650 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 289 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 2656 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 290 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 2662 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 291 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 2668 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 292 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 2674 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 293 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 2680 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 302 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 2686 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 303 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = nullptr; }
#line 2692 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 308 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 2698 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 309 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 2704 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 313 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[0].sval);
		}
#line 2713 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 317 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[-3].sval);
			(yyval.expr)->exprList = (yyvsp[-1].expr_vec);
		}
#line 2723 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 329 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.prep_stmt) = new PrepareStatement();
			(yyval.prep_stmt)->name = (yyvsp[-2].sval);
			(yyval.prep_stmt)->query = (yyvsp[0].sval);
		}
#line 2733 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 339 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[0].sval);
		}
#line 2742 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 343 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[-3].sval);
			(yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
		}
#line 2752 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 355 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.import_stmt) = new ImportStatement((ImportType) (yyvsp[-4].uval));
			(yyval.import_stmt)->filePath = (yyvsp[-2].sval);
			(yyval.import_stmt)->tableName = (yyvsp[0].sval);
		}
#line 2762 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 363 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kImportCSV; }
#line 2768 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 367 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = strdup((yyvsp[0].expr)->name); delete (yyvsp[0].expr); }
#line 2774 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 377 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.show_stmt) = new ShowStatement(kShowTables);
		}
#line 2782 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 380 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->name = (yyvsp[0].sval);
		}
#line 2791 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 393 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.create_stmt) = new CreateStatement(kCreateTableFromTbl);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-5].bval);
			(yyval.create_stmt)->tableName = (yyvsp[-4].sval);
			(yyval.create_stmt)->filePath = (yyvsp[0].sval);
		}
#line 2802 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 399 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->tableName = (yyvsp[-3].sval);
			(yyval.create_stmt)->columns = (yyvsp[-1].column_vec);
		}
#line 2813 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 405 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.create_stmt) = new CreateStatement(kCreateView);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->tableName = (yyvsp[-3].sval);
			(yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 2825 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 415 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = true; }
#line 2831 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 416 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = false; }
#line 2837 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 420 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_vec) = new std::vector<ColumnDefinition*>(); (yyval.column_vec)->push_back((yyvsp[0].column_t)); }
#line 2843 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 421 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].column_vec)->push_back((yyvsp[0].column_t)); (yyval.column_vec) = (yyvsp[-2].column_vec); }
#line 2849 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 425 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.column_t) = new ColumnDefinition((yyvsp[-1].sval), (ColumnDefinition::DataType) (yyvsp[0].uval));
		}
#line 2857 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 432 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = ColumnDefinition::DATE; }
#line 2863 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 433 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = ColumnDefinition::TIME; }
#line 2869 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 434 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = ColumnDefinition::DATETIME; }
#line 2875 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 435 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = ColumnDefinition::TIMESTAMP; }
#line 2881 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 436 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = ColumnDefinition::TINYINT; }
#line 2887 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 437 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = ColumnDefinition::SMALLINT; }
#line 2893 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 438 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = ColumnDefinition::MEDIUMINT; }
#line 2899 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 439 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = ColumnDefinition::INTERGER; }
#line 2905 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 440 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = ColumnDefinition::INT; }
#line 2911 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 441 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = ColumnDefinition::BIGINT; }
#line 2917 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 442 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = ColumnDefinition::FLOAT; }
#line 2923 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 443 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = ColumnDefinition::DOUBLE; }
#line 2929 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 444 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = ColumnDefinition::CHAR; }
#line 2935 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 445 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = ColumnDefinition::VARCHAR; }
#line 2941 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 446 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = ColumnDefinition::NVARCHAR; }
#line 2947 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 447 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = ColumnDefinition::TINYTEXT; }
#line 2953 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 448 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = ColumnDefinition::TEXT; }
#line 2959 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 449 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = ColumnDefinition::MEDIUMTEXT; }
#line 2965 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 450 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = ColumnDefinition::LONGTEXT; }
#line 2971 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 451 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = ColumnDefinition::TINYBLOB; }
#line 2977 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 452 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = ColumnDefinition::BLOB; }
#line 2983 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 453 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = ColumnDefinition::MEDIYMBLOB; }
#line 2989 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 454 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = ColumnDefinition::LONGBLOB; }
#line 2995 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 464 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.drop_stmt) = new DropStatement(kDropTable);
			(yyval.drop_stmt)->name = (yyvsp[0].sval);
		}
#line 3004 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 468 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.drop_stmt) = new DropStatement(kDropView);
			(yyval.drop_stmt)->name = (yyvsp[0].sval);
		}
#line 3013 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 472 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
			(yyval.drop_stmt)->name = (yyvsp[0].sval);
		}
#line 3022 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 484 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->tableName = (yyvsp[-1].sval);
			(yyval.delete_stmt)->expr = (yyvsp[0].expr);
		}
#line 3032 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 492 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->tableName = (yyvsp[0].sval);
		}
#line 3041 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 504 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.insert_stmt) = new InsertStatement(kInsertValues);
			(yyval.insert_stmt)->tableName = (yyvsp[-5].sval);
			(yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
			(yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
		}
#line 3052 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 510 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.insert_stmt) = new InsertStatement(kInsertSelect);
			(yyval.insert_stmt)->tableName = (yyvsp[-2].sval);
			(yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
			(yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3063 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 520 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 3069 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 521 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.str_vec) = nullptr; }
#line 3075 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 531 "bison_parser.y" /* yacc.c:1646  */
    {
		(yyval.update_stmt) = new UpdateStatement();
		(yyval.update_stmt)->table = (yyvsp[-3].table);
		(yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
		(yyval.update_stmt)->where = (yyvsp[0].expr);
	}
#line 3086 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 540 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.update_vec) = new std::vector<UpdateClause*>(); (yyval.update_vec)->push_back((yyvsp[0].update_t)); }
#line 3092 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 541 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t)); (yyval.update_vec) = (yyvsp[-2].update_vec); }
#line 3098 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 545 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.update_t) = new UpdateClause();
			(yyval.update_t)->column = (yyvsp[-2].sval);
			(yyval.update_t)->value = (yyvsp[0].expr);
		}
#line 3108 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 559 "bison_parser.y" /* yacc.c:1646  */
    {
			// TODO: allow multiple unions (through linked list)
			// TODO: capture type of set_operator
			// TODO: might overwrite order and limit of first select here
			(yyval.select_stmt) = (yyvsp[-4].select_stmt);
			(yyval.select_stmt)->unionSelect = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != nullptr) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 3127 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 576 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3133 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 577 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3139 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 586 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.select_stmt) = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != nullptr) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 3154 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 596 "bison_parser.y" /* yacc.c:1646  */
    {
			// TODO: allow multiple unions (through linked list)
			// TODO: capture type of set_operator
			// TODO: might overwrite order and limit of first select here
			(yyval.select_stmt) = (yyvsp[-4].select_stmt);
			(yyval.select_stmt)->unionSelect = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != nullptr) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 3173 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 628 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.select_stmt) = new SelectStatement();
			(yyval.select_stmt)->limit = (yyvsp[-5].limit);
			(yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
			(yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
			(yyval.select_stmt)->fromTable = (yyvsp[-2].table);
			(yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
			(yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
		}
#line 3187 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 640 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = true; }
#line 3193 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 641 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = false; }
#line 3199 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 649 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table) = (yyvsp[0].table); }
#line 3205 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 654 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 3211 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 655 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = nullptr; }
#line 3217 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 659 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.group_t) = new GroupByDescription();
			(yyval.group_t)->columns = (yyvsp[-1].expr_vec);
			(yyval.group_t)->having = (yyvsp[0].expr);
		}
#line 3227 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 664 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.group_t) = nullptr; }
#line 3233 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 668 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 3239 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 669 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = nullptr; }
#line 3245 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 672 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 3251 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 673 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_vec) = nullptr; }
#line 3257 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 677 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_vec) = new std::vector<OrderDescription*>(); (yyval.order_vec)->push_back((yyvsp[0].order)); }
#line 3263 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 678 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].order_vec)->push_back((yyvsp[0].order)); (yyval.order_vec) = (yyvsp[-2].order_vec); }
#line 3269 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 682 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 3275 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 686 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_type) = kOrderAsc; }
#line 3281 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 687 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_type) = kOrderDesc; }
#line 3287 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 688 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_type) = kOrderAsc; }
#line 3293 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 694 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription((yyvsp[0].expr)->ival, kNoOffset); delete (yyvsp[0].expr); }
#line 3299 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 695 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = nullptr; }
#line 3305 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 699 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription((yyvsp[0].expr)->ival, kNoOffset); delete (yyvsp[0].expr); }
#line 3311 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 700 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription((yyvsp[-2].expr)->ival, (yyvsp[0].expr)->ival); delete (yyvsp[-2].expr); delete (yyvsp[0].expr); }
#line 3317 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 701 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = nullptr; }
#line 3323 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 708 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3329 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 709 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3335 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 713 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3341 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 714 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3347 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 718 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.expr) = (yyvsp[-1].expr);
			(yyval.expr)->alias = (yyvsp[0].sval);
		}
#line 3356 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 733 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 3362 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 741 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt)); }
#line 3368 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 750 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 3374 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 751 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 3380 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 752 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 3386 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 753 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 3392 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 754 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 3398 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 759 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 3404 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 760 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 3410 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 761 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 3416 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 762 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 3422 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 763 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 3428 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 764 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 3434 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 765 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 3440 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 766 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 3446 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 767 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 3452 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 768 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 3458 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 772 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 3464 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 773 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 3470 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 777 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 3476 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 778 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 3482 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 779 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 3488 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 780 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 3494 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 785 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeCase((yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 3500 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 787 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeCase((yyvsp[-5].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 3506 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 791 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 3512 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 792 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 3518 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 796 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 3524 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 797 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 3530 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 798 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 3536 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 799 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 3542 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 800 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 3548 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 801 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 3554 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 805 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-2].sval), new std::vector<Expr*>(), false); }
#line 3560 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 806 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-4].sval), (yyvsp[-1].expr_vec), (yyvsp[-2].bval)); }
#line 3566 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 810 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 3572 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 814 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 3578 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 818 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3584 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 822 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 3590 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 823 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 3596 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 824 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeStar(); }
#line 3602 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 825 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 3608 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 836 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 3614 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 841 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 3620 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 846 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 3626 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 850 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeNullLiteral(); }
#line 3632 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 854 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.expr) = Expr::makeParameter(yylloc.total_column);
			(yyval.expr)->ival2 = yyloc.param_list.size();
			yyloc.param_list.push_back((yyval.expr));
		}
#line 3642 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 867 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyvsp[0].table_vec)->push_back((yyvsp[-2].table));
			auto tbl = new TableRef(kTableCrossProduct);
			tbl->list = (yyvsp[0].table_vec);
			(yyval.table) = tbl;
		}
#line 3653 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 883 "bison_parser.y" /* yacc.c:1646  */
    {
			auto tbl = new TableRef(kTableSelect);
			tbl->select = (yyvsp[-2].select_stmt);
			tbl->alias = (yyvsp[0].sval);
			(yyval.table) = tbl;
		}
#line 3664 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 892 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table_vec) = new std::vector<TableRef*>(); (yyval.table_vec)->push_back((yyvsp[0].table)); }
#line 3670 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 893 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].table_vec)->push_back((yyvsp[0].table)); (yyval.table_vec) = (yyvsp[-2].table_vec); }
#line 3676 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 898 "bison_parser.y" /* yacc.c:1646  */
    {
			auto tbl = new TableRef(kTableName);
			tbl->name = (yyvsp[-1].sval);
			tbl->alias = (yyvsp[0].sval);
			(yyval.table) = tbl;
		}
#line 3687 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 908 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.table) = new TableRef(kTableName);
			(yyval.table)->name = (yyvsp[0].sval);
		}
#line 3696 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 917 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 3702 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 922 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 3708 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 928 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = nullptr; }
#line 3714 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 937 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = kJoinNatural;
			(yyval.table)->join->left = (yyvsp[-3].table);
			(yyval.table)->join->right = (yyvsp[0].table);
		}
#line 3726 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 945 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = (JoinType) (yyvsp[-4].uval);
			(yyval.table)->join->left = (yyvsp[-5].table);
			(yyval.table)->join->right = (yyvsp[-2].table);
			(yyval.table)->join->condition = (yyvsp[0].expr);
		}
#line 3739 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 955 "bison_parser.y" /* yacc.c:1646  */
    {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = (JoinType) (yyvsp[-6].uval);
			(yyval.table)->join->left = (yyvsp[-7].table);
			(yyval.table)->join->right = (yyvsp[-4].table);
			auto left_col = Expr::makeColumnRef(strdup((yyvsp[-1].expr)->name));
			if ((yyvsp[-1].expr)->alias != nullptr) left_col->alias = strdup((yyvsp[-1].expr)->alias);
			if ((yyvsp[-7].table)->getName() != nullptr) left_col->table = strdup((yyvsp[-7].table)->getName());
			auto right_col = Expr::makeColumnRef(strdup((yyvsp[-1].expr)->name));
			if ((yyvsp[-1].expr)->alias != nullptr) right_col->alias = strdup((yyvsp[-1].expr)->alias);
			if ((yyvsp[-4].table)->getName() != nullptr) right_col->table = strdup((yyvsp[-4].table)->getName());
			(yyval.table)->join->condition = Expr::makeOpBinary(left_col, kOpEquals, right_col);
			delete (yyvsp[-1].expr);
		}
#line 3759 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 973 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinInner; }
#line 3765 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 974 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinOuter; }
#line 3771 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 975 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinLeftOuter; }
#line 3777 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 976 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinRightOuter; }
#line 3783 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 977 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinLeft; }
#line 3789 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 978 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinRight; }
#line 3795 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 979 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinCross; }
#line 3801 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 980 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.uval) = kJoinInner; }
#line 3807 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 1000 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.str_vec) = new std::vector<char*>(); (yyval.str_vec)->push_back((yyvsp[0].sval)); }
#line 3813 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 1001 "bison_parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval)); (yyval.str_vec) = (yyvsp[-2].str_vec); }
#line 3819 "bison_parser.cpp" /* yacc.c:1646  */
    break;


#line 3823 "bison_parser.cpp" /* yacc.c:1646  */
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
  *++yylsp = yyloc;

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
      yyerror (&yylloc, result, scanner, YY_("syntax error"));
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
        yyerror (&yylloc, result, scanner, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc, result, scanner);
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

  yyerror_range[1] = yylsp[1-yylen];
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp, result, scanner);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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
  yyerror (&yylloc, result, scanner, YY_("memory exhausted"));
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
                  yytoken, &yylval, &yylloc, result, scanner);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp, result, scanner);
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
#line 1004 "bison_parser.y" /* yacc.c:1906  */

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */

