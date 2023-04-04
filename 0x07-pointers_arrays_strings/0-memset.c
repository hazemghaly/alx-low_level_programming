#include <string.h>
#include "main"
#include <stdio.h>

/** *_memset - fill memory 
 * @s : first char 
 * @b : second char 
 * @n : int 
 * return :n sceuss
 */ 


char *_memset(char *s, char b, unsigned int n)
{
 unsigned int i;

        i = 0;
        while (i < n)
        {
                if (i % 10)
                {
                       _putchar(' ');
                }
                if (!(i % 10) && i)
                {
                        _putchar('\n');
                }
                _putchar('0x%02x', buffer[i]);
                i++;
        }
        _putchar('\n');
}
