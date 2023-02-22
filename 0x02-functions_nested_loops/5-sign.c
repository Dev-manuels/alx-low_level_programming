#include "main.h"
/**
* print_sign - function to check it char is an alphabet
*
* @n: var for comparing
* Return: int(1)
*/
int print_sign(int n)
{
	int rt-val;
	if (n > 0)
	{
		putchar('+');
		rt-val = 1;
	}
	else if (n == 0)
	{
		putchar('0');
		rt-val = 0;
	}
	else if (n < 0)
	{
		putchar('-');
		rt-val = -1;
	}
	return (rt-val);
}
