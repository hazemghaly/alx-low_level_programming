#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * wildcmp - compare two recursion
 *
 * Description: 'palindrome recursion'
 * @s1: char 1st
 * @s2: char 2nd
 *
 * Return: Always 0 (Success)
 */

int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
{
return (1);
}
if (*s1 == '\0' && s2[0] == '*')
{
return (1);
}
if (*s1 == 0 || *s2 == 0)
{
return (0);
}
if ((s1[0]) == (s2[0]) && (s1[0]) == ((s2 + 1)[0]))
{
wildcmp(s1, ++s2);
}
else if ((s1[0]) == (s2[0]) && (s2[0]) == ((s1 + 1)[0]))
{
wildcmp(++s1, s2);
}
else if ((s1[0]) == (s2[0]))
{
wildcmp(++s1, ++s2);
}
else
{
return (0);
}
return (0);
}
