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
		return (1);
		putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		putchar('0');
	} else
	{

		return (0);
		putchar('-');
	}
}
