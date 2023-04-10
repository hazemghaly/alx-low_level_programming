#include <string.h>
#include "main.h"
#include <stdio.h>

/** *_memset - fill memory
 * @s: first char
 * @accept: second char
 * @len: int
 * return :n sceuss
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int len =0;
if((s == NULL) || (accept == NULL))
return len;
while(*s && strchr(s,*accept++))
{
len++;
}
return len;
}
