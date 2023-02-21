#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>



void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
}


#endif /*_MAIN_H_*/