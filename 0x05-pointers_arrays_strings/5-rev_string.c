#include "main.h"

/**
 *  rev_string- writes the string in revers and a trailing newline to stdout.
 *@s : first number
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int n = 1;
	int m = 1;

while ( *s != '\0' )
{
if ( n == m )
{
_putchar(*s);
s++;
n--;
}
m++;
}
_putchar('\n');

}
