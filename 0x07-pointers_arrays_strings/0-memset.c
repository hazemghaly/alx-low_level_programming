#include <string.h>
#include "main.h"
#include <stdio.h>

/** *_memset - fill memory
 * @s: first char
 * @b: second char
 * @n: int
 * @i: int
 * return :n sceuss
 */ 

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

        i = 0;
          for (i = 0; n > 0 ; i++ )
       {
	       s[i] = b;
       }
return(s);
}
