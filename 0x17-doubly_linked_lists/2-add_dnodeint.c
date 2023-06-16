#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at the beginning
 * of a double linked list
 * @head: head of list
 * @n: value to be inserted in new node
 * Return: address of new node, null on failure
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->prev = NULL;
	new->next = *head;
	new->n = n;
	*head = new;
	return (new);
}
