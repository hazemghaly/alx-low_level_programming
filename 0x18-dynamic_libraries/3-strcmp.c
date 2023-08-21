#include "main.h"
#include <string.h>
/**
 * _strcmp - compare the string
 *@s1 : first number
 *@s2 : second number
 *@j : 3rd number
 *@x : 4th number
 *@y : 5th number
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
int j;
for (j = 0 ;  ; j++)
{
int x = (int) s1[j];
int y = (int) s2[j];
if (x > y)
{
return(_strcmp(s1, s2));
}
if (x < y)
{
return(_strcmp(s2, s1));
}
return(_strcmp(s1, s1));
}
}
