#include "main.h"

/**
 *  rev_string- writes the string in revers and a trailing newline to stdout.
 *@s : first number
 * Return: Always 0.
 */
void rev_string(char *s)
{
int n = 0;
int l;
while (*s != '\0')
{
_putchar(*s);
s++;
n++;
}
_putchar('\n');
s--;
for (l = n ; l > 0 ; n--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
