#include "main.h"

/**
 * print_rev - writes the string in revers and a trailing newline to stdout.
 *@s : first number
 * Return: Always 0.
 */
void print_rev(char *s)
{
	char rev;
while( *s != '\0' )
{
_putchar(*s);
s = s + 1;
}
rev = _strrev(s);
_putchar('\n');
}
