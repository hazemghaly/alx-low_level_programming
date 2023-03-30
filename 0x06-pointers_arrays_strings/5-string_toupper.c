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
char *string_toupper(char *s)
{
int i = 0;
int m = 0;
while (*s != '\0')
{
for ( ; i < m ; i++)
{
s[i] = _toupper(s[i]);
m++;
}
}
return(0);
}
