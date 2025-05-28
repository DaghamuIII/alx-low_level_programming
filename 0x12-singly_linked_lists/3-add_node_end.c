#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - gets length of the string
 * @s: string
 * Return: length of the string
 */
int _strlen(const char *s)
{
	int i;
	for (i = 0; s[i]; i++)
		;
	return (i);
}

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer to the head
 * @str: string to duplicate into the node
 *
 * Return: address of new element, or NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *current;
	char *dupstr;

	if (head == NULL || str == NULL)
		return (NULL);

	dupstr = strdup(str);  // assume strdup is allowed
	if (dupstr == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(dupstr);  // ❗ Clean up strdup before returning
		return (NULL);
	}

	new->str = dupstr;
	new->len = _strlen(dupstr);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	current = *head;
	while (current->next != NULL)
		current = current->next;

	current->next = new;
	return (new);
}
