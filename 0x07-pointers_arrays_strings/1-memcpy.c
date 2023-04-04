#include <string.h>
#include "main.h"
#include <stdio.h>

/** *_memcpy  - fill memory
 * @src : first char
 * @dest : second char
 * @i: int
 * @n :num of times
 * return :n sceuss
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int l = 0;
int i;
	while (*(src + l) != '\0')
{
l++;
}
   for (i = 0; i < l; i++) 
   {
       	   dest[i] = src[i]; 
n--;
   }
return(dest);
}
