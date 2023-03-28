#include "main.h"
#include <string.h>  
/**
 * print_rev - writes the string in revers and a trailing newline to stdout.
 *@s : first number
 * Return: Always 0.
 */
void print_rev(char *s)
{
while( *s != '\0' )
{
_putchar(*s);
s = s + 1;
}
_putchar(strrev(*s));
_putchar('\n');
}
