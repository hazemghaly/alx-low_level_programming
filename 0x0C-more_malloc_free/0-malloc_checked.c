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
exit(98);
}
str = (char *) malloc(sizeof(char) * b);
if (str == NULL)
{
exit(98);
}
else
{
for (i = 0; i < b; i++)
{
str[i] = 0;
}
exit(*str);
}
}
