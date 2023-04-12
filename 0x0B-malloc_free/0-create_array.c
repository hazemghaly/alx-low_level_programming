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
char *p;
if (size == 0)
{
return (NULL);
}
p  = (char *) malloc(sizeof(char) * size);
if (p == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
p[i] = c;
}
return (p);
}
