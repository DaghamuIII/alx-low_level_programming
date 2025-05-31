#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t list (even if there's a loop)
 * @h: Pointer to the address of the head
 * Return: Number of nodes freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h;
	listint_t **visited;
	size_t i, count = 0;

	if (!h || !*h)
		return (0);

	visited = malloc(sizeof(listint_t *) * 1024); // Max 1024 nodes for now
	if (!visited)
		exit(98);

	while (current)
	{
		for (i = 0; i < count; i++)
		{
			if (current == visited[i])
			{
				free(visited);
				*h = NULL;
				return (count);
			}
		}
		visited[count++] = current;
		listint_t *temp = current;
		current = current->next;
		free(temp);
	}
	free(visited);
	*h = NULL;
	return (count);
}
