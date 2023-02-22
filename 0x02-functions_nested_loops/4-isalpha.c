#include "main.h"
/**
* _isalpha - function to check it char s alphabet
*
* @c: var for comparing
 Return: int
 */
int _isalpha(int c)
{
	if (c > 64 && c < 123)
		return (1);
	else
		return (0);
}
