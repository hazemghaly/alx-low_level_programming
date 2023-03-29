#include "main.h"

/**
 * puts2 - writes the string 
 *@str : first number
 * Return: Always 0.
 */
void puts2(char *str)
{
int i ;
int counter = 0;
while (str[counter] != '\0')
i = counter % 2;
if ( i == 0 )
	{
_putchar(*str);
str = str + 1;
	}
else 
{
counter++;
}
_putchar('\n');
}
