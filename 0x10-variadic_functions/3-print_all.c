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
unsigned int j, n;
int a;
double b;
char x;
char *y;
n = strlen(format);
va_start(args, format);
while (j < n)
{
if (format[j] == 'c')
{
char x = va_arg(args, char);
printf("%c,", x);
}
if (format[j] == 'f')
{
double b = va_arg(args, double);
printf("%f,", b);
}
else (format[j] == 'i')
{
a = va_arg(args, int);
printf("%d,", a);
}
while (format[j] == 's')
{
	if ( format[j] == '\0')
	{
	printf("nil");
	}
y = va_arg(args, char *);
printf("%s,", y);
}
j++;
}
printf("\n");
va_end(args);
}
