#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion  - print reverse string with recursion
 * @s: first char
 *
 * Return: Always 0 (Success)
 */
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
