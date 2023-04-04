#include <string.h>
#include "main.h"
#include <stdio.h>

/** *_memcpy  - fill memory 
 * @src : first char 
 * @dest : second char 
 * @i: int 
 * return :n sceuss
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{

   for (int i=0; i<n; i++) 
   {
       	   dest[n] = src[n]; 
n--;
   }
return(dest);
}
