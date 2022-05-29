#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head of linked list
 * @index: index to be inserted at
 * @n: integer data for inserted node
 * Return: address of new node or NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{

    unsigned int counter = 0;
    listint_t *tmp;
    listint_t *tmp1;

    if (head == NULL)
        return (NULL);

    tmp = *head;

    if (tmp == NULL && index != 0)
        return (NULL);
    tmp1 = malloc(sizeof(listint_t));

    if (tmp1 == NULL)
        return (NULL);
    tmp1->n = n;

    if (index == 0)
    {
        tmp1->next = *head;
        *head = tmp1;
        return (tmp1);
    }

    while (counter != index - 1)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            free(tmp1);
            return (NULL);
        }
        counter++;
    }

    tmp1->next = tmp->next;
    tmp->next = tmp1;

    return (tmp1);
}