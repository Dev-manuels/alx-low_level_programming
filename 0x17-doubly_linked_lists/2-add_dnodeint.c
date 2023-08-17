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
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->prev = NULL;
	new_node->next = *head;
	new_node->n = n;
	*head = new_node;
	return (new_node);
}
