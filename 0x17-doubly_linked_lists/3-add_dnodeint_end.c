#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node at the end
 * of a double linked list
 * @head: head of list
 * @n: value to be inserted in new node
 * Return: address of new node, null on failure
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *current = *head;

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->prev = NULL;
	new->next = NULL;
	new->n = n;
	if (*head == NULL)
		return (new);
	while (current)
	{
		if (current->next == NULL)
			new->prev = current;
		current = current->next;
	}
	return (new);
}
