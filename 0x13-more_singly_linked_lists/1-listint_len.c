#include "lists.h"

/**
 * listint_len - Function that returens the length of list @h
 * @h: pointer to start of a list
 * Return: Number of elements in the list @h.
*/
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h != NULL)
	{
		while (h != NULL)
		{
			h = h->next;
			count++;
		}
		return (count);
	}
	return (0);
}
