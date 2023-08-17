#include "lists.h"
/**
 * dlistint_len - function that returns the number of elements
 * in a linked dlistint_t list
 * @h: head of the list
 * Return: length of list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t numb = 0;

	if (h == NULL)
		return (numb);

	while (h)
	{
		numb++;
		h = h->next;
	}
	return (numb);
}
