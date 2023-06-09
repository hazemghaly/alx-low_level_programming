#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
/**
 * print_numbers - print of args
 * @n: int
 * @separator: char
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i, x;
va_start(args, n);
if (n == 0)
{
printf("\n");
return;
}
for (i = 0; i < n; i++)
{
x = va_arg(args, int);
printf("%d", x);
if (i != (n - 1))
{
printf("%s", separator);
}
}
printf("\n");
va_end(args);
}
