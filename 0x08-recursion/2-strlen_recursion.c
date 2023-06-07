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
int len;
if (*s != '\0')
{
len++;
_strlen_recursion(++s);
}
_putchar(len);
return (0);
}
