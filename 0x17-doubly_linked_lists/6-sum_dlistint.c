#include "lists.h"
/**
 * sum_dlistint- sum all nth
 * @head: 1st member
 *
 * Return: Always 0 (Success) , NULL (Error)
 */
int sum_dlistint(dlistint_t *head)
{
int x = 0;
while (head)
{
x += head->n;
head = head->next;
}
return (ele);
}
