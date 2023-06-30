#include <lists.h>
/**
 * list_len- returns the number of elements in a linked 
 * @h: 1st member
 *
 * Return: Always 0 (Success) , NULL (Error)
 */
size_t list_len(const list_t *h);
{
size_t i = 0;
h->len = strlen(h->str);
if (h->len == 0)
{
printf("[0] (nil)");
}
while(h)
{
h = h->next;
i++;
}
return (i);
}
