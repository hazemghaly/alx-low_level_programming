#include "hash_tables.h"
/**
 *  hash_table_print - function of a hash table printing
 * @ht: hashtable
 * Return: Always table (Success) , 98 (Error)
 */
void hash_table_print(const hash_table_t *ht)
{
hash_node_t *pt;
unsigned long int index;
int sep;
printf("{");
for (index = 0; index < ht->size; index++)
{
pt = ht->array[index];
if (ht == NULL)
	return;
while (pt != NULL)
{
if (sep == 1)
	printf(", ");
printf("'%s': '%s'", pt->key, pt->value);
pt = pt->next;
esp = 1;
}
}
printf("}\n");
}
