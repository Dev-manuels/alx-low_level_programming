#include "main.h"
/**
* main - main function entry
*
* Return: int SUCCESS
*/
int main(void)
{
	int sum, i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
