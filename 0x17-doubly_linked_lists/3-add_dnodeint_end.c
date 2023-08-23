#include "lists.h"
/**
 * *add_dnodeint_end- add at the end in a linked
 * @head: 1st member
 * @n: intager
 *
 * Return: Always 0 (Success) , NULL (Error)
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *endadd = malloc(sizeof(dlistint_t));
dlistint_t *node = *head;
if (!head || !endadd)
{
	free(endadd);
	return (NULL);
}
endadd->n = n;
endadd->next = NULL
if (!*head)
{
	*head = endadd;
	endadd->prev = NULL;
}
if (node)
{
	while (node->next)
	{
		node = node->next;
		node->next = endadd;
		endadd->prev = node;
	}
}
else
{
	*head = endadd;
}
return (endadd);
}
