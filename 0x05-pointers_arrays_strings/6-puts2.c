#include "main.h"

/**
 * puts2 - writes the string 
 *@str : first number
 * Return: Always 0.
 */
void puts2(char *str)
{
int counter = 0;
while (str[counter] != '\0')
if( counter % 2 == 0 )
{
_putchar(*str);
str = str + 1;
}
counter++ 
_putchar('\n');
}
