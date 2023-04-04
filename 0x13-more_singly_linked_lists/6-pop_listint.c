#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a
 * listint_t linked list.
 * @head: pointer to start of list.
 * Return:the head node’s data (n),if the linked list is empty return 0
*/
int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	int rtv = 0;

	if (head == NULL)
	{
		rtv = 0;
	} else
	{
		if (*head != NULL)
		{
			*head = tmp->next;
			rtv = tmp->n;
			free(tmp);
		}
	}
	return (rtv);
}
