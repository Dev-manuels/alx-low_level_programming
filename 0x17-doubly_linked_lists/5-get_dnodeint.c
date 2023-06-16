#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a
 * double linked list
 * @head: pointer to head of the list
 * @index: index of node to be returned
 * Return: node @index or Null on faliure
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idxCur = 0;
	dlistint_t *current = head;

	if (head == NULL)
		return (NULL);
	while (current)
	{
		if (idxCur == index)
			return (current);
		idxCur++;
		current = current->next;
	}
	return (NULL);
}
