#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Print a `listint_t` linked list including mem addresses
 * @head: head of linked list
 * Description: Go through the list only once.
 * Return: number of nodes in list. If fails, exit with status 98.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	size_t count = 0;
	const listint_t **visited;
	size_t i;

	visited = malloc(sizeof(listint_t *) * 1024);
	if (visited == NULL)
		exit(98);

	while (current != NULL)
	{
		for (i = 0; i < count; i++)
		{
			if (current == visited[i])
			{
				printf("-> [%p] %d\n", (void *)current, current->n);
				free(visited);
				return (count);
			}
		}

		visited[count] = current;
		count++;

		printf("[%p] %d\n", (void *)current, current->n);
		current = current->next;
	}

	free(visited);
	return (count);
}
