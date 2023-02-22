#include "main.h"
/**
* jack_bauer - function to print every minute of the day
* jack_bauer_cont - function to continue from the last timer point
* Return: int
*/
void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0; i < 3; i++)
	{
		if (i == 2)
		{
			break;
		}
		else
		{
			for (j = 0; j < 10; j++)
			{
				for (k = 0; k < 6; k++)
				{
					for (l = 0; l < 10; l++)
					{
						putchar('0' + i);
						putchar('0' + j);
						putchar(':');
						putchar('0' + k);
						putchar('0' + l);
						putchar('\n');
					}
				}
			}
		}
	}
	jack_bauer_cont();
}

void jack_bauer_cont(void)
{
	int i, j, k, l;
	i = 2;
	
	for (j = 0; j < 4; j++)
	{
		for (k = 0; k < 6; k++)
		{
			for (l = 0; l < 10; l++)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar(':');
				putchar('0' + k);
				putchar('0' + l);
				putchar('\n');
			}
		}
	}
}
