#include "main.h"

/**
 * factorial -  the factorial of a given number.
 *@n: first number
 * Return: Always 0.
 */
int factorial(int n)
{
if (n < 0)
{
return(-1);
}
if (n <= 1)
{
return(1);
}
   return i * factorial(n - 1);
}
