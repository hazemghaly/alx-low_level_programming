#include "main.h"
#include <string.h>
/**
 * _strcmp - xompare the string
 *@s1 : first number
 *@s2 : second number
 *@i : 3rd number
 *@a1 : 4th number
 *@a2 : 5th number
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
int i;
for (i = 0 ;  ; i++)
{
int a1 = (int) s1[i];
int a2 = (int) s2[i];
if (a1 > a2)
{
return(_strcmp(s1, s2));
}
if (a1 < a2)
{
return(_strcmp(s2, s1));
}
return(_strcmp(s1, s1));
}
}
