#include "lists.h"
/**
 * print_dlistint - function that prints all elements
 * of a dlistint_t list.
 * @h: head of the list
 * Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t numb = 0;

	if (h == NULL)
		return (numb);

	while (h)
	{
		printf("%d\n", h->n);
		numb++;
		h = h->next;
	}
	return (numb);
}
