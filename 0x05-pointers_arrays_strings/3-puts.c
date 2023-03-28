#include "main.h"

/**
 * _puts - writes the string s and a trailing newline to stdout.
 *@str : first number
 * Return: Always 0.
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str = str + 1;
}
_putchar('\n');
}
