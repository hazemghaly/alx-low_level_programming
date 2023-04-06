#include "main.h"

/**
 * _print_rev_recursion - writes the string s and a trailing newline
 *@s: first number
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
