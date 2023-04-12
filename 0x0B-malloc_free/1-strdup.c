#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - creats array
 * @str: the address of memory to print
 * @c: the pointer of the memory to print
 *
 * Return: Nothing.
 */
char *_strdup(char *str)
{
char *c = "ALX SE";
str  = (char *) malloc(sizeof(char));
if (str == NULL)
{
return (NULL);
}
str = c;
return (c);
}
