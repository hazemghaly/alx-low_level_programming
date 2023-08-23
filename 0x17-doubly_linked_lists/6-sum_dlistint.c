#include "lists.h"
/**
 * sum_dlistint- sum all nth
 * @head: 1st member
 *
 * Return: Always 0 (Success) , NULL (Error)
 */
int sum_dlistint(dlistint_t *head)
{
size_t ele = 0;
int x = 0;
while (head)
{
ele++;
x += head;
head = head->next;
}
return (ele);
}
