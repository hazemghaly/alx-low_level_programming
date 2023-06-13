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
char *p;
if (str == NULL)
{
return (NULL);
}
while (*str != '\0')
{
len++;
str++;
}
p = (char *) malloc(sizeof(char) * len + 1);
if (p == NULL)
{
return (NULL);
}
for (n = 0; n < len + 1 ; n++)
{
while (*str != '\0')
{
p[n] = _putchar(*str);
}
}
return (p);
}
