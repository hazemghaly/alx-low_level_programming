#include "hash_tables.h"
/**
 *  hash_table_set - function of a hash table detting key
 * @ht: hashtable
 * @key: The key, string
 * @value: The key, string
 * Return: Always table (Success) , 98 (Error)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index = 0;
hash_node_t *node;
hash_node_t *item;
if (!key || !ht || !value)
	return (0);
index = key_index((const unsigned char *)key, ht->size);
item = ht->array[index];
while (item)
{
if (strcmp(item->key, key) == 0)
{
free(item->value);
item->value = strdup(value);
if (!item->value)
	return (0);
return (1);
}
item = item->next;
}
node = (hash_node_t *)malloc(sizeof(hash_node_t));
if (node == NULL)
	return (0);
node->key = strdup(key);
if (!node->key)
{
	free(node);
	return (0);
}
node->value = strdup(value);
if (!node->value[index])
{
	free(node->key);
	free(node);
	return (0);
}
node->next = ht->array[index];
ht->array[index] = node;
return (1);
}
