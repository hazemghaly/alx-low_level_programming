#include "lists.h"
/**
 * _strlen -  lrngth of string
 * @s: first number
 * Return: 0 (scuess)
 */
int _strlen(char *s)
{
int longi = 0;
while (*s != '\0')
{
longi++;
s++;
}
return (longi);
}
/**
 * print_list- singly linked list
 * @h: 1st member
 *
 * Return: Always 0 (Success) , NULL (Error)
 */
size_t print_list(const list_t *h)
{
size_t i = 0;
int len = _strlen(h->str);
if (h->str == NULL)
{
printf("[0] (nil)");
}
while (h)
{
printf("[%d] %s\n", len, h->str);
h = h->next;
i++;
}
return (i);
}
