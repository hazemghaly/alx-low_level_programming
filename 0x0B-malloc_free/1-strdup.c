#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *_strdup  - acreate of array malloc
 * @str: array
 *
 * Return: Always 0 (Success) , NULL (Error)
 */

char *_strdup(char *str)
{
int n;
if (str == NULL)
{
return (NULL);
}
else
{
str = (char *) malloc(sizeof(char) * 11);
for (n = 0; n < 10; n++)
{
str[n] = n + 1;
}
free(str);
}
return (str);
}
