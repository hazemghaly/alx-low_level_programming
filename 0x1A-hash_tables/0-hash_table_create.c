nclude "hash_tables.h"
/**
 * hash_table_create - function of a hash table
 *
 * @size: The key, string
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *hashtable;
    unsigned long int i;
    hashtable = malloc(sizeof(hash_table_t));
    if (!hashtable)
        return (NULL);
    hashtable->size = size;
    hashtable->array = malloc(sizeof(hash_node_t) * size);
    if (!hashtable->array)
    {
        free (hashtable);
        return (NULL);
    }
    for ( i = 0; i < hashtable->size; i++)
        hashtable->array[i] = NULL;
    return (hashtable);
}
