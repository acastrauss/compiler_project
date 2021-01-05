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
#line 1 "micko.y"

  #include <stdio.h>
  #include <stdlib.h>
  #include "defs.h"
  #include "symtab.h"
  #include "codegen.h"

  int yyparse(void);
  int yylex(void);
  int yyerror(char *s);
  void warning(char *s);

  extern int yylineno;
  int out_lin = 0;
  char char_buffer[CHAR_BUFFER_LENGTH];
  int error_count = 0;
  int warning_count = 0;
  int var_num = 0;
  int fun_idx = -1;
  int fcall_idx = -1;

  int id_type = 0; 
  int num_of_param = 0;
  int curr_arg = 0;

  int indx_para = 0;
  int indx_branch = 0;

  bool has_return = 0;

  int lab_num = -1;
  FILE *output;

  int glb_num = 0; // num of global vars

  int var_num_before_id_list = 0;

  int rel_used = -1; // ako je bilo koja druga bool operacija ide sa jne, osim sa relacionim mora da se gleda koji je i tada ce cuvati koji je rel op

#line 110 "micko.tab.c"

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
#ifndef YY_YY_MICKO_TAB_H_INCLUDED
# define YY_YY_MICKO_TAB_H_INCLUDED
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
    _TYPE = 258,
    _IF = 259,
    _ELSE = 260,
    _RETURN = 261,
    _PARA = 262,
    _EN = 263,
    _DDOT = 264,
    _PASO = 265,
    _BRANCH = 266,
    _FIRST = 267,
    _SECOND = 268,
    _THIRD = 269,
    _OTHERWISE = 270,
    _ID = 271,
    _INT_NUMBER = 272,
    _UINT_NUMBER = 273,
    _BOOL_VALUE = 274,
    _LPAREN = 275,
    _RPAREN = 276,
    _LBRACKET = 277,
    _RBRACKET = 278,
    _LSQRBRACKET = 279,
    _RSQRBRACKET = 280,
    _ASSIGN = 281,
    _SEMICOLON = 282,
    _COMMA = 283,
    _RARROW = 284,
    _QMARK = 285,
    _DOUBLEDOT = 286,
    _NOT = 287,
    _AROP = 288,
    _RELOP = 289,
    _INCOP = 290,
    _BOOLOP = 291,
    ONLY_IF = 292
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 41 "micko.y"

  int i;
  char *s;

#line 205 "micko.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MICKO_TAB_H_INCLUDED  */



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
typedef yytype_uint8 yy_state_t;

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
#define YYLAST   209

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  87
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  171

#define YYUNDEFTOK  2
#define YYMAXUTOK   292


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
      35,    36,    37
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   100,   100,   109,   110,   115,   114,   134,   135,   140,
     154,   139,   182,   183,   187,   188,   192,   212,   211,   219,
     220,   225,   224,   264,   265,   269,   276,   286,   287,   291,
     292,   293,   294,   295,   296,   297,   302,   307,   301,   326,
     334,   325,   377,   379,   386,   387,   388,   392,   396,   413,
     415,   438,   443,   447,   463,   471,   476,   484,   488,   505,
     511,   520,   522,   523,   529,   534,   536,   541,   553,   555,
     560,   562,   568,   567,   592,   593,   598,   599,   603,   621,
     623,   629,   634,   628,   658,   671,   679,   687
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "_TYPE", "_IF", "_ELSE", "_RETURN",
  "_PARA", "_EN", "_DDOT", "_PASO", "_BRANCH", "_FIRST", "_SECOND",
  "_THIRD", "_OTHERWISE", "_ID", "_INT_NUMBER", "_UINT_NUMBER",
  "_BOOL_VALUE", "_LPAREN", "_RPAREN", "_LBRACKET", "_RBRACKET",
  "_LSQRBRACKET", "_RSQRBRACKET", "_ASSIGN", "_SEMICOLON", "_COMMA",
  "_RARROW", "_QMARK", "_DOUBLEDOT", "_NOT", "_AROP", "_RELOP", "_INCOP",
  "_BOOLOP", "ONLY_IF", "$accept", "program", "global_varlist",
  "global_var", "$@1", "function_list", "function", "$@2", "$@3",
  "real_param_list", "parameter_list", "parameter", "body", "$@4",
  "variable_list", "variable", "$@5", "opt_assign", "id_list",
  "statement_list", "statement", "branch_statement", "$@6", "$@7",
  "para_statement", "$@8", "$@9", "paso_part", "exp_statement",
  "compound_statement", "assignment_statement", "num_exp", "basic_bool",
  "bool_exp", "inc_exp", "exp", "conditional_exp", "exp_c", "literal",
  "function_call", "$@10", "real_arg_list", "argument_list", "argument",
  "if_statement", "if_part", "@11", "$@12", "rel_exp", "return_statement", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292
};
# endif

#define YYPACT_NINF (-122)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-73)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -122,     7,     8,  -122,    17,  -122,    22,  -122,    44,    59,
    -122,   -22,    65,  -122,    -4,  -122,  -122,    88,    -3,  -122,
    -122,  -122,    -4,    76,    82,  -122,   134,  -122,   106,  -122,
      68,    93,  -122,  -122,  -122,   120,  -122,    94,  -122,  -122,
     117,    74,    34,   130,     2,  -122,  -122,    62,    62,  -122,
       2,     2,  -122,  -122,   136,    88,     2,  -122,   111,  -122,
      -4,   121,   149,    35,    83,  -122,   116,  -122,  -122,  -122,
     152,  -122,   121,   135,  -122,   159,   153,  -122,     2,    73,
    -122,  -122,    -4,    26,  -122,  -122,  -122,     2,   154,  -122,
      85,   179,  -122,     2,   111,  -122,  -122,  -122,  -122,   167,
      70,  -122,   151,   164,    33,   170,   163,   103,  -122,  -122,
    -122,  -122,  -122,  -122,  -122,  -122,  -122,   183,  -122,   173,
    -122,  -122,  -122,   139,   129,  -122,   174,    -4,   108,   128,
    -122,     2,  -122,  -122,   184,  -122,  -122,  -122,  -122,   135,
     171,   165,   172,    99,    99,   128,   186,   168,  -122,    99,
      99,   188,   175,    99,  -122,    99,  -122,   178,   176,   128,
    -122,  -122,   190,   128,   187,   128,   182,   128,   191,   128,
    -122
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     0,     1,     0,     4,     2,     7,     5,     0,
       8,     0,     0,     9,     0,    23,     6,    12,    63,    70,
      71,    51,     0,     0,     0,    24,     0,    57,     0,    62,
      49,     0,    61,    64,    52,     0,    10,    13,    14,    59,
       0,     0,     0,     0,     0,    60,    44,     0,     0,    45,
       0,     0,    46,    16,     0,     0,    74,    65,    56,    66,
       0,     0,     0,    49,     0,    50,    84,    49,    58,    53,
       0,    15,    68,    69,    78,     0,    75,    76,     0,     0,
      54,    55,     0,     0,    19,    11,    73,     0,     0,    56,
       0,    17,    77,     0,     0,    21,    27,    20,    67,     0,
       0,    25,     0,     0,     0,     0,     0,    63,    27,    18,
      28,    34,    33,    32,    29,    30,    31,    79,    35,     0,
      22,    81,    87,     0,     0,    39,     0,     0,     0,     0,
      26,     0,    85,    86,     0,    36,    48,    47,    80,    82,
       0,     0,     0,     0,     0,     0,     0,     0,    83,     0,
       0,    42,     0,     0,    40,     0,    43,     0,     0,     0,
      37,    41,     0,     0,     0,     0,     0,     0,     0,     0,
      38
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -122,  -122,  -122,  -122,  -122,  -122,   197,  -122,  -122,  -122,
    -122,   150,  -122,  -122,  -122,  -122,  -122,   105,  -122,   100,
    -121,  -122,  -122,  -122,  -122,  -122,  -122,  -122,   -14,  -122,
    -122,   -21,   125,   -20,  -122,   -38,   -19,   -24,     9,  -122,
    -122,  -122,  -122,   122,  -122,  -122,  -122,  -122,  -122,  -122
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     5,    11,     6,     7,    12,    54,    36,
      37,    38,    85,    96,    91,    97,    99,    16,   102,   100,
     110,   111,   141,   162,   112,   134,   157,   154,   113,   114,
     115,    26,    27,    28,    29,    30,    31,    74,    32,    33,
      40,    75,    76,    77,   116,   117,   131,   142,    34,   118
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      25,    41,    42,    43,    14,    15,    63,     3,   138,    65,
      67,     4,    18,    19,    20,    21,    22,   -72,    18,    19,
      20,    21,    60,    61,   148,     9,    67,    66,    23,    61,
      61,    24,    39,     8,    23,    72,    73,    24,   161,    41,
      79,    43,   164,    83,   166,    43,   168,    57,   170,    18,
      19,    20,    21,    60,    88,    58,    81,    72,    73,    47,
     122,    41,    90,    43,    -9,    23,    72,    73,    24,    98,
      50,    51,    72,    73,   103,    13,   104,   105,    18,    19,
      20,   106,    64,   123,   124,    17,   107,    19,    20,    21,
      22,    35,   108,   109,    89,    57,    44,    24,    45,    18,
      19,    20,    23,    82,    51,    24,    94,    47,    48,    50,
      61,   139,   103,   136,   104,   105,    19,    20,    24,   106,
      52,    50,    55,   -72,   107,    19,    20,    21,    22,   127,
     108,   137,   103,    49,   104,   105,    53,    56,    39,   106,
      23,    78,    50,    24,   107,    19,    20,    21,    22,    47,
     108,    59,   146,   147,    47,    48,   133,    70,   151,   152,
      23,    46,   156,    24,   158,    50,   132,    47,    48,    62,
      80,    50,    47,    48,    84,    68,    69,    14,    15,   119,
      86,    87,    95,   101,   121,    93,   125,   126,   129,   130,
     135,   143,   140,   145,   144,   149,   167,   150,   153,   159,
     165,   160,   163,    10,   155,    71,   169,   120,   128,    92
};

static const yytype_uint8 yycheck[] =
{
      14,    22,    22,    22,    26,    27,    44,     0,   129,    47,
      48,     3,    16,    17,    18,    19,    20,    20,    16,    17,
      18,    19,    20,    44,   145,     3,    64,    48,    32,    50,
      51,    35,    35,    16,    32,    56,    56,    35,   159,    60,
      60,    60,   163,    64,   165,    64,   167,    21,   169,    16,
      17,    18,    19,    20,    78,    21,    21,    78,    78,    33,
      27,    82,    82,    82,    20,    32,    87,    87,    35,    93,
      36,    36,    93,    93,     4,    16,     6,     7,    16,    17,
      18,    11,    20,   104,   104,    20,    16,    17,    18,    19,
      20,     3,    22,    23,    21,    21,    20,    35,    16,    16,
      17,    18,    32,    20,    36,    35,    21,    33,    34,    36,
     131,   131,     4,   127,     6,     7,    17,    18,    35,    11,
      27,    36,    28,    20,    16,    17,    18,    19,    20,    26,
      22,    23,     4,    27,     6,     7,    16,    20,    35,    11,
      32,    30,    36,    35,    16,    17,    18,    19,    20,    33,
      22,    21,   143,   144,    33,    34,    27,    21,   149,   150,
      32,    27,   153,    35,   155,    36,    27,    33,    34,    44,
      21,    36,    33,    34,    22,    50,    51,    26,    27,    28,
      21,    28,     3,    16,    20,    31,    16,    24,     5,    16,
      16,    20,     8,    21,    29,     9,    14,    29,    10,    21,
      13,    25,    12,     6,    29,    55,    15,   102,   108,    87
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    39,    40,     0,     3,    41,    43,    44,    16,     3,
      44,    42,    45,    16,    26,    27,    55,    20,    16,    17,
      18,    19,    20,    32,    35,    66,    69,    70,    71,    72,
      73,    74,    76,    77,    86,     3,    47,    48,    49,    35,
      78,    69,    71,    74,    20,    16,    27,    33,    34,    27,
      36,    36,    27,    16,    46,    28,    20,    21,    21,    21,
      20,    69,    70,    73,    20,    73,    69,    73,    70,    70,
      21,    49,    69,    71,    75,    79,    80,    81,    30,    71,
      21,    21,    20,    69,    22,    50,    21,    28,    75,    21,
      71,    52,    81,    31,    21,     3,    51,    53,    75,    54,
      57,    16,    56,     4,     6,     7,    11,    16,    22,    23,
      58,    59,    62,    66,    67,    68,    82,    83,    87,    28,
      55,    20,    27,    69,    71,    16,    24,    26,    57,     5,
      16,    84,    27,    27,    63,    16,    66,    23,    58,    71,
       8,    60,    85,    20,    29,    21,    76,    76,    58,     9,
      29,    76,    76,    10,    65,    29,    76,    64,    76,    21,
      25,    58,    61,    12,    58,    13,    58,    14,    58,    15,
      58
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    38,    39,    40,    40,    42,    41,    43,    43,    45,
      46,    44,    47,    47,    48,    48,    49,    51,    50,    52,
      52,    54,    53,    55,    55,    56,    56,    57,    57,    58,
      58,    58,    58,    58,    58,    58,    60,    61,    59,    63,
      64,    62,    65,    65,    66,    66,    66,    67,    68,    69,
      69,    70,    70,    70,    70,    70,    70,    71,    71,    72,
      72,    73,    73,    73,    73,    73,    73,    74,    75,    75,
      76,    76,    78,    77,    79,    79,    80,    80,    81,    82,
      82,    84,    85,    83,    86,    87,    87,    87
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     0,     2,     0,     4,     1,     2,     0,
       0,     8,     0,     1,     1,     3,     2,     0,     5,     0,
       2,     0,     4,     1,     2,     1,     3,     0,     2,     1,
       1,     1,     1,     1,     1,     1,     0,     0,    20,     0,
       0,    12,     0,     2,     2,     2,     2,     3,     3,     1,
       3,     1,     1,     3,     4,     4,     3,     1,     3,     2,
       2,     1,     1,     1,     1,     3,     3,     7,     1,     1,
       1,     1,     0,     5,     0,     1,     1,     3,     1,     1,
       3,     0,     0,     7,     3,     3,     3,     2
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
#line 102 "micko.y"
      {  
        if(lookup_symbol("main", FUN) == NO_INDEX)
          err("undefined reference to 'main'");
       }
#line 1514 "micko.tab.c"
    break;

  case 5:
#line 115 "micko.y"
      {
        if(lookup_symbol((yyvsp[0].s), GLB) == NO_INDEX) 
        {
          gen_glbvar(insert_symbol((yyvsp[0].s), GLB, (yyvsp[-1].i), ++glb_num, create_atr2()));
          //insert_symbol($2, GLB, $1, ++glb_num, create_atr2());
        }
        else 
           err("redefinition of '%s'", (yyvsp[0].s));
      }
#line 1528 "micko.tab.c"
    break;

  case 6:
#line 125 "micko.y"
      {
        if ((get_type((yyvsp[0].i)) != (yyvsp[-3].i)) && (yyvsp[0].i) != -1) 
        {
          err("incompatible types in assignment.");
        }
      }
#line 1539 "micko.tab.c"
    break;

  case 9:
#line 140 "micko.y"
      {
        fun_idx = lookup_symbol((yyvsp[0].s), FUN);
        if(fun_idx == NO_INDEX)
          fun_idx = insert_symbol((yyvsp[0].s), FUN, (yyvsp[-1].i), NO_ATR, create_atr2());
        else 
          err("redefinition of function '%s'", (yyvsp[0].s));

        has_return = 0;
        
        code("\n%s:", (yyvsp[0].s));
        code("\n\t\tPUSH\t%%14");
        code("\n\t\tMOV \t%%15,%%14"); 
      }
#line 1557 "micko.tab.c"
    break;

  case 10:
#line 154 "micko.y"
      {
          set_atr1(fun_idx, num_of_param);
          
          ATR2* atr2p = get_atr2(fun_idx);
          if (atr2p == NULL) exit(55); // wrong index
          
          if(atr2p->occupied != num_of_param) exit(66); // not correct num of params
      }
#line 1570 "micko.tab.c"
    break;

  case 11:
#line 163 "micko.y"
      {
        if(!has_return && (get_type(fun_idx) != VOID)) 
        {
          warning("function should return non void value.");
        }

        clear_symbols(fun_idx + 1); // ne brise parametre, vec ce u sledecoj petlji da im izbrise nazive

        var_num = 0;
        num_of_param = 0;
      
        code("\n@%s_exit:", (yyvsp[-6].s));
        code("\n\t\tMOV \t%%14,%%15");
        code("\n\t\tPOP \t%%14");
        code("\n\t\tRET");
      }
#line 1591 "micko.tab.c"
    break;

  case 16:
#line 193 "micko.y"
      {
        if ((yyvsp[-1].i) == VOID)
          err("parameter %s can not be void.", (yyvsp[0].s));

        if(lookup_symbol((yyvsp[0].s), VAR|PAR) == NO_INDEX) 
        {
          insert_symbol((yyvsp[0].s), PAR, (yyvsp[-1].i), ++num_of_param, create_atr2());
          
          ATR2* atr2p = get_atr2(fun_idx); // za svaki parametar koji prodje podesi atr2 za fju
          if (atr2p == NULL) exit(55); // wrong index
          atr2p->atr2[atr2p->occupied++] = (yyvsp[-1].i);
        }
        else 
           err("redefinition of '%s'", (yyvsp[0].s));
      }
#line 1611 "micko.tab.c"
    break;

  case 17:
#line 212 "micko.y"
  {
    code("\n@%s_body:", get_name(fun_idx));
  }
#line 1619 "micko.tab.c"
    break;

  case 21:
#line 225 "micko.y"
    {
      if ((yyvsp[0].i) == VOID)
        err("variable can not be void.");

      id_type = (yyvsp[0].i);

      var_num_before_id_list = var_num;
    }
#line 1632 "micko.tab.c"
    break;

  case 22:
#line 234 "micko.y"
    {
      if ((get_type((yyvsp[0].i)) != (yyvsp[-3].i)) && ((yyvsp[0].i) != -1))
      {
        err("incompatible types in assignment.");
      }

      int nod = var_num - var_num_before_id_list; // broj definisanih

      int size = ((yyvsp[-3].i) == BOOL) ? 1 : 4; // jer je ili bool pa 1 byte ili int/uint pa 4 byte-a

      if (nod) 
      {
        code("\n\t\tSUBS\t%%15,$%d,%%15", size*nod); // za broj definisanih 
      }

      if ((yyvsp[0].i) != -1)
      { // ako su definisane proemnljive

        for (int i = 1; i < nod + 1; i++) 
        {
          code("\n\t\tMOV ");
          gen_sym_name((yyvsp[0].i));
          code(",-%d(%%14)", (var_num_before_id_list + i) * size);

        }
      }
    }
#line 1664 "micko.tab.c"
    break;

  case 23:
#line 264 "micko.y"
               { (yyval.i) = -1; }
#line 1670 "micko.tab.c"
    break;

  case 24:
#line 265 "micko.y"
                          { (yyval.i) = (yyvsp[0].i); /* vraca svoj indeks*/}
#line 1676 "micko.tab.c"
    break;

  case 25:
#line 270 "micko.y"
      {
        if(lookup_symbol((yyvsp[0].s), VAR|PAR) == NO_INDEX)
           insert_symbol((yyvsp[0].s), VAR, id_type, ++var_num, create_atr2());
        else 
           err("redefinition of '%s'", (yyvsp[0].s));
      }
#line 1687 "micko.tab.c"
    break;

  case 26:
#line 277 "micko.y"
      {
        if(lookup_symbol((yyvsp[0].s), VAR|PAR) == NO_INDEX)
           insert_symbol((yyvsp[0].s), VAR, id_type, ++var_num, create_atr2());
        else 
           err("redefinition of '%s'", (yyvsp[0].s));
      }
#line 1698 "micko.tab.c"
    break;

  case 35:
#line 297 "micko.y"
                     {has_return = 1;}
#line 1704 "micko.tab.c"
    break;

  case 36:
#line 302 "micko.y"
      {
        if((indx_branch = lookup_symbol((yyvsp[0].s), VAR|PAR)) == NO_INDEX)
          err("undefined '%s' in branch statement\n", (yyvsp[0].s));
      }
#line 1713 "micko.tab.c"
    break;

  case 37:
#line 307 "micko.y"
    {
      int id_type = get_type(indx_branch);

      if (
        id_type != get_type((yyvsp[-5].i)) ||
        id_type != get_type((yyvsp[-3].i)) ||
        id_type != get_type((yyvsp[-1].i))  
      )
        err("incompatible types in branch statement.\n");
    }
#line 1728 "micko.tab.c"
    break;

  case 39:
#line 326 "micko.y"
    {
      int idx = lookup_symbol((yyvsp[0].s), VAR|PAR);
      if(idx == NO_INDEX)
        err("undefined '%s' in para statement", (yyvsp[0].s));
      
      indx_para = idx;
    }
#line 1740 "micko.tab.c"
    break;

  case 40:
#line 334 "micko.y"
  {
    int idx_type = get_type(indx_para);
    int lit1_type = get_type((yyvsp[-3].i));
    int lit2_type = get_type((yyvsp[-1].i));

    int lit1 = atoi(get_name((yyvsp[-3].i)));
    int lit2 = atoi(get_name((yyvsp[-1].i)));
    
    int lit3;
    int lit3_type;
    
    if ((yyvsp[0].i) == -1) 
    {
      lit3_type = idx_type; // ako nije naveden paso izraz, racunace kao da je istog tipa kao idx
      lit3 = 1; // pozitivan broj da bi prosao uslov kasnije  
    }
    else 
    {
      lit3_type = get_type((yyvsp[0].i));
      lit3 = atoi(get_name((yyvsp[0].i))); 
    }

    // tipovi iteratora i parametara
    if (
      idx_type != lit1_type ||
      idx_type != lit2_type || 
      idx_type != lit3_type 
    )
    {
      err("incompatible types for para statement.\n");
    }

    // da li su vrednosti korektne, jer bi trebalo da 
    // lit1 < lit2 i lit3 > 0
    if (
      ! (lit1 < lit2 && lit3 > 0 ) 
    )
    err("invalid values for iterator constants.\n");
  }
#line 1784 "micko.tab.c"
    break;

  case 42:
#line 377 "micko.y"
    { (yyval.i) = -1; // ako nije naveden paso
    }
#line 1791 "micko.tab.c"
    break;

  case 43:
#line 380 "micko.y"
    { //printf("lit3:%d\n", $2); 
      (yyval.i) = (yyvsp[0].i);
    }
#line 1799 "micko.tab.c"
    break;

  case 44:
#line 386 "micko.y"
                       { (yyval.i) = (yyvsp[-1].i); /* jer vracaju svoj indeks iz tabele kao povratnu vrednost */ }
#line 1805 "micko.tab.c"
    break;

  case 45:
#line 387 "micko.y"
                        { (yyval.i) = (yyvsp[-1].i); }
#line 1811 "micko.tab.c"
    break;

  case 46:
#line 388 "micko.y"
                               { (yyval.i) = (yyvsp[-1].i); }
#line 1817 "micko.tab.c"
    break;

  case 48:
#line 397 "micko.y"
      {
        int idx = lookup_symbol((yyvsp[-2].s), VAR|PAR);
        if(idx == NO_INDEX)
          err("invalid lvalue '%s' in assignment", (yyvsp[-2].s));
        else
        {
          if(get_type(idx) != get_type((yyvsp[0].i)))
          {
                err("incompatible types in assignment");
          } 
        }
        gen_mov((yyvsp[0].i), idx);
      }
#line 1835 "micko.tab.c"
    break;

  case 49:
#line 414 "micko.y"
    { (yyval.i) = (yyvsp[0].i) ;}
#line 1841 "micko.tab.c"
    break;

  case 50:
#line 416 "micko.y"
      {
        if(get_type((yyvsp[-2].i)) != get_type((yyvsp[0].i)))
          {
            err("invalid operands: arithmetic operation");
            //printf("1:%d\n", $1);
            //printf("3:%d\n", $3);
          }
        int t1 = get_type((yyvsp[-2].i));    
        code("\n\t\t%s\t", ar_instructions[(yyvsp[-1].i) + (t1 - 1) * AROP_NUMBER]);
        gen_sym_name((yyvsp[-2].i));
        code(",");
        gen_sym_name((yyvsp[0].i));
        code(",");
        free_if_reg((yyvsp[0].i));
        free_if_reg((yyvsp[-2].i));
        (yyval.i) = take_reg();
        gen_sym_name((yyval.i));
        set_type((yyval.i), t1);
      }
#line 1865 "micko.tab.c"
    break;

  case 51:
#line 439 "micko.y"
    { 
      (yyval.i) = insert_literal((yyvsp[0].s), BOOL); 
      rel_used = -1;  
    }
#line 1874 "micko.tab.c"
    break;

  case 52:
#line 444 "micko.y"
  {
    (yyval.i) = (yyvsp[0].i);
  }
#line 1882 "micko.tab.c"
    break;

  case 53:
#line 448 "micko.y"
    {
      rel_used = -1;
      // any expresion != 0 is true
      //printf("\ninstr:%s\n", bool_instructions[$2]);
      code("\n\t\t%s\t", bool_instructions[(yyvsp[-1].i)]);
      gen_sym_name((yyvsp[-2].i));
      code(",");
      gen_sym_name((yyvsp[0].i));
      //code(",");
      free_if_reg((yyvsp[-2].i));
      free_if_reg((yyvsp[0].i));
      (yyval.i) = take_reg();
      //gen_sym_name($$);
      set_type((yyval.i), get_type((yyvsp[0].i)));
    }
#line 1902 "micko.tab.c"
    break;

  case 54:
#line 464 "micko.y"
  { 
    code("\n\t\tNOT \t");
    gen_sym_name((yyvsp[-1].i));
    
    (yyval.i) = (yyvsp[-1].i);
    rel_used = -1;
  }
#line 1914 "micko.tab.c"
    break;

  case 55:
#line 472 "micko.y"
  { 
    (yyval.i) = (yyvsp[-1].i);
    rel_used = -1;
  }
#line 1923 "micko.tab.c"
    break;

  case 56:
#line 477 "micko.y"
  { 
    (yyval.i) = (yyvsp[-1].i);
    rel_used = -1;
  }
#line 1932 "micko.tab.c"
    break;

  case 57:
#line 485 "micko.y"
  {
    (yyval.i) = (yyvsp[0].i);
  }
#line 1940 "micko.tab.c"
    break;

  case 58:
#line 489 "micko.y"
  {
    int t1 = get_type((yyvsp[-2].i));    
    code("\n\t\t%s\t", bool_instructions[(yyvsp[-1].i)]);
    gen_sym_name((yyvsp[-2].i));
    code(",");
    gen_sym_name((yyvsp[0].i));
    //code(",");
    free_if_reg((yyvsp[0].i));
    free_if_reg((yyvsp[-2].i));
    (yyval.i) = take_reg();
    //gen_sym_name($$);
    set_type((yyval.i), t1);
  }
#line 1958 "micko.tab.c"
    break;

  case 59:
#line 506 "micko.y"
    {
      (yyval.i) = lookup_symbol((yyvsp[-1].s), VAR|PAR);
      if((yyval.i) == NO_INDEX)
        err("no variable named :'%s'", (yyvsp[-1].s)); 
    }
#line 1968 "micko.tab.c"
    break;

  case 60:
#line 512 "micko.y"
    {
      (yyval.i) = lookup_symbol((yyvsp[0].s), VAR|PAR);
      if((yyval.i) == NO_INDEX)
        err("no variable named :'%s'", (yyvsp[0].s));
    }
#line 1978 "micko.tab.c"
    break;

  case 61:
#line 521 "micko.y"
    { (yyval.i) = (yyvsp[0].i); }
#line 1984 "micko.tab.c"
    break;

  case 63:
#line 524 "micko.y"
      {
        (yyval.i) = lookup_symbol((yyvsp[0].s), VAR|PAR);
        if((yyval.i) == NO_INDEX)
          err("'%s' undeclared", (yyvsp[0].s));
      }
#line 1994 "micko.tab.c"
    break;

  case 64:
#line 530 "micko.y"
  {
      (yyval.i) = take_reg();
      gen_mov(FUN_REG, (yyval.i));
  }
#line 2003 "micko.tab.c"
    break;

  case 65:
#line 535 "micko.y"
      { (yyval.i) = (yyvsp[-1].i); }
#line 2009 "micko.tab.c"
    break;

  case 66:
#line 537 "micko.y"
      { (yyval.i) = (yyvsp[-1].i); }
#line 2015 "micko.tab.c"
    break;

  case 67:
#line 542 "micko.y"
  {
    //printf("\ntype(1): %d \t type(2): %d", get_type($5), get_type($7));
    //print_symtab();
    if (get_type((yyvsp[-2].i)) != get_type((yyvsp[0].i))) 
    {
      err("incompatible types in conditional expression.");
    }
    (yyval.i) = (yyvsp[-2].i); // ovo mozda treba promeniti kada se ispituje kog je tipa 
  }
#line 2029 "micko.tab.c"
    break;

  case 68:
#line 554 "micko.y"
    { (yyval.i) = (yyvsp[0].i); }
#line 2035 "micko.tab.c"
    break;

  case 69:
#line 556 "micko.y"
    { (yyval.i) = (yyvsp[0].i); }
#line 2041 "micko.tab.c"
    break;

  case 70:
#line 561 "micko.y"
      { (yyval.i) = insert_literal((yyvsp[0].s), INT); }
#line 2047 "micko.tab.c"
    break;

  case 71:
#line 563 "micko.y"
      { (yyval.i) = insert_literal((yyvsp[0].s), UINT); }
#line 2053 "micko.tab.c"
    break;

  case 72:
#line 568 "micko.y"
      {
        fcall_idx = lookup_symbol((yyvsp[0].s), FUN);
        if(fcall_idx == NO_INDEX)
          err("'%s' is not a function", (yyvsp[0].s));

      }
#line 2064 "micko.tab.c"
    break;

  case 73:
#line 575 "micko.y"
      {
        if(get_atr1(fcall_idx) != (yyvsp[-1].i))
          err("wrong number of args to function '%s'", 
              get_name(fcall_idx));
        
        code("\n\t\t\tCALL\t%s", get_name(fcall_idx));
        if((yyvsp[-1].i) > 0)
          code("\n\t\t\tADDS\t%%15,$%d,%%15", (yyvsp[-1].i) * 4);
        set_type(FUN_REG, get_type(fcall_idx));
        (yyval.i) = FUN_REG;
      
        curr_arg = 0;
      }
#line 2082 "micko.tab.c"
    break;

  case 74:
#line 592 "micko.y"
    {(yyval.i) = 0; }
#line 2088 "micko.tab.c"
    break;

  case 75:
#line 594 "micko.y"
    {(yyval.i) = curr_arg; }
#line 2094 "micko.tab.c"
    break;

  case 78:
#line 604 "micko.y"
    { 
      curr_arg++;
      
      ATR2* atr2p = get_atr2(fcall_idx);

      if(atr2p->atr2[curr_arg - 1] != get_type((yyvsp[0].i)))
        err("incompatible type for argument in '%s'",
            get_name(fcall_idx));
      free_if_reg((yyvsp[0].i));
      code("\n\t\t\tPUSH\t");
      gen_sym_name((yyvsp[0].i));

      (yyval.i) = curr_arg;
    }
#line 2113 "micko.tab.c"
    break;

  case 79:
#line 622 "micko.y"
    { code("\n@exit%d:", (yyvsp[0].i)); }
#line 2119 "micko.tab.c"
    break;

  case 80:
#line 624 "micko.y"
    { code("\n@exit%d:", (yyvsp[-2].i)); }
#line 2125 "micko.tab.c"
    break;

  case 81:
#line 629 "micko.y"
   {
      (yyval.i) = ++lab_num;
      code("\n@if%d:", lab_num);
    }
#line 2134 "micko.tab.c"
    break;

  case 82:
#line 634 "micko.y"
    {
      if (rel_used != -1) 
      {
        // mora da se vidi koji je jump
        code("\n\t\t%s\t@false%d", opp_jumps[(yyvsp[0].i)], (yyvsp[-1].i));
      }
      else 
      {
        // samo moze jeq
        code("\n\t\tJEQ \t@false%d", (yyvsp[-1].i)); // jer ako je 0 onda nije tacna bool operacija iz zagrade
      }
      
      code("\n@true%d:", (yyvsp[-1].i));
      
    }
#line 2154 "micko.tab.c"
    break;

  case 83:
#line 650 "micko.y"
    {
        code("\n\t\tJMP \t@exit%d", (yyvsp[-4].i));
        code("\n@false%d:", (yyvsp[-4].i));
        (yyval.i) = (yyvsp[-4].i);
    }
#line 2164 "micko.tab.c"
    break;

  case 84:
#line 659 "micko.y"
      {
        if(get_type((yyvsp[-2].i)) != get_type((yyvsp[0].i)))
          err("invalid operands: relational operator");

        (yyval.i) = (yyvsp[-1].i) + ((get_type((yyvsp[-2].i)) - 1) * RELOP_NUMBER);
        gen_cmp((yyvsp[-2].i), (yyvsp[0].i));

        rel_used = (yyval.i); // koji rel se koristi
      }
#line 2178 "micko.tab.c"
    break;

  case 85:
#line 672 "micko.y"
      {
        if(get_type(fun_idx) != get_type((yyvsp[-1].i)))
          err("incompatible types in return");

        gen_mov((yyvsp[-1].i), FUN_REG);
        code("\n\t\tJMP \t@%s_exit", get_name(fun_idx));
      }
#line 2190 "micko.tab.c"
    break;

  case 86:
#line 680 "micko.y"
    {
      if(get_type(fun_idx) != get_type((yyvsp[-1].i)))
        err("incompatible types in return");

        gen_mov((yyvsp[-1].i), FUN_REG);
        code("\n\t\tJMP \t@%s_exit", get_name(fun_idx));
    }
#line 2202 "micko.tab.c"
    break;

  case 87:
#line 688 "micko.y"
    {
        if (get_type(fun_idx) != VOID)
          warning("function should return non void value.");
    
        code("\n\t\tJMP \t@%s_exit", get_name(fun_idx));
    }
#line 2213 "micko.tab.c"
    break;


#line 2217 "micko.tab.c"

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
#line 696 "micko.y"


int yyerror(char *s) {
  fprintf(stderr, "\nline %d: ERROR: %s", yylineno, s);
  error_count++;
  return 0;
}

void warning(char *s) {
  fprintf(stderr, "\nline %d: WARNING: %s", yylineno, s);
  warning_count++;
}

int main() {

  int synerr;
  init_symtab();
  output = fopen("output.asm", "w+");

  synerr = yyparse();

  clear_symtab();
  fclose(output);
  
  if(warning_count)
    printf("\n%d warning(s).\n", warning_count);

  if(error_count) 
  {
    printf("\n%d error(s).\n", error_count);
    remove("output.asm");
  }

  if(synerr)
    return -1; //syntax error
  else if(error_count)
    return error_count & 127; //semantic errors
  else if(warning_count)
    return (warning_count & 127) + 127;
  else
    return 0;
}
