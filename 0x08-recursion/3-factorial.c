#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * factorial  - print reverse string with recursion
 * @n: int 1st
 *
 * return :0
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
