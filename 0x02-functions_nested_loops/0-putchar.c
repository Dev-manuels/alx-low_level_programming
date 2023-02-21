#include <stdio.h>
/**
* main - main function entry
*
* Return: int(0)
*/
int main(void)
{
	char text[] = "_putchar";
	int i;

	for(i = 0; i<strlen(text);i++)
		putchar(text[i]);
	return (0);
}