#include <string.h>
#include "main.h"
#include <stdio.h>
/** _puts_recursion  - print string eith recursion
 * @s: first char
 * @i: int
 *
 * return :n sceuss
 */
void _puts_recursion(char *s)
{
int i = 0;
if (*s == '\0')
{
_putchar('\n');
return;
}
if (s[i] != '\0')
{
_putchar(s[i]);
i++;
_putchar('\n');
}
}
