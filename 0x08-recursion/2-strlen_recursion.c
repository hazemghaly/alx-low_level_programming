#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion  - print length string with recursion
 * @s: first char
 * @len: int
 *
 * return :0
 */

int _strlen_recursion(char *s)
{
int len = 0;
if (*s != '\0')
{
len++;
_strlen_recursion(++s);
}
if ( *s == '\0')
{
return (0);
}
_putchar(len);
return (1);
}
