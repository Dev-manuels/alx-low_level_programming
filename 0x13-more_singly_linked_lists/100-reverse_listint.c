#include "lists.h"
/**
 * reverse_listint - function that reverses a list.
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next;

	if (head == NULL)
	{
		return (NULL);
	}
	if (*head != NULL)
	{
		while (*head)
		{
			next = (*head)->next;
			(*head)->next = prev;
			prev = *head;
			*head = next;
		}
	}
	*head = prev;
	return (*head);
}