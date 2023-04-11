#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/** main - main function
 *@argv: first char
 *@argc: first int
 * return :n sceuss
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0;i < argc-1;i++)
{
printf("%d\n",i);
}
}
