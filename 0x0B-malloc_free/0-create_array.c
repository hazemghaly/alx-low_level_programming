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
char *p;
if (size  == 0 )
{
return (NULL);
}
p = (char*) malloc(sizeof(c) * size);
return (NULL);
}
