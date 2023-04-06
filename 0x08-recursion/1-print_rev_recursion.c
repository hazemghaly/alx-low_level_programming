#include "main.h"

/**
 * _puts_rev_recursion - writes the string s and a trailing newline
 *@s: first number
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_putchar(*s);
_puts_rev_recursion(s + 1);
}
        _putchar('\n');
}
