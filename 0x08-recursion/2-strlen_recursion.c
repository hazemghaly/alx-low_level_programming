#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion  - print length string with recursion
 * @s: first char
 * @long: int 1st
 * return :0
 */
int _strlen_recursion(char *s)
{
int long = 0;
if (*s != '\0')
{
long++;
_strlen_recursion(s++);
}
_putchar('long');
}
