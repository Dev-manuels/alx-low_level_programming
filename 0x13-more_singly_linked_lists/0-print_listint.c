#include "lists.h"

/**
 * print_listint - function to print value from a list
 * @h: pointer to start of a list to be printed.
 * Return: number of nodes in the list.
*/
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h != NULL)
	{
		while (h != NULL)
		{
			printf("%d\n", h->n);
			h = h->next;
			count++;
		}
		return (count);
	}
	return (0);
}
