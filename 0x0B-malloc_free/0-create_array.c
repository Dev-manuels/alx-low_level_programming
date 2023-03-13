#include "main.h"
/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 * @c: char to be contained in the array.
 * @size: size of array to be initialized.
* Return: A pointer to the array, or NULL if it fails or size = 0.
*/
char *create_array(unsigned int size, char c)
{
	if (size != 0)
	{
		char *s = malloc(size);

		if (s != NULL)
		{
			unsigned int i;

			for (i = 0; i < size; i++)
			{
				s[i] = c;
			}
		} else
		{
			s = NULL;
		}
		return (s);
	} else
	{
		return (NULL);
	}
}
