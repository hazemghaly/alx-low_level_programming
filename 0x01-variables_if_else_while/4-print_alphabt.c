#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
*/
int main(void)
{
/*declare a variable*/
char alphabet;
for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
{ if (alphabet != 'e' && alphabet !='q')
{
/* print the value of the variable*/
putchar(alphabet);
}
}
putchar('\n');
return (0);
}
