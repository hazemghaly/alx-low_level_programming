#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion  - print length string with recursion
 * @s: first char
 * @len: int length
 *
 * return :0
 */

int _strlen_recursion(char *s)
{
int len = 0;
if (*s == '\0')
{
return (0);
}
else
{
len++;
return (1+_strlen_recursion(++s));
}
}
