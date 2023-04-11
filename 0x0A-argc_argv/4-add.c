#include <stdio.h>
#include <stdlib.h>
/** main - main function
 *@argv: first char
 *@argc: first int
 *@m: 2nd int
 *@x: 3rd
 *@y: 4th
 *@i: 5th
 * return :0 sceuss
 */
int main(int argc, char *argv[])
{
int i;
int m; 
if (argc >= 3 && argc != 1 && argc != 2)
{
for (i = 1 ; i < argc ; i++)
{
int y = atoi(argv[i]);
m = m + y;
}
printf("%d\n",m);
}
else if(argc == 1)
{
printf("0\n");
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
