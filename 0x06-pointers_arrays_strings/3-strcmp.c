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
if(s1[i] == '\0' && s2[i] == '\0')
{
return(0);
}
int a1 = (int) s1[i];
int a2 = (int) s2[i];
if(a1 > a2)
return(1);
if(a1 < a2)
return(-1);
}
}
