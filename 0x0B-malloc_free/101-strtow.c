#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * **strtow  -  function that splits a string into words.
 * @str: array arg
 * Return: Always 0 (Success) , NULL (Error)
 */

char **strtow(char *str)
{
int i;
int len = 0;
char *p;
char *s, **m;
if (*str == '\0' || str == NULL)
{
return (NULL);
}
for (i = 0; i < str[i]; i++, len++)
{
len += strlen(str);
}
p = strdup (str);
s = strtok(p, " ");
m = (char **)malloc(sizeof(char *) * len);
s = strtok(str, " ");
for (i = 0; s != NULL; i++)
{
if ((*s) == '\n')
{
s = strtok(NULL, " ");
}
m[i] = (char *)malloc(sizeof(char) * (strlen(s) + 1));
s = strtok(NULL, " ");
}
if (m[i] == 0)
{
while (i--)
{
free(m[i]);
}
free(m);
return (NULL);
}
return (m);
}
