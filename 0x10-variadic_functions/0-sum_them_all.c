#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum of args
 * @n: int
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int i, sum;
va_start(args, n);
if (n == 0)
{
return (0);
}
sum = 0;
for (i = 0; i < n; i++)
{
sum = sum + va_arg(args, int);
}
va_end(args);
return (sum);
}
