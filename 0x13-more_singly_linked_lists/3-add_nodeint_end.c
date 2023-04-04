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
	listint_t *current;

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	current = *head;
	while (current->next)
		current = current->next;

	current->next = new;

	return (new);
}
