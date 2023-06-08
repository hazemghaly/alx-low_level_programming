#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * is_palindrome - palindrome recursion
 * @n: int 1st
 *
 * Return: Always 0 (Success)
 */

int is_palindrome(char *s)
{
char y = 0;
if (*s != '\0')
{
*y = is_palindrome(s + 1);
}
if (*s == *y) 
{
return (1);
}
else if (s == 0)
{
return (1);
}
else
{
return (0);
}
}
