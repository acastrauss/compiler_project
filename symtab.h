
#ifndef SYMTAB_H
#define SYMTAB_H


typedef struct glb_ids 
{
   unsigned occupied;
   char* ids[MAX_ATR2]; // 63 glob prom i main fja da bi stalo u tabelu simbola
} GLB_IDS;

GLB_IDS* create_glbids();
void add_id(char* id, int id_len, GLB_IDS* glb_idsp);
void free_glb_ids(GLB_IDS* glb_idsp);

typedef struct atr2_str
{
   unsigned occupied; // broj zauzetih clanova niza 
   unsigned atr2[MAX_ATR2]; // MAX_ATR2 == 63, ako se napravi samo main i ima 63 parametra i samo se njima rukuje, niz tipova 
} ATR2;

// Element tabele simbola
typedef struct sym_entry {
   char *   name;          // ime simbola
   unsigned kind;          // vrsta simbola
   unsigned type;          // tip vrednosti simbola
   unsigned atr1;          // dodatni attribut simbola
   ATR2*    atr2;          // dodatni attribut simbola
} SYMBOL_ENTRY;

ATR2* create_atr2(); // creates empty atr2

// Vraca indeks prvog sledeceg praznog elementa.
int get_next_empty_element(void);

// Vraca indeks poslednjeg zauzetog elementa.
int get_last_element(void);

// Ubacuje novi simbol (jedan red u tabeli) 
// i vraca indeks ubacenog elementa u tabeli simbola 
// ili -1 u slucaju da nema slobodnog elementa u tabeli.
int insert_symbol(char *name, unsigned kind, unsigned type, 
                  unsigned atr1, ATR2* atr2);

// Ubacuje konstantu u tabelu simbola (ako vec ne postoji).
int insert_literal(char *str, unsigned type);

// Vraca indeks pronadjenog simbola ili vraca -1.
int lookup_symbol(char *name, unsigned kind);

// set i get metode za polja tabele simbola
void     set_name(int index, char *name);
char*    get_name(int index);
void     set_kind(int index, unsigned kind);
unsigned get_kind(int index);
void     set_type(int index, unsigned type);
unsigned get_type(int index);
void     set_atr1(int index, unsigned atr1);
unsigned get_atr1(int index);
void     set_atr2(int index, ATR2* atr2);
ATR2*    get_atr2(int index);

void     clear_name(int index);
// Brise elemente tabele od zadatog indeksa
void clear_symbols(unsigned begin_index);

// Brise sve elemente tabele simbola.
void clear_symtab(void);

// Ispisuje sve elemente tabele simbola.
void print_symtab(void);
unsigned logarithm2(unsigned value);

// Inicijalizacija tabele simbola.
void init_symtab(void);

#endif
