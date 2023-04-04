#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list and sets the head to NULL.
 * @head: pointer to start of list.
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	if (head == NULL || *head == NULL)
		return;

	current = *head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}

	*head = NULL;
}
