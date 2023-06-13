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
int len = 0;
while (*str != '\0')
{
len++;
str++;
}
str = (char *) malloc(sizeof(char) * len + 1);
if (str == NULL)
{
return (NULL);
}
for (n = 0; n < len + 1 ; n++)
{
_putchar(str[n]);
}
return (str);
}
