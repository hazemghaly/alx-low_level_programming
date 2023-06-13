#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *_strdup  - acreate of array malloc
 * @str: array
 *
 * Return: Always 0 (Success) , NULL (Error)
 */

char *_strdup(char *str)
{
/*int n;*/
str = (char *) malloc(sizeof(char) * 13);
if (str == NULL)
{
return (NULL);
}
else
{
free(str);
/*for (n = 0; n < 13; n++)
{
str[n] = n + 1;
}
*/
return (str);
}
}
