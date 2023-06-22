#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
/**
 * print_all - print anything
 * @format: char constant
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i;
va_start(args, n);
if (separator == NULL)
{
exit(0);
}
while (i < n)
{
if (format[i] == 'c')
{
char x = va_arg(args, char);
printf("%c,", x);
}
else if (format[i] == 'f')
{
double x = va_arg(args, double);
printf("%f,", x);
}
else if (format[i] == 'i')
{
int x = va_arg(args, int);
printf("%d,", x);
}
else if (format[i] == 's')
{
	if (s == NULL)
	{
	printf("nil");
	}
char *x = va_arg(args, char *);
printf("%c,", x);
}
i++;
}
printf("\n");
va_end(args);
}
