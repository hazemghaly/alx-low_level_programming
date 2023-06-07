#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion  - print reverse string with recursion
 * @s: first char
 * @long: int 1st
 * @R: int 2nd
 * return :0
 */
void _print_rev_recursion(char *s)
{
int long = 0;
if (*s != '\0')
{
long++;
_print_rev_recursion(s++);
} 
int R = long;
if (R > 0 ; R--)
{
_putchar(*s);
_print_rev_recursion(s--);
}
_putchar('\n');
return;
}
