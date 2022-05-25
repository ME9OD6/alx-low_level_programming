#include "lists.h"
/**
 * get_length - returns string length
 * @s: string parameter
 *
 * Return: length of @str
 */
unsigned int get_length(const char *s)
{
	int len, i;

	if (s == NULL)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

/**
 * add_node_end - add new node to the end of a linked list
 * @head: pointer to pointer in linked list
 * @s: set the s attribute 
 *
 * Return: address of linked list of NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	char *string;
	list_t *mel;

	mel = *head;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	if (str == NULL)
		return (NULL);

	string = strdup(str);
	if (string == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = strlen(str);
	new->str = string;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (mel->next != NULL)
	{
		mel = mel->next;
	}
	mel->next = new;

	return (new);
}
