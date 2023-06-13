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
int len = 0;
char *p;
int i;
int x = strlen(str);
len = x + 1;
p = (char *) malloc(sizeof(char) * len);
if (p == NULL)
{
return (NULL);
}
for (i = 0; i < x; i++)
{
p[i] = str[i];
}
p[len - 1] = '\0';
return (p);
}
