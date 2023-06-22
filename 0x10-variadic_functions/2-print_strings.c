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
unsigned int i;
char *str;
va_start(args, n);
if (n == 0)
{
printf("\n");
return;
}
for (i = 0; i < n; i++)
{
if (str[i] == '\0')
{
printf("nil");
}
str = va_arg(args, char *);
printf("%s", str);
if (i != (n - 1))
{
printf("%s", separator);
}
}
printf("\n");
va_end(args);
}
