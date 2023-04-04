#include <string.h>
#include "main.h"
#include <stdio.h>

/** *_memset - fill memory
 * @s: first char
 * @c: second char
 * @i: int
 * return :n sceuss
 */

char *_strchr(char *s, char c)
{
int i = 0;
while (*s != '\0')
{
s++;
if (*s == c)
{
return(s);
}
return(NULL);
}
}
