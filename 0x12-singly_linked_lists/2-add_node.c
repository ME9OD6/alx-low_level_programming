#include "lists.h"

/**
 * get_length - returns length of string
 * @s: string that length is being determined
 *
 * Return: length of string
 */

unsigned int get_length(const char *s)
{
	unsigned int i, len;

	len = 0;

	if (s == NULL)
		return 0;
	i = 0;
	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

/**
 * add_node - adds a new node at the beginning of list_t list
 * @head: head of linked list
 * @str: string to be used as data for node
 * Return: pointer to updated list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = (list_t *) malloc(sizeof(list_t));
	unsigned int len;

	if (new_node == NULL)
		return NULL;
	len = get_length(str);
	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = (*head);
	(*head) = new_node;
	return (*head);
}
