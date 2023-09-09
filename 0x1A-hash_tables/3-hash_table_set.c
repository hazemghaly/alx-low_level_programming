#include "hash_tables.h"
/**
 * add_node - function of a hash table ass node
 * @key: The key, string
 * @value: The key, string
 * Return: Always table (Success) , 98 (Error)
 */
hash_node_t *add_node(const char *key, const char *value)
{
hash_node_t *node;
node = (hash_node_t *)malloc(sizeof(hash_node_t));
if (node == NULL)
	return (NULL);
node->key = strdup(key);
if (!node->key)
{
	free(node);
	return (NULL);
}
node->value = strdup(value);
if (node->value == NULL)
{
	free(node->key);
	free(node);
	return (NULL);
}
node->next = NULL;
return (node);
}
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
hash_node_t *ckenode;
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
ckenode = add_node(key, value);
if (ckenode == NULL)
	return (0);
ckenode->next = ht->array[index];
ht->array[index] = ckenode;
return (1);
}
