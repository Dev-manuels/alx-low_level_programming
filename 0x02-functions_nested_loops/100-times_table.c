#include "main.h"
/**
* print_times_table -  function that prints the multiplication table of n
*
* Return: void
*/
void print_times_table(int n)
{
	int i, j, out;
	char str[20];

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			out = i * j;
			sprintf(str, "%d", i * (j+1));
			printf("%d", out);
			if (j == n)
				continue;
			putchar(',');
			if (strlen(str) > 1)
			{
				printf("  ");
				continue;
			}
			printf("   ");
		}
		putchar('\n');
	}
	putchar('\n');
}
