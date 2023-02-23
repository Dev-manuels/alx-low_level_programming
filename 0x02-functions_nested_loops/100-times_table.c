#include "main.h"
/**
* print_times_table -  function that prints the multiplication table of n
*
* Return: void
*/
void print_times_table(int n)
{
	int i, j, out;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			out = i * j;
			_putchar('0' + out);
			if (j == n)
				continue;
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}