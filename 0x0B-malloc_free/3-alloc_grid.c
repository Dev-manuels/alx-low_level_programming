#include "main.h"
/**
 * alloc_grid - function that returns a pointer
 *  to a 2 dimensional array of integers.
 * @width: width of the array
 * @height: height of the array
 * Return: pointer to a 2 dimensional
 *  array of integers or NULL on failure
*/
int **alloc_grid(int width, int height)
{
	int i, j;

	if (width > 0 && height > 0)
	{
		int **arr = malloc(height * sizeof(int *));

		if (arr != NULL)
		{
			for (i = 0; i < height; i++) {
				if (arr[i] != NULL)
					arr[i] = malloc(width * sizeof(int));
					if (arr[i] == NULL)
						return (NULL);
				else
					return (NULL);
			}
			for (i = 0; i < height; i++)
			{
				for (j = 0; j < width; j++)
					arr[i][j] = 0;
			}
		} else
		{
			return (arr);
		}
	}
	return (NULL);
}
