#include "main.h"
#include <string.h>
/**
 * *_strcat - overwrites the string
 *@dest : first number
 *@src : second number
 *@dest_len : 3rd  number
 *@i : 4th number
 *@n : 5th number
 *@k : 6th number
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
int i = 0;
int k = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[k] != '\0') 
{
dest[i] = src[k];
i++;
k++;
}
dest[i] = '\0';
return(dest);
}
