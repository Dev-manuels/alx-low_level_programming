#include "main.h"
/**
* swap_int - function that swaps two values a and b
*
* @a: varible
* @b: varible
* Return: void
*/
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
