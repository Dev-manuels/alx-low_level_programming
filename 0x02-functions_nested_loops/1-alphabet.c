#include <stdio.h>
#include "main.h"
/**
* main - main function entry
* print_alphabet - function to print lowercase alphabets
*
* Return: int(0)
*/
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
}

int main(void)
{
    print_alphabet();
    return (0);
}
