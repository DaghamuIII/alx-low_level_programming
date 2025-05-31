#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a linked list even if it has a loop.
 * @head: Pointer to the head of the list
 * Return: Number of nodes printed
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head, *fast = head;
	size_t count = 0;

	/* Detect loop */
	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			break;
	}

	/* If no loop, print normally */
	if (!fast || !fast->next)
	{
		while (head)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			count++;
		}
		return (count);
	}

	/* Loop detected: find start of loop */
	slow = head;
	while (slow != fast)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		fast = fast->next;
		count++;
	}

	/* Print the start of loop once */
	printf("[%p] %d\n", (void *)slow, slow->n);
	count++;

	/* Indicate loop */
	printf("-> [%p] %d\n", (void *)slow, slow->n);

	return (count);
}
