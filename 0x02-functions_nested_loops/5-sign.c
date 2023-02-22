#include "main.h"
/**
* _isalpha - function to check it char is an alphabet
*
* @n: var for comparing
* Return: int(1)
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	} else
	{
		_putchar('-');
		return (-1);
	}
}
