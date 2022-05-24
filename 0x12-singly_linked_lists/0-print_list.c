#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements of 'list_t' list
 * @h: points to the head of a linked list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t size;

	size = 0;
	while (h != NULL)
	{
		size++;
		if (h->str == NULL)
			printf("[%d] (nil)\n", 0);
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (size);
}
