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

char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int dest_len = strlen(dest);
for (i = 0 ; i < n && src[i] != '\0' ; i++)
dest[dest_len + i] = src[i];
dest[dest_len + i] = '\0';
return(dest);
}
