#include "main.h"

/**
* _isupper - function to test if a letter is uppercase
*
* Return: intergr
*/
int _isupper(int c)
{
	int rtval;

	if (isupper(c) > 0)
		rtval = 1;
	else
		rtval = 0;
	return(rtval);
}