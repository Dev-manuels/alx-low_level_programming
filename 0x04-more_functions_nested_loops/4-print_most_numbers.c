#include "main.h"
/**
* print_most_numbers - function that prints the numbers, from 0 to 9
*
* Return: void
*/
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <10; i++)
		_putchar('0' + i);
	_putchar(\n);
}