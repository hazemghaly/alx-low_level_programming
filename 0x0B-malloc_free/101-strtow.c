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
int x = strlen(str);
int i;
int len = 0;
char *p;
char *s, **m;
if (str == "" || str == NULL)
{
return (NULL);
}
for (i = 0; i < str; i++, len++)
{
len += strlen(str[i]);
}
p = strdup (str);
s = strtok(p, " ");
m = (char **)malloc(sizeof(char *) * len);
s = strtok(str, " ");
for (i = 0; piece != NULL; i++)
{
if ((*s) == '\n')
{
s = strtok(NULL, " ");
}
m[i] = (char *)malloc(sizeof(char) * (strlen(s) + 1));
p(str_arr[i], piece);
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
}
return (m);
}
