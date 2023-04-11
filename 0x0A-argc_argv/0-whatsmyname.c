#include <stdio.h>
#include "main.h" 
/** main - main function
 * @argv: first char
 * @argc: first int
 * @i: int
 * return :n sceuss
 */
int  main(int argc, char *argv[])
{
int i;
printf("argc:%d\n", argc );
for (i = 0;i < argc;i++)
{
printf("%s ", argv[i]);
}
printf("\n");
return(0);
}
