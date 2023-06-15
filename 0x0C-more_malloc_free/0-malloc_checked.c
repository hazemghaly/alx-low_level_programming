#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *malloc_checked  - acreate of array
 * @b: first int
 * Return: Always 0 (Success) , 98 (Error)
 */

void *malloc_checked(unsigned int b)
{
char *str;
unsigned int i;
if (b  == 0)
{
return (98);
}
else
{
str = (char *) malloc(sizeof(char) * size);
if (str == NULL)
{
return (98);
}
for (i = 0; i < b; i++)
{
str[i] = c;
}
return (str);
}
}
