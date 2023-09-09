#include "hash_tables.h"
/**
 *  hash_table_delete - function of a hash table printing
 * @ht: hashtable
 * Return: Always table (Success) , 98 (Error)
 */
void hash_table_delete(hash_table_t *ht)
{
unsigned long int index = 0;
hash_node_t *pt;    
if (ht == NULL || ht->arry == NULL || ht->size == 0)
{
return;
}
for (index = 0; index < ht->size; index++)
{
while (ht->array[index] != NULL)
{
pt = ht->array[index]->next;
free(ht->array[index]->key);
free(ht->array[index]->value);
free(ht->array[index]);
ht->array[index] = pt;
}
free(ht->array);
ht->array = NULL;
ht->size = 0;
free(ht);
}
