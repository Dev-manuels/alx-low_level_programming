#include "main.h"
/**
 * puts2 - prints every other character of a string
 *
 * @str: char to check
 *
 * Return: 0 is success
 */
 void puts2(char *str){
	int i = 0;

	while ( str[i] != '\0')
	{
		printf("%c\n", str[i]);
	}
 }