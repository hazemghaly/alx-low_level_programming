#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * *cap_string - turn upper 
 * @s: strimg
 * @i: the number 
 * @m: lenght 
 * Return: nothing.
 */
char *cap_string(char *str)
{
int i = 0;
int m = 0;
char str;
while (*str != '\0')
{
for ( ; i < m ; i++)
{
str[i] = _toupper(str[i]);
m++;
}
}
return(0);
}
