#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array  - acreate of array
 * @c: array
 * @size: first int
 * Return: Always 0 (Success) , NULL (Error)
 */

char *create_array(unsigned int size, char c)
{
if (size  == 0 )
{
return (NULL);
}
c = (int*) malloc(size * sizeof(c));
return (NULL);
}
