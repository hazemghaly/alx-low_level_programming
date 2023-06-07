#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion  - print length string with recursion
 *
 * Description: 'length of string'
 * @s: first char
 * @l: int length
 *
 * Return: Always 0 (Success)
 */

int _strlen_recursion(char *s)
{
int static l = 0;
if (*s == '\0')
{
return (0);
}
else
{
l++;
return (1 + _strlen_recursion(++s));
}
}
