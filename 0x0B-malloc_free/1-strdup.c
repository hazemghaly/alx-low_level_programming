#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *_strdup  - acreate of array malloc
 * @str: array
 * @i: first int
 * @n: size
 * Return: Always 0 (Success) , NULL (Error)
 */

char *_strdup(char *str)
{
int i;
int n;
if (i  == 0)
{
return (NULL);
}
str = (char *) malloc(sizeof(char) * i);
for (n = 0; n < i; n++)
{
str[n] = n + 1;
}
if (str == NULL)
{
return (NULL);
}
else 
{
free(str);
}
return (str);
}
