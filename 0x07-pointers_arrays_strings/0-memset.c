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
      while (i < n)
{
          if (!(i % 10) && i)
        {
                _putchar('\n');
       }
       for (i = 0; s[i] != '\0';)
       {
	       s[i] = b;
       }
i++;
}
_putchar('\n');
return(0);
}
