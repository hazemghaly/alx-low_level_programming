#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - power recursion
 * @x: int 1st
 * @y: int 2nd
 *
 * Return: Always 0 (Success)
 */

int _pow_recursion(int x, int y)
{
if (y == 0)
{
return (1);
}
if (y < 0)
{
return (-1);
}
if (x == 0)
{
return (0);
}
else
{
return (_pow_recursion((x, y + 1) * x));
}
return (0);
}
