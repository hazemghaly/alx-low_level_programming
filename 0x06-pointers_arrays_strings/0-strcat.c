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
int dest_len = strlen(dest);
int i;
int n = 0;
for (i = 0 ; i < n && src[i] != '\0' ; i++)
dest[dest_len + i] = src[i];
dest[dest_len + i] = '\0';
return dest;
}
