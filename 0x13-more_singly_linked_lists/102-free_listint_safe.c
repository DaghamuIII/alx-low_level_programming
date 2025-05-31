#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t linked list safely (even with loops)
 * @h: Double pointer to the head of the list
 * Return: Number of nodes freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *next;
	size_t count = 0;
	void *marker[1024];  /* Static array for visited pointers */
	size_t i;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;
	while (current != NULL)
	{
		/* Check if we've already seen this node */
		for (i = 0; i < count; i++)
		{
			if (marker[i] == current)
			{
				*h = NULL;
				return (count); /* Loop detected */
			}
		}

		/* Store current address to track */
		marker[count++] = current;

		next = current->next;
		free(current);
		current = next;
	}

	*h = NULL;
	return (count);
}
