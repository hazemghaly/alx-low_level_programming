#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *malloc_checked  - acreate of array
 * @b: first int
 * Return: Always 0 (Success) , 98 (Error)
 */

void *malloc_checked(unsigned int b)
{
int *str;
if (b  == 0)
{
exit(98);
}
str =  malloc(b);
return(str);
}
