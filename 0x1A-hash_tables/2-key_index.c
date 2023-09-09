#include "hash_tables.h"
/**
 * key_index - function of a hash table detting key
 * @key: The key, string
 * @size: The key, string
 * Return: Always table (Success) , 98 (Error)
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int index = 0;
index = hash_djb2(key) % size;
return (index);
}
