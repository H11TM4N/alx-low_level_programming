#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns all elements in a linked lists
 * @h: linked list of type listint_t to be traversed
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}

	return (number);
}

