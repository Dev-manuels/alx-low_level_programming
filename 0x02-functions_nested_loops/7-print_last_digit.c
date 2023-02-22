#include "main.h"
/**
* print_last_digit - prints last digit of a number
* @num:number input to cuntion
* Return: int
*/
int print_last_digit(int num)
{
	if (num < 0)
	num = -num;
	_putchar('0' + (num % 10));
	return (num % 10);
}
