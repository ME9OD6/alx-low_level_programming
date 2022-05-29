#include "lists.h"

/**
 * pop_listint - delete head node and return node's data
 * @head: head of linked list
 * 
 * Return: value of node (integer)
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;

	unsigned int i;

	tmp = *head;

	if (tmp == NULL)
		return (0);

	i = tmp->n;
	*head = tmp->next;

	free(tmp);

	return (i);
}