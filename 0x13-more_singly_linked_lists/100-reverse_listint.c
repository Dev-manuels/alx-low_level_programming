#include "lists.h"
/**
 * reverse_listint - function that reverses a list.
 * @head: pointer to a list
 * Return: pointer to new head.
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next, *current;

	if (head == NULL)
	{
		return (NULL);
	}
	if (*head != NULL)
	{
		current = *head;
		while (current)
		{
			next = current->next;
			current->next = prev;
			prev = current;
			current = next;
		}
	}
	*head = prev;
	return (*head);
}
