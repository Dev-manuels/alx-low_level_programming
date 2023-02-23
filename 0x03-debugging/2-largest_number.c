#include <stdio.h>
#include <main.h>
/**
 * main - returns the largest number of the three numbers provided
 * a: first int
 * b: second int
 * c: third int
 * Return: largest number (success)
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a> b && b> c)
	{
		largest = a;
	}
	else if (b > a && a > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
