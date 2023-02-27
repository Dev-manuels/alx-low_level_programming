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

	for (i = len - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\0");
}
