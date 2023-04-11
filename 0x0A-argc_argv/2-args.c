#include <stdio.h>
#include "main.h" 
/** main - main function
 *@argv: first char
 *@argc: first int
 *@i: 2nd int
 * return :0 sceuss
 */
int main(int argc, char *argv[])
{
int i;
for (i = 1; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
