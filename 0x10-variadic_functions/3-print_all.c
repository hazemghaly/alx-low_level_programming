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
unsigned int j = 0, n;
char *str;
char *separator = ", ";
n = strlen(format);
va_start(args, format);
while (j < n)
{
switch (format[j])
{
case 'c':
printf("%s%c", separator, va_arg(args, int));
break;
case 'f':
printf("%s%f", separator, va_arg(args, double));
break;
case 'i':
printf("%s%d", separator, va_arg(args, int));
break;
case 's':
str = va_arg(args, char *);
	if (str[j] == '\0')
	{
	printf("nil");
	}
printf("%s%s", separator, str);
break;
j++;
}
j++;
}
printf("\n");
va_end(args);
}
