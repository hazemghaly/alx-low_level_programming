#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
/**
 * print_strings - print of args
 * @n: int
 * @separator: char
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i, x;
va_start(args, n);
if (separator == NULL)
{
exit(0);
}
for (i = 0; i < n; i++)
{
if (separator[i] != '\0')
{
printf("nil");
}
x = va_arg(args, int);
printf("%d", x);
printf(", ");
}
printf("\n");
va_end(args);
}
