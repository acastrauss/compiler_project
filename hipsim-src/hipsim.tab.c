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
#line 19 "hipsim.y"


#define YYDEBUG 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <getopt.h>
#include <libgen.h> //basename
#include <unistd.h> //isatty
#include "defs.h"
#include "simulator.h"

int yyparse(void);
int yylex(void);
int yyerror(char *s);
void warning(char *s);

extern int yylineno;
extern int code_cnt;
extern int source_cnt;
extern int max_steps;
extern Processor processor;
char char_buffer[CHAR_BUFFER_LENGTH];
int error_count = 0;
extern Symtab symtab[SYMTAB_LEN];      //tabela simbola (labela)
int mainarg = 0;


#line 100 "hipsim.tab.c"

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
#ifndef YY_YY_HIPSIM_TAB_H_INCLUDED
# define YY_YY_HIPSIM_TAB_H_INCLUDED
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
    _WORD = 258,
    _BYTE = 259,
    _PUSH = 260,
    _POP = 261,
    _CALL = 262,
    _RET = 263,
    _CMP = 264,
    _JMP = 265,
    _JEQ = 266,
    _JNE = 267,
    _JGT = 268,
    _JLT = 269,
    _JGE = 270,
    _JLE = 271,
    _JC = 272,
    _JNC = 273,
    _JO = 274,
    _JNO = 275,
    _ADD = 276,
    _SUB = 277,
    _MUL = 278,
    _DIV = 279,
    _MOV = 280,
    _HALT = 281,
    _AND = 282,
    _OR = 283,
    _XOR = 284,
    _NOT = 285,
    _REGISTER = 286,
    _CONSTANT = 287,
    _NUMBER = 288,
    _LABEL_DEF = 289,
    _LABEL = 290,
    _ADDRESS = 291,
    _COMMA = 292,
    _LPAREN = 293,
    _RPAREN = 294
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 49 "hipsim.y"

    long i;
    char* s;

#line 197 "hipsim.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_HIPSIM_TAB_H_INCLUDED  */



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
typedef yytype_int8 yy_state_t;

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   136

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  17
/* YYNRULES -- Number of rules.  */
#define YYNRULES  51
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  119

#define YYUNDEFTOK  2
#define YYMAXUTOK   294


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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   104,   104,   111,   112,   117,   116,   127,   126,   139,
     140,   144,   145,   149,   158,   159,   160,   161,   162,   170,
     176,   182,   188,   196,   202,   208,   214,   220,   229,   235,
     240,   245,   250,   255,   260,   265,   270,   275,   280,   285,
     293,   299,   305,   310,   318,   328,   333,   338,   343,   347,
     352,   361
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "_WORD", "_BYTE", "_PUSH", "_POP",
  "_CALL", "_RET", "_CMP", "_JMP", "_JEQ", "_JNE", "_JGT", "_JLT", "_JGE",
  "_JLE", "_JC", "_JNC", "_JO", "_JNO", "_ADD", "_SUB", "_MUL", "_DIV",
  "_MOV", "_HALT", "_AND", "_OR", "_XOR", "_NOT", "_REGISTER", "_CONSTANT",
  "_NUMBER", "_LABEL_DEF", "_LABEL", "_ADDRESS", "_COMMA", "_LPAREN",
  "_RPAREN", "$accept", "program", "variable_list", "variable", "@1", "@2",
  "code_list", "code_line", "label_def", "asm_line", "logical",
  "arithmetic", "flowcontrol", "stack", "label", "output", "input", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294
};
# endif

#define YYPACT_NINF (-31)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-8)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -31,     4,    30,   -31,   -30,   -24,   -25,   -31,   -30,   -25,
     -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,
     -30,   -30,   -30,   -30,   -30,   -31,   -30,   -30,   -30,   -30,
      12,   -31,   102,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,   -26,   -31,   -31,   -14,   -31,   -31,   -31,   -31,
     -31,   -19,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,   -18,   -17,   -16,   -15,   -13,    -7,    24,
      26,    39,    20,    73,   -31,   -31,    48,    41,   -30,   -30,
     -30,   -30,   -30,   -24,   -30,   -30,   -30,   -24,    55,    59,
      42,   -31,   -31,    57,    58,    60,    61,   -31,    62,    96,
      97,   -31,   -31,   -31,   -31,   -24,   -24,   -24,   -24,   -24,
     -24,   -24,   -31,   -31,   -31,   -31,   -31,   -31,   -31
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     0,     1,     0,     0,     0,    43,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    18,     0,     0,     0,     0,
      13,     4,     2,     9,    11,    12,    15,    14,    16,    17,
      45,    49,     0,    44,    50,     0,    48,    51,    40,    41,
      42,     0,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    13,    10,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    47,    28,     0,     0,     0,     0,    27,     0,     0,
       0,    22,     6,     8,    46,     0,     0,     0,     0,     0,
       0,     0,    23,    24,    25,    26,    19,    20,    21
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -31,   -31,   -31,   -31,   -31,   -31,   -31,    64,   -31,   -31,
     -31,   -31,   -31,   -31,    56,    -5,     5
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     2,    31,    72,    73,    32,    33,    34,    35,
      36,    37,    38,    39,    46,    47,    48
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      49,    40,    41,    42,     3,    43,    44,    40,    45,    42,
      43,    43,    76,    51,    45,    -5,    -7,    77,    78,    79,
      80,    81,    82,    88,    83,    63,    64,    65,    66,    67,
      84,    68,    69,    70,    71,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    85,    50,    86,    30,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    87,    89,    97,    90,
      91,   104,   101,    92,    93,    94,    95,    96,   102,    98,
      99,   100,   103,     0,   105,   106,    75,   107,   108,   109,
     112,   113,   114,   115,   116,   117,   118,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,   110,   111,     0,    74
};

static const yytype_int8 yycheck[] =
{
       5,    31,    32,    33,     0,    35,    36,    31,    38,    33,
      35,    35,    38,     8,    38,     3,     4,    31,    37,    37,
      37,    37,    37,     3,    37,    20,    21,    22,    23,    24,
      37,    26,    27,    28,    29,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    37,     6,    37,    34,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    37,     4,    83,    31,
      39,    39,    87,    78,    79,    80,    81,    82,    33,    84,
      85,    86,    33,    -1,    37,    37,    32,    37,    37,    37,
     105,   106,   107,   108,   109,   110,   111,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    37,    37,    -1,    34
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    41,    42,     0,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      34,    43,    46,    47,    48,    49,    50,    51,    52,    53,
      31,    32,    33,    35,    36,    38,    54,    55,    56,    55,
      54,    56,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    44,    45,    34,    47,    38,    31,    37,    37,
      37,    37,    37,    37,    37,    37,    37,    37,     3,     4,
      31,    39,    56,    56,    56,    56,    56,    55,    56,    56,
      56,    55,    33,    33,    39,    37,    37,    37,    37,    37,
      37,    37,    55,    55,    55,    55,    55,    55,    55
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    40,    41,    42,    42,    44,    43,    45,    43,    46,
      46,    47,    47,    48,    49,    49,    49,    49,    49,    50,
      50,    50,    50,    51,    51,    51,    51,    51,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      53,    53,    53,    53,    54,    55,    55,    55,    55,    56,
      56,    56
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     0,     2,     0,     4,     0,     4,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     6,
       6,     6,     4,     6,     6,     6,     6,     4,     4,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     1,     1,     1,     4,     3,     1,     1,
       1,     1
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
  YYUSE (yytype);
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
#line 105 "hipsim.y"
        {
            add_entry_code(mainarg);
        }
#line 1450 "hipsim.tab.c"
    break;

  case 5:
#line 117 "hipsim.y"
        { (yyval.i) = yylineno; }
#line 1456 "hipsim.tab.c"
    break;

  case 6:
#line 119 "hipsim.y"
        {
            uchar data[256];
            int i,len = (yyvsp[0].i)*4;
            for (i=0; i<len; i++) data[i] = 0;
            insert_source("%s:\t\t\tWORD %ld",(yyvsp[-3].s),(yyvsp[0].i));
            insert_data(data,len, (yyvsp[-3].s), (yyvsp[-2].i));
        }
#line 1468 "hipsim.tab.c"
    break;

  case 7:
#line 127 "hipsim.y"
        { (yyval.i) = yylineno; }
#line 1474 "hipsim.tab.c"
    break;

  case 8:
#line 129 "hipsim.y"
        {
            uchar data[256];
            int i,len = (yyvsp[0].i)*4;
            for (i=0; i<len; i++) data[i] = 0;
            insert_source("%s:\t\t\tBYTE %ld",(yyvsp[-3].s),(yyvsp[0].i));
            insert_data(data,len, (yyvsp[-3].s), (yyvsp[-2].i));
        }
#line 1486 "hipsim.tab.c"
    break;

  case 13:
#line 150 "hipsim.y"
        {
            insert_source("%s:",(yyvsp[0].s));
            insert_label((yyvsp[0].s), code_cnt, yylineno, SYM_JUMP);
            source_cnt++;
        }
#line 1496 "hipsim.tab.c"
    break;

  case 18:
#line 163 "hipsim.y"
        {
            insert_source("\t\t\tHALT");
            insert_code(INS_HALT, NO_TYPE, yylineno);
        }
#line 1505 "hipsim.tab.c"
    break;

  case 19:
#line 171 "hipsim.y"
        {
            insert_source("\t\t\tAND %s, %s, %s", (yyvsp[-4].s), (yyvsp[-2].s), (yyvsp[0].s));
            insert_code(INS_AND, (yyvsp[-5].i), yylineno);
            free((yyvsp[-4].s)); free((yyvsp[-2].s)); free((yyvsp[0].s));
        }
#line 1515 "hipsim.tab.c"
    break;

  case 20:
#line 177 "hipsim.y"
        {
            insert_source("\t\t\tOR %s, %s, %s", (yyvsp[-4].s), (yyvsp[-2].s), (yyvsp[0].s));
            insert_code(INS_OR, (yyvsp[-5].i), yylineno);
            free((yyvsp[-4].s)); free((yyvsp[-2].s)); free((yyvsp[0].s));
        }
#line 1525 "hipsim.tab.c"
    break;

  case 21:
#line 183 "hipsim.y"
        {
            insert_source("\t\t\tXOR %s, %s, %s", (yyvsp[-4].s), (yyvsp[-2].s), (yyvsp[0].s));
            insert_code(INS_XOR, (yyvsp[-5].i), yylineno);
            free((yyvsp[-4].s)); free((yyvsp[-2].s)); free((yyvsp[0].s));
        }
#line 1535 "hipsim.tab.c"
    break;

  case 22:
#line 189 "hipsim.y"
        {
            insert_source("\t\t\tNOT %s, %s", (yyvsp[-2].s), (yyvsp[0].s));
            insert_code(INS_NOT, (yyvsp[-3].i), yylineno);
            free((yyvsp[-2].s)); free((yyvsp[0].s));
        }
#line 1545 "hipsim.tab.c"
    break;

  case 23:
#line 197 "hipsim.y"
        {
            insert_source("\t\t\tADD%c %s, %s, %s", type_char((yyvsp[-5].i)), (yyvsp[-4].s), (yyvsp[-2].s), (yyvsp[0].s));
            insert_code(INS_ADD, (yyvsp[-5].i), yylineno);
            free((yyvsp[-4].s)); free((yyvsp[-2].s)); free((yyvsp[0].s));
        }
#line 1555 "hipsim.tab.c"
    break;

  case 24:
#line 203 "hipsim.y"
        {
            insert_source("\t\t\tSUB%c %s, %s, %s", type_char((yyvsp[-5].i)), (yyvsp[-4].s), (yyvsp[-2].s), (yyvsp[0].s));
            insert_code(INS_SUB, (yyvsp[-5].i), yylineno);
            free((yyvsp[-4].s)); free((yyvsp[-2].s)); free((yyvsp[0].s));
        }
#line 1565 "hipsim.tab.c"
    break;

  case 25:
#line 209 "hipsim.y"
        {
            insert_source("\t\t\tMUL%c %s, %s, %s", type_char((yyvsp[-5].i)), (yyvsp[-4].s), (yyvsp[-2].s), (yyvsp[0].s));
            insert_code(INS_MUL, (yyvsp[-5].i), yylineno);
            free((yyvsp[-4].s)); free((yyvsp[-2].s)); free((yyvsp[0].s));
        }
#line 1575 "hipsim.tab.c"
    break;

  case 26:
#line 215 "hipsim.y"
        {
            insert_source("\t\t\tDIV%c %s, %s, %s", type_char((yyvsp[-5].i)), (yyvsp[-4].s), (yyvsp[-2].s), (yyvsp[0].s));
            insert_code(INS_DIV, (yyvsp[-5].i), yylineno);
            free((yyvsp[-4].s)); free((yyvsp[-2].s)); free((yyvsp[0].s));
        }
#line 1585 "hipsim.tab.c"
    break;

  case 27:
#line 221 "hipsim.y"
        {
            insert_source("\t\t\tMOV %s, %s", (yyvsp[-2].s), (yyvsp[0].s));
            insert_code(INS_MOV, NO_TYPE, yylineno);
            free((yyvsp[-2].s)); free((yyvsp[0].s));
        }
#line 1595 "hipsim.tab.c"
    break;

  case 28:
#line 230 "hipsim.y"
        {
            insert_source("\t\t\tCMP%c %s, %s", type_char((yyvsp[-3].i)), (yyvsp[-2].s), (yyvsp[0].s));
            insert_code(INS_CMP, (yyvsp[-3].i), yylineno);
            free((yyvsp[-2].s)); free((yyvsp[0].s));
        }
#line 1605 "hipsim.tab.c"
    break;

  case 29:
#line 236 "hipsim.y"
        {
            insert_source("\t\t\tJMP %s", (yyvsp[0].s));
            insert_code(INS_JMP, NO_TYPE, yylineno);
        }
#line 1614 "hipsim.tab.c"
    break;

  case 30:
#line 241 "hipsim.y"
        {
            insert_source("\t\t\tJEQ %s", (yyvsp[0].s));
            insert_code(INS_JEQ, NO_TYPE, yylineno);
        }
#line 1623 "hipsim.tab.c"
    break;

  case 31:
#line 246 "hipsim.y"
        {
            insert_source("\t\t\tJNE %s", (yyvsp[0].s));
            insert_code(INS_JNE, NO_TYPE, yylineno);
        }
#line 1632 "hipsim.tab.c"
    break;

  case 32:
#line 251 "hipsim.y"
        {
            insert_source("\t\t\tJGT%c %s", type_char((yyvsp[-1].i)), (yyvsp[0].s));
            insert_code(INS_JGT, (yyvsp[-1].i), yylineno);
        }
#line 1641 "hipsim.tab.c"
    break;

  case 33:
#line 256 "hipsim.y"
        {
            insert_source("\t\t\tJLT%c %s", type_char((yyvsp[-1].i)), (yyvsp[0].s));
            insert_code(INS_JLT, (yyvsp[-1].i), yylineno);
        }
#line 1650 "hipsim.tab.c"
    break;

  case 34:
#line 261 "hipsim.y"
        {
            insert_source("\t\t\tJGE%c %s", type_char((yyvsp[-1].i)), (yyvsp[0].s));
            insert_code(INS_JGE, (yyvsp[-1].i), yylineno);
        }
#line 1659 "hipsim.tab.c"
    break;

  case 35:
#line 266 "hipsim.y"
        {
            insert_source("\t\t\tJLE%c %s", type_char((yyvsp[-1].i)), (yyvsp[0].s));
            insert_code(INS_JLE, (yyvsp[-1].i), yylineno);
        }
#line 1668 "hipsim.tab.c"
    break;

  case 36:
#line 271 "hipsim.y"
        {
            insert_source("\t\t\tJC %s", (yyvsp[0].s));
            insert_code(INS_JC, NO_TYPE, yylineno);
        }
#line 1677 "hipsim.tab.c"
    break;

  case 37:
#line 276 "hipsim.y"
        {
            insert_source("\t\t\tJNC %s", (yyvsp[0].s));
            insert_code(INS_JNC, NO_TYPE, yylineno);
        }
#line 1686 "hipsim.tab.c"
    break;

  case 38:
#line 281 "hipsim.y"
        {
            insert_source("\t\t\tJO %s", (yyvsp[0].s));
            insert_code(INS_JO, NO_TYPE, yylineno);
        }
#line 1695 "hipsim.tab.c"
    break;

  case 39:
#line 286 "hipsim.y"
        {
            insert_source("\t\t\tJNO %s", (yyvsp[0].s));
            insert_code(INS_JNO, NO_TYPE, yylineno);
        }
#line 1704 "hipsim.tab.c"
    break;

  case 40:
#line 294 "hipsim.y"
        {
            insert_source("\t\t\tPUSH %s", (yyvsp[0].s));
            insert_code(INS_PUSH, NO_TYPE, yylineno);
            free((yyvsp[0].s));
        }
#line 1714 "hipsim.tab.c"
    break;

  case 41:
#line 300 "hipsim.y"
        {
            insert_source("\t\t\tPOP %s", (yyvsp[0].s));
            insert_code(INS_POP, NO_TYPE, yylineno);
            free((yyvsp[0].s));
        }
#line 1724 "hipsim.tab.c"
    break;

  case 42:
#line 306 "hipsim.y"
        {
            insert_source("\t\t\tCALL %s", (yyvsp[0].s));
            insert_code(INS_CALL, NO_TYPE, yylineno);
        }
#line 1733 "hipsim.tab.c"
    break;

  case 43:
#line 311 "hipsim.y"
        {
            insert_source("\t\t\tRET");
            insert_code(INS_RET, NO_TYPE, yylineno);
        }
#line 1742 "hipsim.tab.c"
    break;

  case 44:
#line 319 "hipsim.y"
        {
            int l;
            (yyval.s) = make_opstr("%s",(yyvsp[0].s));
            l = use_label((yyvsp[0].s), yylineno);
            add_operand(OP_DATA,0,l);
        }
#line 1753 "hipsim.tab.c"
    break;

  case 45:
#line 329 "hipsim.y"
        {
            add_operand(OP_REGISTER,(yyvsp[0].i),0);
            (yyval.s) = make_opstr("%%%ld",(yyvsp[0].i));
        }
#line 1762 "hipsim.tab.c"
    break;

  case 46:
#line 334 "hipsim.y"
        {
            add_operand(OP_INDEX,(yyvsp[-1].i),(yyvsp[-3].i));
            (yyval.s) = make_opstr("%ld(%%%ld)",(yyvsp[-3].i),(yyvsp[-1].i));
        }
#line 1771 "hipsim.tab.c"
    break;

  case 47:
#line 339 "hipsim.y"
        {
            add_operand(OP_INDIRECT,(yyvsp[-1].i),0);
            (yyval.s) = make_opstr("(%%%ld)",(yyvsp[-1].i));
        }
#line 1780 "hipsim.tab.c"
    break;

  case 49:
#line 348 "hipsim.y"
        {
            add_operand(OP_CONSTANT,0,(yyvsp[0].i));
            (yyval.s) = make_opstr("$%ld",(yyvsp[0].i));
        }
#line 1789 "hipsim.tab.c"
    break;

  case 50:
#line 353 "hipsim.y"
        {
            int l;
            (yyval.s) = make_opstr("$%s",(yyvsp[0].s));
            l = use_label((yyvsp[0].s), yylineno);
            /* if (symtab[l].usage == LAB_UNDEFINED)
                parsererror("Undeclared global variable %s",$1); */
            add_operand(OP_CONSTANT,0,symtab[l].address);
        }
#line 1802 "hipsim.tab.c"
    break;


#line 1806 "hipsim.tab.c"

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
#line 364 "hipsim.y"


int yyerror(char *s) {
    fprintf(stderr, "\nSimulator: ASM parsing error in line %d: %s\n", yylineno, s);
    error_count++;
    return 0;
}

int main(int argc, char *argv[]) {
    int i;
    char c;
    char run_complete = FALSE;
    char syntax_check = FALSE;
    char *print_variable = 0;
    //yydebug = 1;  //debagovanje parsera

    //parsiranje opcija programa
    opterr=0;
    while (1) {
        c = getopt(argc, argv, ":hcra:p:s:");
        if (c == -1) break;
        switch(c) {
            case 'h' : {
                    cprintf("\n{BLU}Hypothetic processor simulator{NRM} v%s",VERSION);
                    cprintf("\n\nUsage: {BLU}%s{NRM} [options] {BLU}< asm_file{NRM}", basename(strdup(argv[0])));
                    cprintf("\nIf started without options, simulator will run asm code");
                    cprintf("\nstep by step. Possible options are:");
                    cprintf("\n{GRN}-h{NRM}     - this help");
                    cprintf("\n{GRN}-c{NRM}     - syntax check of asm code, without execution");
                    cprintf("\n{GRN}-r{NRM}     - complete run of the program, only exit code (%%%d) output",FUNCTION_REGISTER);
                    cprintf("\n{GRN}-p VAR{NRM} - complete run of the program, only global var output");
                    cprintf("\n{GRN}-a VAR{NRM} - value of argument passed to main function (default: 0)");
                    cprintf("\n{GRN}-s NUM{NRM} - maximal number of execution steps for complete run");
                    cprintf("\n         (simulator will return code %d if this number is reached)\n\n",STEP_ERROR);
                    exit(0);
                    break; }
            case 'c' : {
                    syntax_check = TRUE;
                    break; }
            case 'r' : {
                    run_complete = TRUE;
                    break; }
            case 'a' : {
                    mainarg = atoi(optarg);
                    break; }
            case 'p' : {
                    run_complete = TRUE;
                    print_variable = optarg;
                    break; }
            case 's' : {
                    max_steps = atoi(optarg);
                    break; }
            case '?' : {
                    argerror("Unknown option %c",optopt);
                    break; }
            case ':' : {
                    argerror("Argument missing for option %c",optopt);
                    break; }
            default : {
                    argerror("Unknown getopt return code 0x%X",c);
                    break; }
        }
    }

    //proveri da li postoji ulazni fajl
    if (isatty(fileno(stdin))) {
        argerror("No input file was specified.");
    }

    //parsiranje asemblerskog koda
    init_simulator();
    if ( ! yyparse() ) {
        check_labels();
        if (print_variable && !check_global(print_variable)) {
            argerror("Undeclared global variable %s",print_variable);
        }
    }

    //preusmeravanje terminala na stdin
    freopen("/dev/tty", "rw", stdin);

    if (error_count) {
        if (!run_complete)
            cprintf("\n{RED}There were error(s) in ASM source.{NRM}", error_count);
        printf("\n");
        exit(PARSE_ERROR);
    } else if (syntax_check)
            cprintf("{GRN}OK{NRM}");
    else {
        if (run_complete) {
            run();
            if (max_steps != 0) {
                if (print_variable)
                    printf("%d",get_global(print_variable));
                else
                    printf("%d",processor.reg[FUNCTION_REGISTER]);
            } else
                cprintf("\n{RED}Program terminated.{NRM}");
        } else {
            while (!processor.halt) {
                system("clear");
                print_source(PRINT_SRCLINES);
                print_global();
                print_registers();
                print_stack(PRINT_STKLINES);
                printf("\nPress any key to continue, ctrl+c for exit...");
                getch();
                run_once();
            }
            system("clear");
            print_source(PRINT_SRCLINES);
            print_global();
            print_registers();
            print_stack(PRINT_STKLINES);
            cprintf("\n\n{BLU}Program exit code (%%%d): {GRN}%d{NRM}\n",
                    FUNCTION_REGISTER, processor.reg[FUNCTION_REGISTER]);
            printf("\nAll OK.\n");
        }
    }
    printf("\n");
    if (error_count)
        return PARSE_ERROR;
    else if (max_steps != 0)
        return NO_ERROR;
    else
        //izvršeno max_steps koraka, a program se nije završio
        return STEP_ERROR;
}

