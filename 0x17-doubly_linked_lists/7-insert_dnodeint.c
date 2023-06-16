#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node
 * at a given position in a list.
 * @h: pointer to the start of the list
 * @idx: index at which to insert new node
 * @n: value to be stored in the new node
 * Return: pointer to new node or null on failure
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t)), *current = *h;
	unsigned int count = 0;

	if (new_node == NULL || current == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->prev = NULL;
	new_node->next = NULL;
	new_node->n = n;
	if (idx != 0)
	{
		while (current)
		{
			if (count == idx - 1)
			{
				new_node->prev = current;
				new_node->next = current->next;
				return (new_node);
			}
			count++;
			current = current->next;
		}
	} else
	{
		new_node->next = current;
		return (new_node);
	}
	free (new_node);
	return (NULL);
}
