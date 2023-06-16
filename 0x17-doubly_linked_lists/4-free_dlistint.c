#include "lists.h"

/**
 * free_dlistint - function that frees a double linked list
 * @head: pointer to head of the list
 * Return: void
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t * temp;

	if (head != NULL)
	{
		while (head)
		{
			if (head->next)
				temp = head->next;
			free(head);
			head = temp;
		}
	}
}
