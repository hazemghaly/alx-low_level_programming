#include "main.h"

/**
 *  rev_string- writes the string in revers and a trailing newline to stdout.
 *@s : first number
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int n = 1 ;
for (n = 1 ;  *s != '\0')
{
_putchar(*s);
s++;
}
_putchar('\n');
}
