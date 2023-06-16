#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/** *_memset - fill memory
 * @s: first char
 * @b: second char
 * @n: int
 * return :n sceuss
 */ 

char _memset(char *s, char b, unsigned int n)
{
int i;
char *ptr = s;
for (i = 0; n > 0 ; i++ )
{
s[i] = b;    
n--;
}
return(ptr);
}

/**
 * *_calloc  - returns a pointer to a 2 dimensional array of integers.
 * @nmemb: int
 * @size: 2nd int
 * Return: Always 0 (Success) , NULL (Error)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *p;
if (nmemb = 0 || size = 0)
{
return (NULL);
}
p = malloc(sizeof(int *) * nmemb);
if (p == NULL)
{
return (NULL);
}
_memset(p, 0, sizeof(int *) * size);
return (p);
}
