#include "main.h"

/**
 * _puts - writes the string s and a trailing newline to stdout.
 *@str : first number
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
if(*s = '\0')
{
	return(0);
}
if(*s != '\0' )
{
_putchar(*s);
s++;
}
	_putchar('\n');
}
