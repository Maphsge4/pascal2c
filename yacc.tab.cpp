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
#line 1 "yacc.y"

#include "main.h"
#include "yacc.tab.h"

extern "C"
{
void yyerror(const char *s);
int yyparse();
extern int yylex();
}

void yyerror(const char *s, YYLTYPE *loc);

void yyerror(const char *s, int line, int col);

void yyerror(const char *s, int startLine, int startCol, int endLine, int endCol);

extern int yylineno;
extern char *yytext;
extern char lineBuffer[500];
extern int yyleng;
extern int yycolumn;

extern string itos(int num);

bool haveSemanticError = false;
int rec_line, rec_pos;
char rec_buff[505];

Type *ParseTreeHead = NULL;

vector<string> syntaxErrorInformation; //存放语法错误信息


#line 101 "yacc.tab.c"

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
#ifndef YY_YY_YACC_TAB_H_INCLUDED
# define YY_YY_YACC_TAB_H_INCLUDED
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
    PROGRAM = 258,
    CONST = 259,
    VAR = 260,
    ARRAY = 261,
    OF = 262,
    PROCEDURE = 263,
    FUNCTION = 264,
    _BEGIN = 265,
    END = 266,
    IF = 267,
    THEN = 268,
    FOR = 269,
    TO = 270,
    DO = 271,
    ELSE = 272,
    REPEAT = 273,
    UNTIL = 274,
    WHILE = 275,
    IDENTIFIER = 276,
    UINUM = 277,
    UFNUM = 278,
    CHAR = 279,
    TYPE = 280,
    ASSIGNOP = 281,
    RELOP = 282,
    ADDOP = 283,
    MULOP = 284,
    NOT = 285,
    RANGEDOT = 286,
    ADD = 287,
    MUL = 288,
    UMINUS = 289,
    LOWER_THAN_ELSE = 290,
    ONE = 291,
    TWO = 292,
    THREE = 293
  };
#endif

/* Value type.  */
#if !defined YYSTYPE && !defined YYSTYPE_IS_DECLARED
                                                                                                                        typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if !defined YYLTYPE && !defined YYLTYPE_IS_DECLARED
                                                                                                                        typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;

int yyparse(void);

#endif /* !YY_YY_YACC_TAB_H_INCLUDED  */


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
typedef yytype_int16 yy_state_t;

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
#if !defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && !defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
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

#if defined __cplusplus && defined __GNUC__ && !defined __ICC && 6 <= __GNUC__
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

#if !defined yyoverflow || YYERROR_VERBOSE

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
#  if (defined __cplusplus && !defined EXIT_SUCCESS \
       && !((defined YYMALLOC || defined malloc) \
 && (defined YYFREE || defined free)))
                                                                                                                        #   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if !defined malloc && !defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if !defined free && !defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (!defined yyoverflow \
     && (!defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
 && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

                                                                                                                        /* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   354

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  148
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  287

#define YYUNDEFTOK  2
#define YYMAXUTOK   293


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
        {
                0, 2, 2, 2, 2, 2, 2, 2, 2, 2,
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
                45, 46, 35, 32, 47, 33, 44, 36, 2, 2,
                2, 2, 2, 2, 2, 2, 2, 2, 49, 43,
                2, 48, 2, 2, 2, 2, 2, 2, 2, 2,
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
                2, 50, 2, 51, 2, 2, 2, 2, 2, 2,
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
                2, 2, 2, 2, 2, 2, 1, 2, 3, 4,
                5, 6, 7, 8, 9, 10, 11, 12, 13, 14,
                15, 16, 17, 18, 19, 20, 21, 22, 23, 24,
                25, 26, 27, 28, 29, 30, 31, 34, 37, 38,
                39, 40, 41, 42
        };

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
        {
                0, 77, 77, 85, 89, 93, 97, 101, 105, 110,
                115, 122, 127, 131, 135, 139, 143, 147, 151, 157,
                164, 168, 174, 178, 181, 185, 191, 196, 200, 204,
                208, 212, 216, 222, 226, 230, 234, 238, 242, 246,
                250, 254, 258, 264, 268, 271, 275, 281, 286, 290,
                294, 298, 302, 306, 312, 316, 322, 326, 330, 334,
                338, 342, 348, 353, 357, 361, 367, 371, 375, 380,
                384, 390, 394, 399, 403, 407, 411, 415, 419, 425,
                429, 432, 436, 442, 446, 450, 456, 460, 466, 470,
                476, 480, 484, 488, 494, 500, 504, 510, 514, 518,
                524, 528, 532, 536, 541, 545, 552, 556, 560, 564,
                569, 573, 578, 582, 587, 591, 596, 602, 606, 610,
                614, 619, 623, 628, 634, 638, 642, 648, 652, 656,
                662, 666, 670, 674, 678, 684, 688, 692, 698, 702,
                706, 710, 715, 719, 723, 727, 731, 735, 739
        };
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
        {
                "$end", "error", "$undefined", "PROGRAM", "CONST", "VAR", "ARRAY", "OF",
                "PROCEDURE", "FUNCTION", "_BEGIN", "END", "IF", "THEN", "FOR", "TO",
                "DO", "ELSE", "REPEAT", "UNTIL", "WHILE", "IDENTIFIER", "UINUM", "UFNUM",
                "CHAR", "TYPE", "ASSIGNOP", "RELOP", "ADDOP", "MULOP", "NOT", "RANGEDOT",
                "'+'", "'-'", "ADD", "'*'", "'/'", "MUL", "UMINUS", "LOWER_THAN_ELSE",
                "ONE", "TWO", "THREE", "';'", "'.'", "'('", "')'", "','", "'='", "':'",
                "'['", "']'", "$accept", "programstruct", "program_head", "program_body",
                "idlist", "const_declarations", "const_declaration", "const_value",
                "var_declarations", "var_declaration", "type", "period",
                "subprogram_declarations", "subprogram", "subprogram_head",
                "formal_parameter", "parameter_list", "parameter", "var_parameter",
                "value_parameter", "subprogram_body", "compound_statement",
                "statement_list", "statement", "else_part", "variable", "id_varpart",
                "procedure_call", "expression_list", "expression", "simple_expression",
                "term", "factor", YY_NULLPTR
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
     285,   286,    43,    45,   287,    42,    47,   288,   289,   290,
     291,   292,   293,    59,    46,    40,    41,    44,    61,    58,
      91,    93
};
# endif

#define YYPACT_NINF (-151)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-121)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
        {
                312, 93, 21, 98, 108, 121, 112, 109, 7, -151,
                121, 285, 147, 99, 213, 121, 295, 202, 202, 192,
                200, 234, 19, 258, 36, 114, -151, 219, -151, 262,
                270, 102, -151, 136, 236, 216, 46, -151, -151, -151,
                -151, -151, 242, 209, 281, 296, 278, 24, 116, 259,
                -151, -151, -151, -151, -151, 301, -151, -151, -151, -151,
                -151, -151, -151, -151, 286, 289, -151, -151, -151, 275,
                37, -151, 203, 191, 202, 202, 224, 233, 267, 152,
                157, -151, -151, -151, -151, -151, -151, -151, -151, 242,
                242, 214, 1, -151, -151, -151, -151, 269, 33, -151,
                279, 235, 279, 227, 304, 267, 227, 0, -151, 101,
                -151, 300, -151, -151, -151, 121, 121, -151, -151, -151,
                -151, 305, 190, 203, 203, 218, 113, -151, 280, 18,
                -17, -151, -151, -151, 227, 227, 227, -151, 107, 225,
                299, -151, 17, 22, 23, 227, 100, -151, 267, -151,
                267, 227, 213, -151, -151, 302, 13, -151, 14, -151,
                -151, -151, -151, -151, 238, 34, 73, -151, -151, -151,
                306, 307, 146, 105, -151, -151, 8, 267, 267, 227,
                139, 166, 227, 184, 227, 227, 227, 227, 267, 267,
                48, -151, -151, 15, -151, -151, -151, 320, 313, 314,
                315, 327, 314, 29, -151, -151, 316, 169, 250, 250,
                -151, -151, -151, -151, -151, -151, 58, -151, -151, 321,
                321, 153, 227, 299, 227, 299, 153, 227, -151, 324,
                255, -151, -151, -151, -151, 227, -151, 227, 227, -151,
                -151, -151, 309, 106, 317, 318, 173, -151, -151, -151,
                -151, -151, 227, -151, 267, -151, -151, 299, 299, -151,
                227, 227, 227, -151, -151, 322, 323, 325, -151, -151,
                -151, -151, -151, 330, 332, 260, -151, -151, -151, 267,
                267, 267, 267, -151, -151, -151, -151
        };

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
        {
                0, 0, 0, 0, 0, 23, 0, 16, 0, 1,
                23, 0, 0, 0, 44, 23, 0, 0, 17, 0,
                0, 0, 0, 0, 0, 0, 5, 0, 68, 0,
                0, 0, 21, 0, 0, 18, 0, 3, 6, 4,
                2, 24, 0, 0, 25, 22, 0, 0, 0, 0,
                8, 10, 9, 7, 12, 0, 13, 14, 15, 11,
                35, 38, 41, 42, 0, 0, 32, 29, 28, 0,
                0, 45, 0, 0, 46, 43, 0, 0, 113, 0,
                0, 19, 20, 33, 36, 39, 34, 37, 40, 0,
                0, 0, 0, 54, 53, 52, 48, 0, 0, 78,
                80, 77, 80, 0, 0, 113, 0, 121, 102, 0,
                99, 0, 101, 67, 66, 23, 23, 30, 31, 27,
                26, 59, 0, 0, 0, 0, 0, 71, 0, 0,
                120, 138, 139, 148, 0, 0, 0, 140, 0, 129,
                134, 137, 0, 0, 0, 0, 0, 116, 96, 95,
                113, 0, 44, 70, 69, 0, 0, 60, 0, 49,
                50, 51, 47, 81, 0, 0, 0, 85, 86, 87,
                0, 76, 0, 0, 146, 147, 0, 113, 113, 0,
                0, 0, 0, 0, 0, 0, 0, 0, 113, 113,
                0, 125, 118, 0, 98, 97, 100, 0, 0, 0,
                0, 0, 61, 0, 89, 88, 93, 0, 82, 0,
                79, 73, 74, 75, 72, 143, 0, 145, 144, 115,
                115, 127, 0, 130, 0, 132, 128, 0, 135, 0,
                0, 112, 111, 110, 109, 123, 122, 0, 119, 117,
                94, 65, 0, 0, 0, 0, 0, 91, 92, 90,
                84, 83, 142, 141, 113, 104, 103, 131, 133, 136,
                0, 0, 0, 126, 124, 0, 0, 0, 56, 57,
                58, 55, 114, 0, 0, 0, 63, 64, 62, 113,
                113, 113, 113, 106, 107, 108, 105
        };

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
        {
                -151, -151, 348, 211, -6, 176, -151, -12, 198, -151,
                -67, 229, -151, -151, -151, 196, -151, 111, -151, 188,
                237, -48, -151, -102, 134, -78, -151, -151, -129, -96,
                -150, -49, -130
        };

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
        {
                -1, 3, 4, 13, 165, 14, 25, 66, 28, 48,
                94, 156, 49, 79, 80, 127, 166, 167, 168, 169,
                153, 108, 109, 110, 255, 137, 147, 112, 190, 191,
                139, 140, 141
        };

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
        {
                111, 81, 121, 143, 174, 175, 96, 138, 18, 217,
                144, 33, 34, 36, 199, 202, 238, 193, 184, 171,
                39, 47, 7, 186, 188, 72, -120, 111, 173, 221,
                245, 68, 226, 146, 124, 206, 246, 42, 90, 189,
                176, 187, 8, 185, 216, 145, 194, 58, 195, 235,
                146, 122, 19, 228, 218, 196, 159, 160, 162, 252,
                200, 200, 237, 40, 201, 203, 239, 172, 97, 98,
                111, 55, 111, 73, 208, 219, 220, 117, 118, 120,
                55, 55, 125, 207, 43, 91, 233, 234, 229, 230,
                231, 232, 59, 55, 236, 237, 2, 259, 9, 111,
                111, 192, 148, 52, 253, 237, 215, 266, 177, 10,
                111, 111, 149, 15, 163, 44, 209, 74, 164, 210,
                178, 130, 131, 132, 133, 12, 130, 131, 132, 133,
                134, 223, 225, 135, 32, 134, 5, 267, 135, 263,
                222, 264, 263, 26, 150, 136, 53, 213, 23, 240,
                136, 11, 272, 113, 17, 16, 263, 45, 115, 75,
                130, 131, 132, 133, 273, 274, 275, 224, 24, 134,
                248, 214, 135, 257, 270, 258, 111, 283, 284, 285,
                286, 180, 54, 55, 136, 227, 181, 130, 131, 132,
                133, 157, 95, 35, 249, 114, 134, 92, 271, 135,
                116, 111, 111, 111, 111, 130, 131, 132, 133, 92,
                67, 136, 155, 32, 134, 119, 93, 135, 27, 161,
                46, 20, 22, 32, 92, 99, 29, 31, 93, 136,
                60, 61, 62, 63, 101, 60, 61, 62, 63, 204,
                32, 64, 65, 93, 37, 100, 64, 65, 130, 131,
                132, 133, 179, 180, 102, 164, 261, 134, 181, 32,
                135, 281, 57, 60, 61, 62, 63, 76, 77, 78,
                262, 32, 136, 182, 64, 65, 282, 78, 38, 103,
                126, 104, 56, 55, -80, 105, 21, 106, 107, 12,
                -23, 152, 152, -23, -23, -23, 30, 128, 129, 12,
                -23, 41, 69, -23, -23, -23, 50, 83, 84, 85,
                86, 87, 88, 1, 51, 2, 55, 70, 123, 250,
                251, 71, 82, 89, 126, 142, 151, 155, 183, 170,
                78, 211, 212, 198, 244, 241, 242, 243, 254, 260,
                265, 247, 268, 269, 276, 277, 279, 278, 280, 6,
                197, 158, 205, 154, 256
        };

static const yytype_int16 yycheck[] =
        {
                78, 49, 1, 105, 134, 135, 73, 103, 1, 1,
                106, 17, 18, 19, 1, 1, 1, 146, 1, 1,
                1, 27, 1, 1, 1, 1, 26, 105, 45, 179,
                1, 43, 182, 50, 1, 1, 7, 1, 1, 16,
                136, 19, 21, 26, 173, 45, 148, 1, 150, 1,
                50, 50, 45, 183, 46, 151, 123, 124, 125, 1,
                47, 47, 47, 44, 51, 51, 51, 49, 74, 75,
                148, 47, 150, 49, 1, 177, 178, 89, 90, 91,
                47, 47, 49, 49, 48, 48, 188, 189, 184, 185,
                186, 187, 46, 47, 46, 47, 3, 227, 0, 177,
                178, 1, 1, 1, 46, 47, 1, 1, 1, 1,
                188, 189, 11, 1, 1, 1, 43, 1, 5, 46,
                13, 21, 22, 23, 24, 4, 21, 22, 23, 24,
                30, 180, 181, 33, 21, 30, 43, 31, 33, 235,
                1, 237, 238, 44, 43, 45, 44, 1, 1, 197,
                45, 43, 254, 1, 45, 43, 252, 43, 1, 43,
                21, 22, 23, 24, 260, 261, 262, 1, 21, 30,
                1, 25, 33, 222, 1, 224, 254, 279, 280, 281,
                282, 28, 46, 47, 45, 1, 33, 21, 22, 23,
                24, 1, 1, 1, 25, 43, 30, 6, 25, 33,
                43, 279, 280, 281, 282, 21, 22, 23, 24, 6,
                1, 45, 22, 21, 30, 1, 25, 33, 5, 1,
                1, 10, 11, 21, 6, 1, 15, 16, 25, 45,
                21, 22, 23, 24, 1, 21, 22, 23, 24, 1,
                21, 32, 33, 25, 44, 21, 32, 33, 21, 22,
                23, 24, 27, 28, 21, 5, 1, 30, 33, 21,
                33, 1, 46, 21, 22, 23, 24, 8, 9, 10,
                15, 21, 45, 48, 32, 33, 16, 10, 44, 12,
                45, 14, 46, 47, 49, 18, 1, 20, 21, 4,
                5, 115, 116, 8, 9, 10, 1, 101, 102, 4,
                5, 43, 21, 8, 9, 10, 44, 21, 22, 23,
                21, 22, 23, 1, 44, 3, 47, 21, 49, 208,
                209, 43, 21, 48, 45, 21, 26, 22, 29, 49,
                10, 25, 25, 31, 7, 22, 22, 22, 17, 15,
                31, 25, 25, 25, 22, 22, 16, 22, 16, 1,
                152, 122, 164, 116, 220
        };

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
        {
                0, 1, 3, 53, 54, 43, 54, 1, 21, 0,
                1, 43, 4, 55, 57, 1, 43, 45, 1, 45,
                55, 1, 55, 1, 21, 58, 44, 5, 60, 55,
                1, 55, 21, 56, 56, 1, 56, 44, 44, 1,
                44, 43, 1, 48, 1, 43, 1, 56, 61, 64,
                44, 44, 1, 44, 46, 47, 46, 46, 1, 46,
                21, 22, 23, 24, 32, 33, 59, 1, 59, 21,
                21, 43, 1, 49, 1, 43, 8, 9, 10, 65,
                66, 73, 21, 21, 22, 23, 21, 22, 23, 48,
                1, 48, 6, 25, 62, 1, 62, 56, 56, 1,
                21, 1, 21, 12, 14, 18, 20, 21, 73, 74,
                75, 77, 79, 1, 43, 1, 43, 59, 59, 1,
                59, 1, 50, 49, 1, 49, 45, 67, 67, 67,
                21, 22, 23, 24, 30, 33, 45, 77, 81, 82,
                83, 84, 21, 75, 81, 45, 50, 78, 1, 11,
                43, 26, 57, 72, 72, 22, 63, 1, 63, 62,
                62, 1, 62, 1, 5, 56, 68, 69, 70, 71,
                49, 1, 49, 45, 84, 84, 81, 1, 13, 27,
                28, 33, 48, 29, 1, 26, 1, 19, 1, 16,
                80, 81, 1, 80, 75, 75, 81, 60, 31, 1,
                47, 51, 1, 51, 1, 71, 1, 49, 1, 43,
                46, 25, 25, 1, 25, 1, 80, 1, 46, 75,
                75, 82, 1, 83, 1, 83, 82, 1, 84, 81,
                81, 81, 81, 75, 75, 1, 46, 47, 1, 51,
                73, 22, 22, 22, 7, 1, 7, 25, 1, 25,
                69, 69, 1, 46, 17, 76, 76, 83, 83, 84,
                15, 1, 15, 81, 81, 31, 1, 31, 25, 25,
                1, 25, 75, 81, 81, 81, 22, 22, 22, 16,
                16, 1, 16, 75, 75, 75, 75
        };

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
        {
                0, 52, 53, 53, 53, 53, 53, 53, 53, 53,
                53, 54, 54, 54, 54, 54, 54, 54, 54, 55,
                56, 56, 57, 57, 57, 57, 58, 58, 58, 58,
                58, 58, 58, 59, 59, 59, 59, 59, 59, 59,
                59, 59, 59, 60, 60, 60, 60, 61, 61, 61,
                61, 61, 61, 61, 62, 62, 62, 62, 62, 62,
                62, 62, 63, 63, 63, 63, 64, 64, 64, 65,
                65, 66, 66, 66, 66, 66, 66, 66, 66, 67,
                67, 67, 67, 68, 68, 68, 69, 69, 70, 70,
                71, 71, 71, 71, 72, 73, 73, 74, 74, 74,
                75, 75, 75, 75, 75, 75, 75, 75, 75, 75,
                75, 75, 75, 75, 76, 76, 77, 78, 78, 78,
                78, 79, 79, 79, 80, 80, 80, 81, 81, 81,
                82, 82, 82, 82, 82, 83, 83, 83, 84, 84,
                84, 84, 84, 84, 84, 84, 84, 84, 84
        };

/* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
        {
                0, 2, 4, 4, 4, 4, 4, 5, 5, 5,
                5, 5, 5, 5, 5, 5, 2, 3, 4, 4,
                3, 1, 3, 0, 3, 3, 5, 5, 3, 3,
                5, 5, 3, 2, 2, 1, 2, 2, 1, 2,
                2, 1, 1, 3, 0, 3, 3, 5, 3, 5,
                5, 5, 3, 3, 1, 6, 6, 6, 6, 2,
                3, 4, 5, 5, 5, 3, 3, 3, 0, 3,
                3, 3, 5, 5, 5, 5, 4, 2, 2, 3,
                0, 2, 3, 3, 3, 1, 1, 1, 2, 2,
                3, 3, 3, 2, 3, 3, 3, 3, 3, 1,
                3, 1, 1, 5, 5, 8, 8, 8, 8, 4,
                4, 4, 4, 0, 2, 0, 2, 3, 2, 3,
                0, 1, 4, 4, 3, 1, 3, 3, 3, 1,
                3, 4, 3, 4, 1, 3, 4, 1, 1, 1,
                1, 4, 4, 3, 3, 3, 2, 2, 1
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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_(FILE *yyo, YYLTYPE const *const yylocp) {
    int res = 0;
    int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
    if (0 <= yylocp->first_line) {
        res += YYFPRINTF(yyo, "%d", yylocp->first_line);
        if (0 <= yylocp->first_column)
            res += YYFPRINTF(yyo, ".%d", yylocp->first_column);
    }
    if (0 <= yylocp->last_line) {
        if (yylocp->first_line < yylocp->last_line) {
            res += YYFPRINTF(yyo, "-%d", yylocp->last_line);
            if (0 <= end_col)
                res += YYFPRINTF(yyo, ".%d", end_col);
        } else if (0 <= end_col && yylocp->first_column < end_col)
            res += YYFPRINTF(yyo, "-%d", end_col);
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
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print(FILE *yyo, int yytype, YYSTYPE const *const yyvaluep, YYLTYPE const *const yylocationp) {
    FILE *yyoutput = yyo;
    YYUSE (yyoutput);
    YYUSE (yylocationp);
    if (!yyvaluep)
        return;
# ifdef YYPRINT
                                                                                                                                if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
            YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
    YYUSE (yytype);
    YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print(FILE *yyo, int yytype, YYSTYPE const *const yyvaluep, YYLTYPE const *const yylocationp) {
    YYFPRINTF(yyo, "%s %s (",
              yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

    YY_LOCATION_PRINT (yyo, *yylocationp);
    YYFPRINTF(yyo, ": ");
    yy_symbol_value_print(yyo, yytype, yyvaluep, yylocationp);
    YYFPRINTF(yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print(yy_state_t *yybottom, yy_state_t *yytop) {
    YYFPRINTF(stderr, "Stack now");
    for (; yybottom <= yytop; yybottom++) {
        int yybot = *yybottom;
        YYFPRINTF(stderr, " %d", yybot);
    }
    YYFPRINTF(stderr, "\n");
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
yy_reduce_print(yy_state_t *yyssp, YYSTYPE*yyvsp, YYLTYPE *yylsp, int yyrule) {
    int yylno = yyrline[yyrule];
    int yynrhs = yyr2[yyrule];
    int yyi;
    YYFPRINTF(stderr, "Reducing stack by rule %d (line %d):\n",
              yyrule - 1, yylno);
    /* The symbols being reduced.  */
    for (yyi = 0; yyi < yynrhs; yyi++) {
        YYFPRINTF(stderr, "   $%d = ", yyi + 1);
        yy_symbol_print(stderr,
                        yystos[+yyssp[yyi + 1 - yynrhs]],
                        &yyvsp[(yyi + 1) - (yynrhs)], &(yylsp[(yyi + 1) - (yynrhs)]));
        YYFPRINTF(stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
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
yystrlen(const char *yystr) {
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
yystpcpy(char *yydest, const char *yysrc) {
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
yytnamerr(char *yyres, const char *yystr) {
    if (*yystr == '"') {
        YYPTRDIFF_T yyn = 0;
        char const *yyp = yystr;

        for (;;)
            switch (*++yyp) {
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
        do_not_strip_quotes:;
    }

    if (yyres)
        return yystpcpy(yyres, yystr) - yyres;
    else
        return yystrlen(yystr);
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
yysyntax_error(YYPTRDIFF_T *yymsg_alloc, char **yymsg,
               yy_state_t *yyssp, int yytoken) {
    enum {
        YYERROR_VERBOSE_ARGS_MAXIMUM = 5
    };
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
    if (yytoken != YYEMPTY) {
        int yyn = yypact[+*yyssp];
        YYPTRDIFF_T yysize0 = yytnamerr(YY_NULLPTR, yytname[yytoken]);
        yysize = yysize0;
        yyarg[yycount++] = yytname[yytoken];
        if (!yypact_value_is_default (yyn)) {
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
                    && !yytable_value_is_error (yytable[yyx + yyn])) {
                    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM) {
                        yycount = 1;
                        yysize = yysize0;
                        break;
                    }
                    yyarg[yycount++] = yytname[yyx];
                    {
                        YYPTRDIFF_T yysize1
                                = yysize + yytnamerr(YY_NULLPTR, yytname[yyx]);
                        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                            yysize = yysize1;
                        else
                            return 2;
                    }
                }
        }
    }

    switch (yycount) {
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
        YYPTRDIFF_T yysize1 = yysize + (yystrlen(yyformat) - 2 * yycount) + 1;
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
            yysize = yysize1;
        else
            return 2;
    }

    if (*yymsg_alloc < yysize) {
        *yymsg_alloc = 2 * yysize;
        if (!(yysize <= *yymsg_alloc
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
            if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount) {
                yyp += yytnamerr(yyp, yyarg[yyi++]);
                yyformat += 2;
            } else {
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
yydestruct(const char *yymsg, int yytype, YYSTYPE*yyvaluep, YYLTYPE *yylocationp) {
    YYUSE (yyvaluep);
    YYUSE (yylocationp);
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
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
        = {1, 1, 1, 1}
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse(void) {
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE*yyvs;
    YYSTYPE*yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYPTRDIFF_T yystacksize;

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
    YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
    yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
    if (yychar == YYEMPTY) {
        YYDPRINTF ((stderr, "Reading a token: "));
        yychar = yylex();
    }

    if (yychar <= YYEOF) {
        yychar = yytoken = YYEOF;
        YYDPRINTF ((stderr, "Now at end of input.\n"));
    } else {
        yytoken = YYTRANSLATE (yychar);
        YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

    /* If the proper action on seeing token YYTOKEN is to reduce or to
       detect an error, take that action.  */
    yyn += yytoken;
    if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
        goto yydefault;
    yyn = yytable[yyn];
    if (yyn <= 0) {
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
    *++yylsp = yylloc;

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
    yyval = yyvsp[1 - yylen];

    /* Default location. */
    YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
    yyerror_range[1] = yyloc;
    YY_REDUCE_PRINT (yyn);
    switch (yyn) {
        case 2:
#line 77 "yacc.y"
        { //正常
            ParseTreeHead = yyval = new Type;
            yyval->token = "programstruct";
            yyval->children.push_back(yyvsp[-3]);
            yyval->children.push_back(yyvsp[-2]);
            yyval->children.push_back(yyvsp[-1]);
            yyval->children.push_back(yyvsp[0]);
            if (yylex()) //多余的内容
                yyerror("redundant content at the end!", (yylsp[0]).last_line, (yylsp[0]).last_column + 1);
            YYACCEPT;
        }
#line 1693 "yacc.tab.c"
            break;

        case 3:
#line 85 "yacc.y"
        { //ERROR 缺少分号 checked
            ParseTreeHead = yyval = new Type;
            yyval->token = "programstruct";
            yyerror("missing a semicolon here", (yylsp[-3]).last_line, (yylsp[-3]).last_column + 1);
        }
#line 1703 "yacc.tab.c"
            break;

        case 4:
#line 89 "yacc.y"
        { //ERROR 缺少点号 checked
            ParseTreeHead = yyval = new Type;
            yyval->token = "programstruct";
            yyerror("missing a dot here", (yylsp[-1]).last_line, (yylsp[-1]).last_column + 1);
        }
#line 1713 "yacc.tab.c"
            break;

        case 5:
#line 93 "yacc.y"
        { //ERROR program_head识别失败 checked
            ParseTreeHead = yyval = new Type;
            yyval->token = "programstruct";
            yyerror("fatal error in program head, maybe missing keyword \"program\"", (yylsp[-3]).first_line,
                    (yylsp[-3]).first_column, (yylsp[-3]).last_line, (yylsp[-3]).last_column);
        }
#line 1723 "yacc.tab.c"
            break;

        case 6:
#line 97 "yacc.y"
        { //ERROR program_body识别失败 unchecked
            ParseTreeHead = yyval = new Type;
            yyval->token = "programstruct";
            yyerror("fatal error in program body");
        }
#line 1733 "yacc.tab.c"
            break;

        case 7:
#line 101 "yacc.y"
        { //ERROR program_head前包含非法字符 checked
            ParseTreeHead = yyval = new Type;
            yyval->token = "programstruct";
            yyerror("invalid symbol before program head", (yyloc).first_line, (yyloc).first_column,
                    (yylsp[-3]).first_line, (yylsp[-3]).first_column - 1);
        }
#line 1743 "yacc.tab.c"
            break;

        case 8:
#line 105 "yacc.y"
        { //ERROR program_head前包含非法记号、缺失分号 checked
            ParseTreeHead = yyval = new Type;
            yyval->token = "programstruct";
            yyerror("invalid token before program head, maybe missing keyword \"program\"", (yyloc).first_line,
                    (yyloc).first_column, (yylsp[-3]).first_line, (yylsp[-3]).first_column - 1);
            yyerror("missing a semicolon here", (yylsp[-3]).last_line, (yylsp[-3]).last_column + 1);
        }
#line 1754 "yacc.tab.c"
            break;

        case 9:
#line 110 "yacc.y"
        { //ERROR program_head前包含非法记号、缺失点号 checked
            ParseTreeHead = yyval = new Type;
            yyval->token = "programstruct";
            yyerror("invalid token before program head, maybe missing keyword \"program\"", (yyloc).first_line,
                    (yyloc).first_column, (yylsp[-3]).first_line, (yylsp[-3]).first_column - 1);
            yyerror("missing a dot here", (yylsp[-1]).last_line, (yylsp[-1]).last_column + 1);
        }
#line 1765 "yacc.tab.c"
            break;

        case 10:
#line 115 "yacc.y"
        { //ERROR program_head前包含非法记号、program_body识别失败 unchecked
            ParseTreeHead = yyval = new Type;
            yyval->token = "programstruct";
            yyerror("invalid token before program head, maybe missing keyword \"program\"", (yyloc).first_line,
                    (yyloc).first_column, (yylsp[-3]).first_line, (yylsp[-3]).first_column - 1);
            yyerror("fatal error in program body", (yylsp[-2]).last_line, (yylsp[-2]).last_column + 1,
                    (yylsp[0]).first_line, (yylsp[0]).first_column - 1);
        }
#line 1776 "yacc.tab.c"
            break;

        case 11:
#line 122 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "program_head";
            yyval->children.push_back(yyvsp[-4]);
            yyval->children.push_back(yyvsp[-3]);
            yyval->children.push_back(yyvsp[-2]);
            yyval->children.push_back(yyvsp[-1]);
            yyval->children.push_back(yyvsp[0]);
        }
#line 1787 "yacc.tab.c"
            break;

        case 12:
#line 127 "yacc.y"
        { //ERROR 缺少主程序名 checked
            yyval = new Type;
            yyval->token = "program_head";
            yyerror("missing program name here", (yylsp[-4]).last_line, (yylsp[-4]).last_column + 1);
        }
#line 1797 "yacc.tab.c"
            break;

        case 13:
#line 131 "yacc.y"
        { //ERROR 缺少左括号 checked
            yyval = new Type;
            yyval->token = "program_head";
            yyerror("missing a left bracket here", (yylsp[-1]).first_line, (yylsp[-1]).first_column - 1);
        }
#line 1807 "yacc.tab.c"
            break;

        case 14:
#line 135 "yacc.y"
        { //ERROR idlist识别失败 checked
            yyval = new Type;
            yyval->token = "program_head";
            yyerror("program identifier list missing or imcomplete", (yylsp[-1]).first_line, (yylsp[-1]).first_column,
                    (yylsp[-1]).last_line, (yylsp[-1]).last_column);
        }
#line 1817 "yacc.tab.c"
            break;

        case 15:
#line 139 "yacc.y"
        { //ERROR 缺少右括号 checked
            yyval = new Type;
            yyval->token = "program_head";
            yyerror("missing a right bracket here", (yylsp[-1]).last_line, (yylsp[-1]).last_column + 1);
        }
#line 1827 "yacc.tab.c"
            break;

        case 16:
#line 143 "yacc.y"
        { //ERROR program head checked
            yyval = new Type;
            yyval->token = "program_head";
            yyerror("program head imcomplete", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yylsp[-1]).last_line,
                    (yylsp[-1]).last_column);
        }
#line 1837 "yacc.tab.c"
            break;

        case 17:
#line 147 "yacc.y"
        { //ERROR idlist缺失 checked
            yyval = new Type;
            yyval->token = "program_head";
            yyerror("program identifier list missing or imcomplete", (yylsp[-2]).first_line, (yylsp[-2]).first_column,
                    (yylsp[-1]).last_line, (yylsp[-1]).last_column);
        }
#line 1847 "yacc.tab.c"
            break;

        case 18:
#line 151 "yacc.y"
        { //ERROR idlist缺失 checked
            yyval = new Type;
            yyval->token = "program_head";
            yyerror("program identifier list missing or imcomplete", (yylsp[-3]).first_line, (yylsp[-3]).first_column,
                    (yylsp[-2]).last_line, (yylsp[-2]).last_column);
        }
#line 1857 "yacc.tab.c"
            break;

        case 19:
#line 157 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "program_body";
            yyval->children.push_back(yyvsp[-3]);
            yyval->children.push_back(yyvsp[-2]);
            yyval->children.push_back(yyvsp[-1]);
            yyval->children.push_back(yyvsp[0]);
        }
#line 1868 "yacc.tab.c"
            break;

        case 20:
#line 164 "yacc.y"
        { //正常 idlist的产生式不打算加入error
            yyval = new Type;
            yyval->token = "idlist";
            yyval->children.push_back(yyvsp[-2]);
            yyval->children.push_back(yyvsp[-1]);
            yyval->children.push_back(yyvsp[0]);
        }
#line 1878 "yacc.tab.c"
            break;

        case 21:
#line 168 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "idlist";
            yyval->children.push_back(yyvsp[0]);
        }
#line 1888 "yacc.tab.c"
            break;

        case 22:
#line 174 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "const_declarations";
            yyval->children.push_back(yyvsp[-2]);
            yyval->children.push_back(yyvsp[-1]);
            yyval->children.push_back(yyvsp[0]);
        }
#line 1898 "yacc.tab.c"
            break;

        case 23:
#line 178 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "const_declarations";
        }
#line 1907 "yacc.tab.c"
            break;

        case 24:
#line 181 "yacc.y"
        { //ERROR 常量定义出现错误 checked
            yyval = new Type;
            yyval->token = "const_declarations";
            yyerror("fatal error in const declarations", (yylsp[-1]).first_line, (yylsp[-1]).first_column,
                    (yylsp[-1]).last_line, (yylsp[-1]).last_column);
        }
#line 1917 "yacc.tab.c"
            break;

        case 25:
#line 185 "yacc.y"
        { //ERROR 缺少分号 checked
            yyval = new Type;
            yyval->token = "const_declarations";
            yyerror("missing a semicolon here", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yylsp[-1]).last_line,
                    (yylsp[-1]).last_column);
        }
#line 1927 "yacc.tab.c"
            break;

        case 26:
#line 191 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "const_declaration";
            yyval->children.push_back(yyvsp[-4]);
            yyval->children.push_back(yyvsp[-3]);
            yyval->children.push_back(yyvsp[-2]);
            yyval->children.push_back(yyvsp[-1]);
            yyval->children.push_back(yyvsp[0]);
        }
#line 1938 "yacc.tab.c"
            break;

        case 27:
#line 196 "yacc.y"
        { //常数初始化右值缺失 checked
            yyval = new Type;
            yyval->token = "const_declaration";
            yyerror("constant definition missing initial r-value", (yylsp[-1]).first_line, (yylsp[-1]).first_column,
                    (yylsp[-1]).last_line, (yylsp[-1]).last_column);
        }
#line 1948 "yacc.tab.c"
            break;

        case 28:
#line 200 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "const_declaration";
            yyval->children.push_back(yyvsp[-2]);
            yyval->children.push_back(yyvsp[-1]);
            yyval->children.push_back(yyvsp[0]);
        }
#line 1958 "yacc.tab.c"
            break;

        case 29:
#line 204 "yacc.y"
        { //常数初始化右值缺失 checked
            yyval = new Type;
            yyval->token = "const_declaration";
            yyerror("constant definition missing initial r-value", (yylsp[0]).first_line, (yylsp[0]).first_column,
                    (yylsp[0]).last_line, (yylsp[0]).last_column);
        }
#line 1968 "yacc.tab.c"
            break;

        case 30:
#line 208 "yacc.y"
        { //ERROR 缺少分号 checked
            yyval = new Type;
            yyval->token = "const_declaration";
            yyerror("missing a semicolon here", (yylsp[-4]).first_line, (yylsp[-4]).first_column, (yylsp[-4]).last_line,
                    (yylsp[-4]).last_column + 1);
        }
#line 1978 "yacc.tab.c"
            break;

        case 31:
#line 212 "yacc.y"
        { //ERROR 缺少等号（常量的初始化用的是等号，而不是赋值号） checked
            yyval = new Type;
            yyval->token = "const_declaration";
            yyerror("missing a equal sign here", (yylsp[-2]).first_line, (yylsp[-2]).first_column,
                    (yylsp[-2]).last_line, (yylsp[-2]).last_column);
        }
#line 1988 "yacc.tab.c"
            break;

        case 32:
#line 216 "yacc.y"
        { //ERROR 缺少等号（常量的初始化用的是等号，而不是赋值号） checked
            yyval = new Type;
            yyval->token = "const_declaration";
            yyerror("missing a equal sign here", (yylsp[-1]).first_line, (yylsp[-1]).first_column,
                    (yylsp[-1]).last_line, (yylsp[-1]).last_column);
        }
#line 1998 "yacc.tab.c"
            break;

        case 33:
#line 222 "yacc.y"
        { //正常，该非终结符的产生式不打算加入error
            yyval = new Type;
            yyval->token = "const_value";
            yyval->children.push_back(yyvsp[-1]);
            yyval->children.push_back(yyvsp[0]);
        }
#line 2008 "yacc.tab.c"
            break;

        case 34:
#line 226 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "const_value";
            yyval->children.push_back(yyvsp[-1]);
            yyval->children.push_back(yyvsp[0]);
        }
#line 2018 "yacc.tab.c"
            break;

        case 35:
#line 230 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "const_value";
            yyval->children.push_back(yyvsp[0]);
        }
#line 2028 "yacc.tab.c"
            break;

        case 36:
#line 234 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "const_value";
            yyval->children.push_back(yyvsp[-1]);
            yyval->children.push_back(yyvsp[0]);
        }
#line 2038 "yacc.tab.c"
            break;

        case 37:
#line 238 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "const_value";
            yyval->children.push_back(yyvsp[-1]);
            yyval->children.push_back(yyvsp[0]);
        }
#line 2048 "yacc.tab.c"
            break;

        case 38:
#line 242 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "const_value";
            yyval->children.push_back(yyvsp[0]);
        }
#line 2058 "yacc.tab.c"
            break;

        case 39:
#line 246 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "const_value";
            yyval->children.push_back(yyvsp[-1]);
            yyval->children.push_back(yyvsp[0]);
        }
#line 2068 "yacc.tab.c"
            break;

        case 40:
#line 250 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "const_value";
            yyval->children.push_back(yyvsp[-1]);
            yyval->children.push_back(yyvsp[0]);
        }
#line 2078 "yacc.tab.c"
            break;

        case 41:
#line 254 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "const_value";
            yyval->children.push_back(yyvsp[0]);
        }
#line 2088 "yacc.tab.c"
            break;

        case 42:
#line 258 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "const_value";
            yyval->children.push_back(yyvsp[0]);
        }
#line 2098 "yacc.tab.c"
            break;

        case 43:
#line 264 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "var_declarations";
            yyval->children.push_back(yyvsp[-2]);
            yyval->children.push_back(yyvsp[-1]);
            yyval->children.push_back(yyvsp[0]);
        }
#line 2108 "yacc.tab.c"
            break;

        case 44:
#line 268 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "var_declarations";
        }
#line 2117 "yacc.tab.c"
            break;

        case 45:
#line 271 "yacc.y"
        { //ERROR 变量定义出现错误 checked
            yyval = new Type;
            yyval->token = "var_declarations";
            yyerror("fatal error in variant declarations", (yylsp[-2]).first_line, (yylsp[-2]).first_column,
                    (yylsp[-2]).last_line, (yylsp[-2]).last_column);
        }
#line 2127 "yacc.tab.c"
            break;

        case 46:
#line 275 "yacc.y"
        { //ERROR 缺少分号 checked
            yyval = new Type;
            yyval->token = "var_declarations";
            yyerror("missing a semicolon here", (yylsp[-1]).last_line, (yylsp[-1]).last_column + 1);
        }
#line 2137 "yacc.tab.c"
            break;

        case 47:
#line 281 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "var_declaration";
            yyval->children.push_back(yyvsp[-4]);
            yyval->children.push_back(yyvsp[-3]);
            yyval->children.push_back(yyvsp[-2]);
            yyval->children.push_back(yyvsp[-1]);
            yyval->children.push_back(yyvsp[0]);
        }
#line 2148 "yacc.tab.c"
            break;

        case 48:
#line 286 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "var_declaration";
            yyval->children.push_back(yyvsp[-2]);
            yyval->children.push_back(yyvsp[-1]);
            yyval->children.push_back(yyvsp[0]);
        }
#line 2158 "yacc.tab.c"
            break;

        case 49:
#line 290 "yacc.y"
        { //ERROR 缺少分号 checked
            yyval = new Type;
            yyval->token = "var_declaration";
            yyerror("missing a semicolon here", (yylsp[-4]).last_line, (yylsp[-4]).last_column + 1);
        }
#line 2168 "yacc.tab.c"
            break;

        case 50:
#line 294 "yacc.y"
        { //ERROR 缺少冒号 checked
            yyval = new Type;
            yyval->token = "var_declaration";
            yyerror("missing a colon here", (yylsp[-2]).last_line, (yylsp[-2]).last_column + 1);
        }
#line 2178 "yacc.tab.c"
            break;

        case 51:
#line 298 "yacc.y"
        { //ERROR type识别失败 checked
            yyval = new Type;
            yyval->token = "var_declaration";
            yyerror("missing a type here", (yylsp[-1]).last_line, (yylsp[-1]).last_column + 1);
        }
#line 2188 "yacc.tab.c"
            break;

        case 52:
#line 302 "yacc.y"
        { //ERROR type识别失败 checked
            yyval = new Type;
            yyval->token = "var_declaration";
            yyerror("missing a type here", (yylsp[0]).last_line, (yylsp[0]).last_column + 1);
        }
#line 2198 "yacc.tab.c"
            break;

        case 53:
#line 306 "yacc.y"
        { //ERROR 缺少分号 checked
            yyval = new Type;
            yyval->token = "var_declaration";
            yyerror("missing a colon here", (yylsp[-2]).last_line, (yylsp[-2]).last_column + 1);
        }
#line 2208 "yacc.tab.c"
            break;

        case 54:
#line 312 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "type";
            yyval->children.push_back(yyvsp[0]);
        }
#line 2218 "yacc.tab.c"
            break;

        case 55:
#line 316 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "type";
            yyval->children.push_back(yyvsp[-5]);
            yyval->children.push_back(yyvsp[-4]);
            yyval->children.push_back(yyvsp[-3]);
            yyval->children.push_back(yyvsp[-2]);
            yyval->children.push_back(yyvsp[-1]);
            yyval->children.push_back(yyvsp[0]);
        }
#line 2230 "yacc.tab.c"
            break;

        case 56:
#line 322 "yacc.y"
        { //ERROR 缺少左中括号 checked
            yyval = new Type;
            yyval->token = "type";
            yyerror("missing a left square bracket here", (yylsp[-5]).last_line, (yylsp[-5]).last_column + 1);
        }
#line 2240 "yacc.tab.c"
            break;

        case 57:
#line 326 "yacc.y"
        { //ERROR 缺少OF关键字 checked
            yyval = new Type;
            yyval->token = "type";
            yyerror("missing keyword \"OF\" here", (yylsp[-2]).last_line, (yylsp[-2]).last_column + 1,
                    (yylsp[0]).first_line, (yylsp[0]).first_column - 1);
        }
#line 2250 "yacc.tab.c"
            break;

        case 58:
#line 330 "yacc.y"
        { //ERROR 数组元素类型识别失败 checked
            yyval = new Type;
            yyval->token = "type";
            yyerror("missing a base type keyword here", (yylsp[-1]).last_line, (yylsp[-1]).last_column + 1);
        }
#line 2260 "yacc.tab.c"
            break;

        case 59:
#line 334 "yacc.y"
        { //ERROR 不完整的数组类型 checked
            yyval = new Type;
            yyval->token = "type";
            yyerror("incomplete array type", &(yyloc));
        }
#line 2270 "yacc.tab.c"
            break;

        case 60:
#line 338 "yacc.y"
        { //ERROR 不完整的数组类型 checked
            yyval = new Type;
            yyval->token = "type";
            yyerror("incomplete array type", &(yyloc));
        }
#line 2280 "yacc.tab.c"
            break;

        case 61:
#line 342 "yacc.y"
        { //ERROR 不完整的数组类型 checked
            yyval = new Type;
            yyval->token = "type";
            yyerror("incomplete array type", &(yyloc));
        }
#line 2290 "yacc.tab.c"
            break;

        case 62:
#line 348 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "period";
            yyval->children.push_back(yyvsp[-4]);
            yyval->children.push_back(yyvsp[-3]);
            yyval->children.push_back(yyvsp[-2]);
            yyval->children.push_back(yyvsp[-1]);
            yyval->children.push_back(yyvsp[0]);
        }
#line 2301 "yacc.tab.c"
            break;

        case 63:
#line 353 "yacc.y"
        { //ERROR 缺少逗号 checked
            yyval = new Type;
            yyval->token = "period";
            yyerror("missing a comma here", (yylsp[-4]).last_line, (yylsp[-4]).last_column + 1);
        }
#line 2311 "yacc.tab.c"
            break;

        case 64:
#line 357 "yacc.y"
        { //ERROR 缺少双点号 checked
            yyval = new Type;
            yyval->token = "period";
            yyerror("missing range dot .. here", (yylsp[-2]).last_line, (yylsp[-2]).last_column + 1);
        }
#line 2321 "yacc.tab.c"
            break;

        case 65:
#line 361 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "period";
            yyval->children.push_back(yyvsp[-2]);
            yyval->children.push_back(yyvsp[-1]);
            yyval->children.push_back(yyvsp[0]);
        }
#line 2331 "yacc.tab.c"
            break;

        case 66:
#line 367 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "subprogram_declarations";
            yyval->children.push_back(yyvsp[-2]);
            yyval->children.push_back(yyvsp[-1]);
            yyval->children.push_back(yyvsp[0]);
        }
#line 2341 "yacc.tab.c"
            break;

        case 67:
#line 371 "yacc.y"
        { //ERROR 缺少分号 checked
            yyval = new Type;
            yyval->token = "subprogram_declarations";
            yyerror("missing a semicolon here", (yylsp[-1]).last_line, (yylsp[-1]).last_column + 1);
        }
#line 2351 "yacc.tab.c"
            break;

        case 68:
#line 375 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "subprogram_declarations";
        }
#line 2360 "yacc.tab.c"
            break;

        case 69:
#line 380 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "subprogram";
            yyval->children.push_back(yyvsp[-2]);
            yyval->children.push_back(yyvsp[-1]);
            yyval->children.push_back(yyvsp[0]);
        }
#line 2370 "yacc.tab.c"
            break;

        case 70:
#line 384 "yacc.y"
        { //ERROR 缺少分号 checked
            yyval = new Type;
            yyval->token = "subprogram";
            yyerror("missing a semicolon here", (yylsp[-2]).last_line, (yylsp[-2]).last_column + 1);
        }
#line 2380 "yacc.tab.c"
            break;

        case 71:
#line 390 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "subprogram_head";
            yyval->children.push_back(yyvsp[-2]);
            yyval->children.push_back(yyvsp[-1]);
            yyval->children.push_back(yyvsp[0]);
        }
#line 2390 "yacc.tab.c"
            break;

        case 72:
#line 394 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "subprogram_head";
            yyval->children.push_back(yyvsp[-4]);
            yyval->children.push_back(yyvsp[-3]);
            yyval->children.push_back(yyvsp[-2]);
            yyval->children.push_back(yyvsp[-1]);
            yyval->children.push_back(yyvsp[0]);
        }
#line 2401 "yacc.tab.c"
            break;

        case 73:
#line 399 "yacc.y"
        { //ERROR 函数名缺失 checked
            yyval = new Type;
            yyval->token = "subprogram_head";
            yyerror("missing function name", (yylsp[-4]).last_line, (yylsp[-4]).last_column + 1);
        }
#line 2411 "yacc.tab.c"
            break;

        case 74:
#line 403 "yacc.y"
        { //ERROR 缺少冒号 checked
            yyval = new Type;
            yyval->token = "subprogram_head";
            yyerror("missing a colon here", (yylsp[-2]).last_line, (yylsp[-2]).last_column);
        }
#line 2421 "yacc.tab.c"
            break;

        case 75:
#line 407 "yacc.y"
        { //ERROR 缺少基本类型关键字 checked
            yyval = new Type;
            yyval->token = "subprogram_head";
            yyerror("missing a base type keyword here", (yylsp[-1]).last_line, (yylsp[-1]).last_column + 1);
        }
#line 2431 "yacc.tab.c"
            break;

        case 76:
#line 411 "yacc.y"
        { //ERROR 缺少基本类型关键字 checked
            yyval = new Type;
            yyval->token = "subprogram_head";
            yyerror("missing a base type keyword here", (yylsp[-1]).last_line, (yylsp[-1]).last_column + 1);
        }
#line 2441 "yacc.tab.c"
            break;

        case 77:
#line 415 "yacc.y"
        { //ERROR 不完整的函数头 checked
            yyval = new Type;
            yyval->token = "subprogram_head";
            yyerror("incomplete function head", &(yyloc));
        }
#line 2451 "yacc.tab.c"
            break;

        case 78:
#line 419 "yacc.y"
        { //ERROR 不完整的过程头 checked
            yyval = new Type;
            yyval->token = "subprogram_head";
            yyerror("incomplete procedure head", &(yyloc));
        }
#line 2461 "yacc.tab.c"
            break;

        case 79:
#line 425 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "formal_parameter";
            yyval->children.push_back(yyvsp[-2]);
            yyval->children.push_back(yyvsp[-1]);
            yyval->children.push_back(yyvsp[0]);
        }
#line 2471 "yacc.tab.c"
            break;

        case 80:
#line 429 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "formal_parameter";
        }
#line 2480 "yacc.tab.c"
            break;

        case 81:
#line 432 "yacc.y"
        { //ERROR 不完整的形参列表
            yyval = new Type;
            yyval->token = "formal_parameter";
            yyerror("incomplete formal parameter list", &(yyloc));
        }
#line 2490 "yacc.tab.c"
            break;

        case 82:
#line 436 "yacc.y"
        { //ERROR 右括号缺失
            yyval = new Type;
            yyval->token = "formal_parameter";
            yyerror("missing a right bracket here", (yylsp[-1]).last_line, (yylsp[-1]).last_column + 1);
        }
#line 2500 "yacc.tab.c"
            break;

        case 83:
#line 442 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "parameter_list";
            yyval->children.push_back(yyvsp[-2]);
            yyval->children.push_back(yyvsp[-1]);
            yyval->children.push_back(yyvsp[0]);
        }
#line 2510 "yacc.tab.c"
            break;

        case 84:
#line 446 "yacc.y"
        { //ERROR 缺少分号 checked
            yyval = new Type;
            yyval->token = "parameter_list";
            yyerror("missing a semicolon here", (yylsp[-2]).last_line, (yylsp[-2]).last_column + 1);
        }
#line 2520 "yacc.tab.c"
            break;

        case 85:
#line 450 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "parameter_list";
            yyval->children.push_back(yyvsp[0]);
        }
#line 2530 "yacc.tab.c"
            break;

        case 86:
#line 456 "yacc.y"
        { //正常，非终结符parameter的产生式不打算加入error
            yyval = new Type;
            yyval->token = "parameter";
            yyval->children.push_back(yyvsp[0]);
        }
#line 2540 "yacc.tab.c"
            break;

        case 87:
#line 460 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "parameter";
            yyval->children.push_back(yyvsp[0]);
        }
#line 2550 "yacc.tab.c"
            break;

        case 88:
#line 466 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "var_parameter";
            yyval->children.push_back(yyvsp[-1]);
            yyval->children.push_back(yyvsp[0]);
        }
#line 2560 "yacc.tab.c"
            break;

        case 89:
#line 470 "yacc.y"
        { //ERROR 不完整的引用参数列表 checked
            yyval = new Type;
            yyval->token = "var_parameter";
            yyerror("incomplete refereced parameter list", &(yyloc));
        }
#line 2570 "yacc.tab.c"
            break;

        case 90:
#line 476 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "value_parameter";
            yyval->children.push_back(yyvsp[-2]);
            yyval->children.push_back(yyvsp[-1]);
            yyval->children.push_back(yyvsp[0]);
        }
#line 2580 "yacc.tab.c"
            break;

        case 91:
#line 480 "yacc.y"
        { //ERROR 缺少分号 checked
            yyval = new Type;
            yyval->token = "value_parameter";
            yyerror("missing a colon here", (yylsp[-2]).first_line, (yylsp[-2]).last_column + 1);
        }
#line 2590 "yacc.tab.c"
            break;

        case 92:
#line 484 "yacc.y"
        { //ERROR 缺少基本类型关键字 checked
            yyval = new Type;
            yyval->token = "value_parameter";
            yyerror("missing a base type keyword here", (yylsp[-1]).last_line, (yylsp[-1]).last_column + 1);
        }
#line 2600 "yacc.tab.c"
            break;

        case 93:
#line 488 "yacc.y"
        { //ERROR 缺少基本类型关键字 checked
            yyval = new Type;
            yyval->token = "value_parameter";
            yyerror("missing a base type keyword here", (yylsp[-1]).last_line, (yylsp[-1]).last_column + 1);
        }
#line 2610 "yacc.tab.c"
            break;

        case 94:
#line 494 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "subprogram_body";
            yyval->children.push_back(yyvsp[-2]);
            yyval->children.push_back(yyvsp[-1]);
            yyval->children.push_back(yyvsp[0]);
        }
#line 2620 "yacc.tab.c"
            break;

        case 95:
#line 500 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "compound_statement";
            yyval->children.push_back(yyvsp[-2]);
            yyval->children.push_back(yyvsp[-1]);
            yyval->children.push_back(yyvsp[0]);
        }
#line 2630 "yacc.tab.c"
            break;

        case 96:
#line 504 "yacc.y"
        { //ERROR 缺少END关键字 checked
            yyval = new Type;
            yyval->token = "compound_statement";
            yyerror("missing keyword \"end\"", (yylsp[-1]).last_line, (yylsp[-1]).last_column + 1);
        }
#line 2640 "yacc.tab.c"
            break;

        case 97:
#line 510 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "statement_list";
            yyval->children.push_back(yyvsp[-2]);
            yyval->children.push_back(yyvsp[-1]);
            yyval->children.push_back(yyvsp[0]);
        }
#line 2650 "yacc.tab.c"
            break;

        case 98:
#line 514 "yacc.y"
        { //ERROR 缺失分号 这里引发了3个规约规约冲突 checked
            yyval = new Type;
            yyval->token = "statement_list";
            yyerror("missing a semicolon here", (yylsp[-2]).last_line, (yylsp[-2]).last_column + 1);
        }
#line 2660 "yacc.tab.c"
            break;

        case 99:
#line 518 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "statement_list";
            yyval->children.push_back(yyvsp[0]);
        }
#line 2670 "yacc.tab.c"
            break;

        case 100:
#line 524 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "statement";
            yyval->children.push_back(yyvsp[-2]);
            yyval->children.push_back(yyvsp[-1]);
            yyval->children.push_back(yyvsp[0]);
        }
#line 2680 "yacc.tab.c"
            break;

        case 101:
#line 528 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "statement";
            yyval->children.push_back(yyvsp[0]);
        }
#line 2690 "yacc.tab.c"
            break;

        case 102:
#line 532 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "statement";
            yyval->children.push_back(yyvsp[0]);
        }
#line 2700 "yacc.tab.c"
            break;

        case 103:
#line 536 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "statement";
            yyval->children.push_back(yyvsp[-4]);
            yyval->children.push_back(yyvsp[-3]);
            yyval->children.push_back(yyvsp[-2]);
            yyval->children.push_back(yyvsp[-1]);
            yyval->children.push_back(yyvsp[0]);
        }
#line 2711 "yacc.tab.c"
            break;

        case 104:
#line 541 "yacc.y"
        { //ERROR 缺少then关键字 checked
            yyval = new Type;
            yyval->token = "statement";
            yyerror("missing keyword \"then\"", (yylsp[-3]).last_line, (yylsp[-3]).last_column + 1);
        }
#line 2721 "yacc.tab.c"
            break;

        case 105:
#line 545 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "statement";
            yyval->children.push_back(yyvsp[-7]);
            yyval->children.push_back(yyvsp[-6]);
            yyval->children.push_back(yyvsp[-5]);
            yyval->children.push_back(yyvsp[-4]);
            yyval->children.push_back(yyvsp[-3]);
            yyval->children.push_back(yyvsp[-2]);
            yyval->children.push_back(yyvsp[-1]);
            yyval->children.push_back(yyvsp[0]);
        }
#line 2734 "yacc.tab.c"
            break;

        case 106:
#line 552 "yacc.y"
        { //ERROR 缺少赋值号 checked
            yyval = new Type;
            yyval->token = "statement";
            yyerror("missing assignop \":=\"", (yylsp[-6]).last_line, (yylsp[-6]).last_column + 1);
        }
#line 2744 "yacc.tab.c"
            break;

        case 107:
#line 556 "yacc.y"
        { //ERROR 缺少关键字to checked
            yyval = new Type;
            yyval->token = "statement";
            yyerror("missing keywrod \"to\"", (yylsp[-4]).last_line, (yylsp[-4]).last_column + 1);
        }
#line 2754 "yacc.tab.c"
            break;

        case 108:
#line 560 "yacc.y"
        { //ERROR 缺少关键字do checked
            yyval = new Type;
            yyval->token = "statement";
            yyerror("missing keywrod \"do\"", (yylsp[-2]).last_line, (yylsp[-4]).last_column + 1);
        }
#line 2764 "yacc.tab.c"
            break;

        case 109:
#line 564 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "statement";
            yyval->children.push_back(yyvsp[-3]);
            yyval->children.push_back(yyvsp[-2]);
            yyval->children.push_back(yyvsp[-1]);
            yyval->children.push_back(yyvsp[0]);
        }
#line 2775 "yacc.tab.c"
            break;

        case 110:
#line 569 "yacc.y"
        { //ERROR 缺少关键字do checked
            yyval = new Type;
            yyval->token = "statement";
            yyerror("missing keywrod \"do\"", (yylsp[-2]).last_line, (yylsp[-2]).last_column + 1);
        }
#line 2785 "yacc.tab.c"
            break;

        case 111:
#line 573 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "statement";
            yyval->children.push_back(yyvsp[-3]);
            yyval->children.push_back(yyvsp[-2]);
            yyval->children.push_back(yyvsp[-1]);
            yyval->children.push_back(yyvsp[0]);
        }
#line 2796 "yacc.tab.c"
            break;

        case 112:
#line 578 "yacc.y"
        { //ERROR 缺少关键字until checked
            yyval = new Type;
            yyval->token = "statement";
            yyerror("missing keywrod \"until\"", (yylsp[0]).first_line, (yylsp[0]).first_column);
        }
#line 2806 "yacc.tab.c"
            break;

        case 113:
#line 582 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "statement";
        }
#line 2815 "yacc.tab.c"
            break;

        case 114:
#line 587 "yacc.y"
        { //正常 非终结符else_part的产生式不打算加error
            yyval = new Type;
            yyval->token = "else_part";
            yyval->children.push_back(yyvsp[-1]);
            yyval->children.push_back(yyvsp[0]);
        }
#line 2825 "yacc.tab.c"
            break;

        case 115:
#line 591 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "else_part";
        }
#line 2834 "yacc.tab.c"
            break;

        case 116:
#line 596 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "variable";
            yyval->children.push_back(yyvsp[-1]);
            yyval->children.push_back(yyvsp[0]);
        }
#line 2844 "yacc.tab.c"
            break;

        case 117:
#line 602 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "id_varpart";
            yyval->children.push_back(yyvsp[-2]);
            yyval->children.push_back(yyvsp[-1]);
            yyval->children.push_back(yyvsp[0]);
        }
#line 2854 "yacc.tab.c"
            break;

        case 118:
#line 606 "yacc.y"
        { //ERROR 不完整的数组下标列表 checked
            yyval = new Type;
            yyval->token = "id_varpart";
            yyerror("incomplete expression list of array subindex", &(yyloc));
        }
#line 2864 "yacc.tab.c"
            break;

        case 119:
#line 610 "yacc.y"
        { //ERROR 缺失右中括号 checked
            yyval = new Type;
            yyval->token = "id_varpart";
            yyerror("missing a right square bracket here", (yylsp[-1]).last_line, (yylsp[-1]).last_column + 1);
        }
#line 2874 "yacc.tab.c"
            break;

        case 120:
#line 614 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "id_varpart";
        }
#line 2883 "yacc.tab.c"
            break;

        case 121:
#line 619 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "procedure_call";
            yyval->children.push_back(yyvsp[0]);
        }
#line 2893 "yacc.tab.c"
            break;

        case 122:
#line 623 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "procedure_call";
            yyval->children.push_back(yyvsp[-3]);
            yyval->children.push_back(yyvsp[-2]);
            yyval->children.push_back(yyvsp[-1]);
            yyval->children.push_back(yyvsp[0]);
        }
#line 2904 "yacc.tab.c"
            break;

        case 123:
#line 628 "yacc.y"
        { //ERROR 缺少右括号 checked
            yyval = new Type;
            yyval->token = "procedure_call";
            yyerror("missing a right bracket here", (yylsp[-1]).last_line, (yylsp[-1]).last_column + 1);
        }
#line 2914 "yacc.tab.c"
            break;

        case 124:
#line 634 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "expression_list";
            yyval->children.push_back(yyvsp[-2]);
            yyval->children.push_back(yyvsp[-1]);
            yyval->children.push_back(yyvsp[0]);
        }
#line 2924 "yacc.tab.c"
            break;

        case 125:
#line 638 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "expression_list";
            yyval->children.push_back(yyvsp[0]);
        }
#line 2934 "yacc.tab.c"
            break;

        case 126:
#line 642 "yacc.y"
        { //ERROR 缺少逗号 这里引发了一个移进规约冲突 checked
            yyval = new Type;
            yyval->token = "expression_list";
            yyerror("missing a comma here", (yylsp[-2]).last_line, (yylsp[-2]).last_column + 1);
        }
#line 2944 "yacc.tab.c"
            break;

        case 127:
#line 648 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "expression";
            yyval->children.push_back(yyvsp[-2]);
            yyval->children.push_back(yyvsp[-1]);
            yyval->children.push_back(yyvsp[0]);
        }
#line 2954 "yacc.tab.c"
            break;

        case 128:
#line 652 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "expression";
            yyval->children.push_back(yyvsp[-2]);
            yyval->children.push_back(yyvsp[-1]);
            yyval->children.push_back(yyvsp[0]);
        }
#line 2964 "yacc.tab.c"
            break;

        case 129:
#line 656 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "expression";
            yyval->children.push_back(yyvsp[0]);
        }
#line 2974 "yacc.tab.c"
            break;

        case 130:
#line 662 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "simple_expression";
            yyval->children.push_back(yyvsp[-2]);
            yyval->children.push_back(yyvsp[-1]);
            yyval->children.push_back(yyvsp[0]);
        }
#line 2984 "yacc.tab.c"
            break;

        case 131:
#line 666 "yacc.y"
        {//error，缺少操作数
            yyval = new Type;
            yyval->token = "simple_expression";
            yyerror("missing operand", (yylsp[-2]).last_line, (yylsp[-2]).last_column + 1);
        }
#line 2994 "yacc.tab.c"
            break;

        case 132:
#line 670 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "simple_expression";
            yyval->children.push_back(yyvsp[-2]);
            yyval->children.push_back(yyvsp[-1]);
            yyval->children.push_back(yyvsp[0]);
        }
#line 3004 "yacc.tab.c"
            break;

        case 133:
#line 674 "yacc.y"
        {//error，缺少操作数
            yyval = new Type;
            yyval->token = "simple_expression";
            yyerror("missing operand", (yylsp[-2]).last_line, (yylsp[-2]).last_column + 1);
        }
#line 3014 "yacc.tab.c"
            break;

        case 134:
#line 678 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "simple_expression";
            yyval->children.push_back(yyvsp[0]);
        }
#line 3024 "yacc.tab.c"
            break;

        case 135:
#line 684 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "term";
            yyval->children.push_back(yyvsp[-2]);
            yyval->children.push_back(yyvsp[-1]);
            yyval->children.push_back(yyvsp[0]);
        }
#line 3034 "yacc.tab.c"
            break;

        case 136:
#line 688 "yacc.y"
        { //error,缺少操作数
            yyval = new Type;
            yyval->token = "term";
            yyerror("missing operand", (yylsp[-2]).last_line, (yylsp[-2]).last_column + 1);
        }
#line 3044 "yacc.tab.c"
            break;

        case 137:
#line 692 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "term";
            yyval->children.push_back(yyvsp[0]);
        }
#line 3054 "yacc.tab.c"
            break;

        case 138:
#line 698 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "factor";
            yyval->children.push_back(yyvsp[0]);
        }
#line 3064 "yacc.tab.c"
            break;

        case 139:
#line 702 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "factor";
            yyval->children.push_back(yyvsp[0]);
        }
#line 3074 "yacc.tab.c"
            break;

        case 140:
#line 706 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "factor";
            yyval->children.push_back(yyvsp[0]);
        }
#line 3084 "yacc.tab.c"
            break;

        case 141:
#line 710 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "factor";
            yyval->children.push_back(yyvsp[-3]);
            yyval->children.push_back(yyvsp[-2]);
            yyval->children.push_back(yyvsp[-1]);
            yyval->children.push_back(yyvsp[0]);
        }
#line 3095 "yacc.tab.c"
            break;

        case 142:
#line 715 "yacc.y"
        { //ERROR 缺少右括号 这里引发了一个移进规约冲突
            yyval = new Type;
            yyval->token = "factor";
            yyerror("missing a right bracket here", (yylsp[-1]).last_line, (yylsp[-1]).last_column + 1);
        }
#line 3105 "yacc.tab.c"
            break;

        case 143:
#line 719 "yacc.y"
        { //ERROR 函数调用的表达式列表缺失
            yyval = new Type;
            yyval->token = "factor";
            yyerror("missing actual parameter list of function call", (yylsp[-1]).last_line,
                    (yylsp[-1]).last_column + 1);
        }
#line 3115 "yacc.tab.c"
            break;

        case 144:
#line 723 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "factor";
            yyval->children.push_back(yyvsp[-2]);
            yyval->children.push_back(yyvsp[-1]);
            yyval->children.push_back(yyvsp[0]);
        }
#line 3125 "yacc.tab.c"
            break;

        case 145:
#line 727 "yacc.y"
        { //ERROR 缺少右括号
            yyval = new Type;
            yyval->token = "factor";
            yyerror("missing a right bracket here", (yylsp[-1]).last_line, (yylsp[-1]).last_column + 1);
        }
#line 3135 "yacc.tab.c"
            break;

        case 146:
#line 731 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "factor";
            yyval->children.push_back(yyvsp[-1]);
            yyval->children.push_back(yyvsp[0]);
        }
#line 3145 "yacc.tab.c"
            break;

        case 147:
#line 735 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "factor";
            yyval->children.push_back(yyvsp[-1]);
            yyval->children.push_back(yyvsp[0]);
        }
#line 3155 "yacc.tab.c"
            break;

        case 148:
#line 739 "yacc.y"
        { //正常
            yyval = new Type;
            yyval->token = "factor";
            yyval->children.push_back(yyvsp[0]);
        }
#line 3165 "yacc.tab.c"
            break;


#line 3169 "yacc.tab.c"

        default:
            break;
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
    if (!yyerrstatus) {
        ++yynerrs;
#if !YYERROR_VERBOSE
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
            else if (yysyntax_error_status == 1) {
                if (yymsg != yymsgbuf)
                    YYSTACK_FREE(yymsg);
                yymsg = YY_CAST (char *, YYSTACK_ALLOC(YY_CAST(YYSIZE_T, yymsg_alloc)));
                if (!yymsg) {
                    yymsg = yymsgbuf;
                    yymsg_alloc = sizeof yymsgbuf;
                    yysyntax_error_status = 2;
                } else {
                    yysyntax_error_status = YYSYNTAX_ERROR;
                    yymsgp = yymsg;
                }
            }
            yyerror(yymsgp);
            if (yysyntax_error_status == 2)
                goto yyexhaustedlab;
        }
# undef YYSYNTAX_ERROR
#endif
    }

    yyerror_range[1] = yylloc;

    if (yyerrstatus == 3) {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        if (yychar <= YYEOF) {
            /* Return failure if at end of input.  */
            if (yychar == YYEOF)
                YYABORT;
        } else {
            yydestruct("Error: discarding",
                       yytoken, &yylval, &yylloc);
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

    for (;;) {
        yyn = yypact[yystate];
        if (!yypact_value_is_default (yyn)) {
            yyn += YYTERROR;
            if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR) {
                yyn = yytable[yyn];
                if (0 < yyn)
                    break;
            }
        }

        /* Pop the current state because it cannot handle the error token.  */
        if (yyssp == yyss)
            YYABORT;

        yyerror_range[1] = *yylsp;
        yydestruct("Error: popping",
                   yystos[yystate], yyvsp, yylsp);
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
    yyerror(YY_("memory exhausted"));
    yyresult = 2;
    /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
    yyreturn:
    if (yychar != YYEMPTY) {
        /* Make sure we have latest lookahead translation.  See comments at
           user semantic actions for why this is necessary.  */
        yytoken = YYTRANSLATE (yychar);
        yydestruct("Cleanup: discarding lookahead",
                   yytoken, &yylval, &yylloc);
    }
    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    YYPOPSTACK (yylen);
    YY_STACK_PRINT (yyss, yyssp);
    while (yyssp != yyss) {
        yydestruct("Cleanup: popping",
                   yystos[+*yyssp], yyvsp, yylsp);
        YYPOPSTACK (1);
    }
#ifndef yyoverflow
    if (yyss != yyssa)
        YYSTACK_FREE(yyss);
#endif
#if YYERROR_VERBOSE
    if (yymsg != yymsgbuf)
        YYSTACK_FREE(yymsg);
#endif
    return yyresult;
}

#line 745 "yacc.y"


void yyerror(const char *s) {
    haveSemanticError = true;//错误标志，含有语法错误
    string errorInformation;//定义错误信息
    errorInformation += string(s);//添加错误信息
    errorInformation += ", location: " + itos(yylineno - 1) + "." + itos(yycolumn - yyleng);//添加错误位置
    syntaxErrorInformation.push_back(errorInformation);//存放错误信息
    CHECK_ERROR_BOUND
}

void yyerror(const char *s, YYLTYPE *loc) {//处理单个字符的错误
    haveSemanticError = true;
    string errorInformation;
    errorInformation =
            "syntax error, " + string(s) + ", location: " + itos(loc->first_line) + "." + itos(loc->first_column) +
            "-" + itos(loc->last_line) + "." + itos(loc->last_column);
    syntaxErrorInformation.push_back(errorInformation);
    CHECK_ERROR_BOUND
}

void yyerror(const char *s, int line, int col) {//处理一行以内的错误
    haveSemanticError = true;
    string errorInformation;
    errorInformation = "syntax error, " + string(s) + ", location: " + itos(line) + "." + itos(col);
    syntaxErrorInformation.push_back(errorInformation);
    CHECK_ERROR_BOUND
}

void yyerror(const char *s, int startLine, int startCol, int endLine, int endCol) {//处理涉及多行的错误
    haveSemanticError = true;
    string errorInformation;
    errorInformation = "syntax error, " + string(s) + ", location: " + itos(startLine) + "." + itos(startCol) + "-" +
                       itos(endLine) + "." + itos(endCol);
    syntaxErrorInformation.push_back(errorInformation);
    CHECK_ERROR_BOUND
}

