#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - power recursion
 * @n: int 1st
 *
 * Return: Always 0 (Success)
 */

int _sqrt_recursion(int n)
{
int x = n / 2;
int y = 0;
if (n < 0)
{
return (-1);
}
if (n == 1)
{
return (1);
}
if (x != y)
{
y = x;
_sqrt_recursion((n / y + y) / 2);
}
return (0);
}
