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
char *cap_string(char *)
{
int i = 0;
char *str;
int m = 0;
while (*s != '\0')
{
m++;
}
for ( ; i < m ; i++)
{
str[i] = _toupper(str[i]);
}
return(0);
}
