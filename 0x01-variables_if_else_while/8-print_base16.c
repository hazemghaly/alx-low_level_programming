#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
*/
int main(void)
{
int n;
char al;
for (n = 48; n < 58; n++)
{
putchar(n);
}
for (al = 'a' ; al <= 'f'; al++)
{
putchar(al);

}
putchar('\n');
return (0);
}
