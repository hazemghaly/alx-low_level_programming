#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * factorial  - print reverse string with recursion
 * @n: int 1st
 *
 * Return: Always 0 (Success)
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
if (n > 0)
{
return (n * factorial(n - 1));
}
return (0);
}
