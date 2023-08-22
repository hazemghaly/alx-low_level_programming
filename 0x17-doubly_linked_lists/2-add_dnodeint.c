#include "lists.h"
/**
 * *add_dnodeint- add  in a linked
 * @head: 1st member
 * @n: intager
 *
 * Return: Always 0 (Success) , NULL (Error)
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *newadd = malloc(sizeof(dlistint_t));
if (!head || !newadd)
{
	free(newwadd);
	return (NULL);
}
newadd->n = n;
newadd->prev = NULL
if (!*head)
{
	*head = newadd;
	newadd->next = NULL;
}
else
{
	newadd->next = *head;
	(*head)->prev = newadd;
	*head = new;
}
return (newadd);
}
