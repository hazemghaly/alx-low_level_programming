#include "lists.h"
/**
 * *get_dnodeint_at_index- free a linked
 * @head: 1st member
 * @index: unsigned int
 * Return: Always 0 (Success) , NULL (Error)
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int count = 0;
while (head)
{
	if (count == index)
	{
		return (head);
	}
	head = head->next;
	count++;	
}
return (NULL);
}
