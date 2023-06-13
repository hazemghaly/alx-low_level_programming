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
str = (char *) malloc(sizeof(char) * 13);
for (n = 0; n < 13; n++)
{
str[n] = 0;
}
if (str[n] != '\0')
{
return (str);
}
else
{
return (NULL);
}
}
