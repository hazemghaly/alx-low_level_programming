#include "main.h"
#include <string.h>
/**
 * *_strcat - overwrites the string
 *@dest : first number
 *@src : second number
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
int m = strlen(dest);
int i;
for (i = 0 ; i < n && src[i] != '\0' ; i++)
{
dest[m + i] = src[i];
}
dest[m + i] = '\0';
return (dest);
}
