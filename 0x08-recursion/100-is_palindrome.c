#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * is_palindrome - palindrome recursion
 * @s: char 1st
 * @y: char 2nd
 *
 * Return: Always 0 (Success)
 */

int is_palindrome(char *s)
{
char y;
if (*s != '\0')
{
is_palindrome(++s);
y = _putchar(*s);
}
if (s == 0)
{
return (1);
}
if (*s == y)
{
return (1);
}
else
{
return (0);
}
}
