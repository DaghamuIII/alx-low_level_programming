#include "lists.h"

#include <stdio.h>

/**
* print_listint_safe - Print a `listint_t` linked list including mem addresses
* @head: head of linked list
* Description: Go through the list only once.
* Return: number of nodes in list. If fails, exit with status 98.
*/

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

    while (head)
    {
        printf("[%p] %d\n", (void *)head, head->n);
        count++;

        head = head->next;

        if (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        if (slow == fast && count > 1)
        {
            printf("-> [%p] %d\n", (void *)head, head->n);
            break;
        }
    }

    return (count);
}
