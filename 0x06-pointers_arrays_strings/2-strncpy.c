#include "main.h"
#include <string.h>
/**
 * *_strncat - overwrites the string n times
 *@dest : first number
 *@src : second number
 *@i : 3rd number
 *@n : 4th number
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return(dest);
}
