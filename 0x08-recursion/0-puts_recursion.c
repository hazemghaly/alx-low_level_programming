#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion  - print string eith recursion
 * @s: first char
 * @i: int
 *
 * return :0
 */
void _puts_recursion(char *s)
{
int i = 0;
if (*s == '\0')
{
_putchar('\n');
return;
}
else
{
_putchar(*s);
i++;
}
}
