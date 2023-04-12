#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - creats array
 * @c: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
for (i = 0 ; i < size ; i++)
{
char *p  = malloc(sizeof(c) * size);
if (size == 0)
{
return (NULL);
}
if (p == NULL)
{
return (NULL);
}
}
return (0);
}
