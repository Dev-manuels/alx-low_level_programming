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
	dlistint_t *new_node = malloc(sizeof(dlistint_t)), *current = *head;

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->prev = NULL;
	new_node->next = NULL;
	new_node->n = n;
	if (*head == NULL)
		return (new_node);
	while (current)
	{
		if (current->next == NULL)
		{
			new_node->prev = current;
			current->next = new_node;
			break;
		}
		current = current->next;
	}
	return (new_node);
}
