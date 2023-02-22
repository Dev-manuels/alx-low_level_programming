#include "main.h"
/**
* jack_bauer - function to print every minute of the day
*
* @i: car for loop counter 0 to 2
* @j: car for loop counter 0 to 3
* @k: var for loop counter 0 to 5
* @l: var for loop counter 0 to 9
* Return: int
*/
void jack_bauer(void)
{
	int i, j, k, l;
	for (i = 0; i < 3; i++)
	{
		if (i == 2)
		{
			for (j = 0; j < 4; j++)
			{
				for (k = 0; k < 6; k++)
				{
					for (l = 0; l < 10; l++)
					{
						printf("%d%d:%d%d\n", i, j, k, l);
					}
				}
			}
		}
		else
		{
			for (j = 0; j < 9; j++)
			for (j = 0; j < 10; j++)
			{
				for (k = 0; k < 6; k++)
				{
					for (l = 0; l < 10; l++)
					{
						printf("%d%d:%d%d\n", i, j, k, l);
					}
				}
			}
		}
	}
}