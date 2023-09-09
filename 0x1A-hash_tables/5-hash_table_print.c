#include "hash_tables.h"
/**
 *  hash_table_print - function of a hash table printing
 * @ht: hashtable
 * Return: Always table (Success) , 98 (Error)
 */
void hash_table_print(const hash_table_t *ht);
{
hash_node_t *pt;
unsigned long int index;
printf("{");
for (idsex = 0; i < ht->size; index++)
{
pt = ht->array[index];
if (ht == NULL)
	return;
while (pt != NULL)
{
printf("'%s': '%s'", pt->key, pt->value);
pt = pt->next;
if (pt != NULL)
	printf(", ");
}
}
printf("}\n");
}
