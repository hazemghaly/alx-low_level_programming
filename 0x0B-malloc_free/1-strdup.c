#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - creats array
 * @str: the address of memory to print
 * @c: the pointer
 *
 * Return: Nothing.
 */
char *_strdup(char *str)
{
int n = 0;
char *c;
if (str == NULL)
{
return (NULL);
}
c  = malloc(n + 1);
if (c == NULL)
{
return (NULL);
}
str = c;
return (c);
}
