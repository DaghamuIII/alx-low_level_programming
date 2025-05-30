#include "lists.h"
#include <stdio.h>

/**
 * print_list - print all elements of a list_t list
 * @h: head of linked list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *current;
	size_t c;

	c = 0;
	current = h;
	while (current != NULL)
	{
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", current->len, current->str);
		current = current->next;
		c++;
	}
	return (c);
}
