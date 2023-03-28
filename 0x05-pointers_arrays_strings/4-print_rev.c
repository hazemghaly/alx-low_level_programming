#include "main.h"

/**
 * print_rev - writes the string in revers and a trailing newline to stdout.
 *@s : first number
 * Return: Always 0.
 */
void print_rev(char *s)
{
for ( *s < '\0',s--)
{
_putchar(*s);
s = s - 1;
}
_putchar('\n');
}
