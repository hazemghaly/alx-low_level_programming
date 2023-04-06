#include "main.h"

/**
 * is_palindrome - writes the string s and a trailing newline
 *@s: first number
 * Return: Always 0.
 */
int is_palindrome(char *s)
{
char p ;
if (*s != '\0')
{
_print_rev_recursion(s + 1);
p = _putchar(*s);
}
if (*p == *s)
{
return (1);
}
return (0);
}
