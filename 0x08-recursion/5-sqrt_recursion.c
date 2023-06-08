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
x = y;
y = _sqrt_recursion((n / y * y) / 2);
}
return (0);
}
