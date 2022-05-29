#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index of a linked list
 * @head: head of linked list
 * @index: index to delete
 * 
 * Return: success 1, failure -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int counter = 0;
	listint_t *tmp;
	listint_t *tmp1;

	if (head == NULL)
		return (-1);

	tmp = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}

	while (counter != index)
	{
		tmp1 = tmp;
		tmp = tmp->next;
		if (tmp == NULL)
			return (-1);
		counter++;
	}

	tmp1->next = tmp->next;
	free(tmp);
	return (1);
}