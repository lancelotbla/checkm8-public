#ifndef SYMBOL_TABLE_H_
#define SYMBOL_TABLE_H_
#include <stdint.h>

#define DEFAULT_SYMBOL_TABLE_SIZE 13

typedef struct s_Table_Item
{
    char *label;
    uint8_t memory_addr;
} Table_Item;

typedef struct s_Symbol_Table
{
    int max_size;
    int elements;
    Table_Item **items;
} Symbol_Table;

void st_init(Symbol_Table *st);
void st_free(Symbol_Table *st);
void st_insert(Symbol_Table *st, char *label, uint8_t memory_addr);
uint8_t st_search(Symbol_Table *st, char *label);
int st_remove(Symbol_Table *st, char *label);

#endif /* SYMBOL_TABLE_H_ */