#include "hash_tables.h"
/**
 *  hash_table_get - function of a hash table getting key
 * @ht: hashtable
 * @key: The key, string
 *
 * Return: Always table (Success) , 98 (Error)
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index = 0;
hash_node_t *item;
if (!key || !ht)
	return (NULL);
index = hash_djb2((unsigned char *)key) % ht->size;
item = ht->array[index];
while (item)
{
if (strcmp(item->key, key) == 0)
{
return (item->value);
}
}
return (NULL);
}
