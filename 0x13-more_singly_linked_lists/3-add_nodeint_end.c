#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at end
 * of a list
 * @n: value to be placed at the new node
 * @head: pointer to start of list
 * Return: pointer to new node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *current = *head;

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	while (current != NULL)
	{
		if (current->next == NULL)
		{
			new->n = n;
			current->next = new;
			new->next = NULL;
		}
		current = current->next;
	}
	return (new);
}
