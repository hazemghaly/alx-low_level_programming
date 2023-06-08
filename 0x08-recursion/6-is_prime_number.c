#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - prime number recursion
 * @n: int 1st
 *
 * Return: Always 0 (Success)
 */

int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
else if ((n % 2) != 0 || (n % 3) != 0 || (n % 5) != 0)
{
return (1);
}
else
{
return (0);
}
}
