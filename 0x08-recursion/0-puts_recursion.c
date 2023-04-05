#include "main.h"

/**
 * _puts_recursion - writes the string s and a trailing newline
 *@s: first number
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
       	int  i = 0;
if (*s != '\0')
{
_putchar(*s);
s++;
i++;
return(_puts_recursion(s[i]));
}
	_putchar('\n');
}
