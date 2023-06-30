#include "lists.h"
/**
 * print_list- singly linked list
 * @h: 1st member
 *
 * Return: Always 0 (Success) , NULL (Error)
 */
size_t print_list(const list_t *h)
{
size_t i = 0;
int len = strlen(h->str);
if (len == 0)
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
