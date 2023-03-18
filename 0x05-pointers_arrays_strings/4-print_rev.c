#include "main.h"
/**
* print_rev - unction that prints a string, in reverse
*
* @s: string to be printed
* Return: int
*/
void print_rev(char *s)
{
	int len = strlen(s), i;

	for (i = len - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	putchar('\n');
}
