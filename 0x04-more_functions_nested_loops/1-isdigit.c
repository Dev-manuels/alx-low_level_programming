#include "main.h"

/**
* _isdigit -function to test if char c is uppercase
*
* @c: varivale to be tested
* Return: int 0 for NO, 1 for yes
*/
int _isdigit(int c)
{
	return ((c >= 'A' && c <= 'F') || (c >= 'a' && c <= 'f') ? 0 : 1);
}
