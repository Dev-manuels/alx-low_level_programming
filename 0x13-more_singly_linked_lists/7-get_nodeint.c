#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a list
 * @head: pointer to start of list.
 * @index: index of node to return starting at 0
 * Return: nth node of a list or null on failure.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = NULL;
	unsigned int tracker = 0;

	if (head != NULL)
	{
		tmp = head;
		while (tmp != NULL)
		{
			if (tracker == index)
			{
				break;
			}
			tmp = tmp->next;
			tracker++;
		}
		return (tmp);
	}
	return (tmp);

}
