#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print all elements of a `listint_t` list
 * @h: linked list head
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
    const listint_t *cursor = h;
    size_t count = 0;

    while (cursor != NULL)
    {
        printf("%d\n", cursor->n);
        count += 1;
        cursor = cursor->next;
    }
    return (count);
}