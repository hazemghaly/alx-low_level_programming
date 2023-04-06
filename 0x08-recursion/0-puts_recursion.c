#include "main.h"

/**
 * _puts_recursion - writes the string s and a trailing newline
 *@s: first number
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
if (*s < '\0')
{
_putchar(*s);
}
_putchar('\n');
}
