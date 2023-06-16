#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all
 * the data(n) in a double linked list
 * @head: pointer to start of list
 * Return: Sum of all the data, 0 if list is empty
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	if (head != NULL)
	{
		while (current)
		{
			sum += current->n;
			current = current->next;
		}
	}
	return (sum);
}
