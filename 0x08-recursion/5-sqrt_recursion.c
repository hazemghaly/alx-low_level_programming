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
if (n >= 0)
{
return (_sqrt_recursion(n) * 0.5 );
}
return (0);
}
