#include "main.h"
/**
* rev_string - function that reverses a string
*
* @s: string to be reversed
* Return: int
*/
void rev_string(char *s)
{
	int len = strlen(s), i;
	char *c = s;

	for (i = len - 1; i >= 0; i--)
	{
		printf("%c", c[i]);
	}
}
