#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe - frees the linked list
 * @h: points to the first node the linked list
 *
 * Return: number of elements
 */
size_t free_listint_safe(listint_t **h)
{
	size_t lens = 0;
	int diff;
	listint_t *tempo;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			tempo = (*h)->next;
			free(*h);
			*h = tempo;
			lens++;
		}
		else
		{
			free(*h);
			*h = NULL;
			lens++;
			break;
		}
	}

	*h = NULL;

	return (lens);
}
