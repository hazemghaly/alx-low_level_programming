#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *create_array  - acreate of array
 * @c: array
 * @size: first int
 * @i: first int
 * @str: 2nd array
 * Return: Always 0 (Success) , NULL (Error)
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *str;
if (size  == 0)
{
return (NULL);
}
str = (char*) malloc(sizeof(c) * size);
for (i = 0; i < size; i++)
{
str[i] = c;
}
if (str == NULL)
{
return (NULL);
}
return (str);
}
