#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at start
 * of a list
 * @n: value to be placed at the new node
 * @head: pointer to start of list
 * Return: pointer to new node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (head != NULL)
	{
		if (new != NULL)
		{
			new->n = n;
			new->next = *head;
			*head = new;
		}
	}
	return (new);
}
