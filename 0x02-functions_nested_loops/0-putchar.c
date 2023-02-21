#include <stdio.h>
#include <string.h>
/**
* main - main function entry
*
* Return: int(0)
*/
int main(void)
{
	char text[] = "_putchar";
	int i;
	int len = strlen(text);

	for( i = 0; i <= len; i++)
		putchar(text[i]);
	return (0);
}