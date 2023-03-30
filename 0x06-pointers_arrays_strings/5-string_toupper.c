#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * *string_toupper - turn upper 
 * @s: strimg
 * @i: the number 
 * @m: lenght 
 * Return: nothing.
 */
char *string_toupper(char *str)
{
int i = 0;
int m = 0;
while (*str != '\0')
{
m++;
}
for ( ; i < m ; i++)
{
str[i] = _toupper(str[i]);
}
return(0);
}
