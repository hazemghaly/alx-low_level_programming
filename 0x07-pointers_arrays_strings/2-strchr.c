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
char *p = s;
int i = 0;
while (*s != c)
{
s++;
i++;
}
if (*s == c)
{
return p + i;
}
else
{
return 0;
}
}
