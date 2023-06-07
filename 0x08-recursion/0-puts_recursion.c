#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion  - print string eith recursion
 * @s: first char
 *
 * return :0
 */

void _puts_recursion(char *s)
{
if (*s != '\0')
{
_putchar(*s);
_puts_recursion(s++);
}
else
{
_putchar('\n');
return;
}
}
