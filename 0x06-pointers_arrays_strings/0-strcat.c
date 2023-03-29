#include "main.h"
#include <string.h>
/**
 * *_strcat - overwrites the string
 *@dest : first number
 *@src : second number
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
int m = 0
int i;
while (*(src + m) != '\0')
{
m++;
}
for (i = 0 ; i < m ; i++)
{
dest[i] = src[i];
}
dest[m] = '\0';
return (dest);
}
