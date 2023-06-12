#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *create_array  - acreate of array
 * @c: array
 * @size: first int
 * Return: Always 0 (Success) , NULL (Error)
 */

char *create_array(unsigned int size, char c)
{
int i;
char *p;
if (size  == 0 )
{
return (NULL);
}
p = (char*) malloc(sizeof(c) * size);
for (i = 0; i < size; i++)
{
p[i] = c;
}
return (p);
if (p == NULL)
{
return (NULL);
}
}
