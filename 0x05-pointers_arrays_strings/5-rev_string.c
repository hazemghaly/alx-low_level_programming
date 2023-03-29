#include "main.h"

/**
 *  rev_string- writes the string in revers and a trailing newline to stdout.
 *@s : first number
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int n = 0;
	int m = 0;

while ( *s != '\0' )
{
_putchar(*s);
s++;
n++
}
s--;
for (m = n ; m > 0 ; m--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
