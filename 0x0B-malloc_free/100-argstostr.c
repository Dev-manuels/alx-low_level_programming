#include "main.h"
/**
 * argstostr -  function that concatenates all the
 * arguments to the program.
 * @ac: number of argument.
 * @av: array of argument.
 * Return: pointer to a new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	if (ac > 0 && av != NULL)
	{
		int i, j, k, size;
		char *s;

		i = 0;
		size = 0;
		while (i < ac)
		{
			size += strlen(av[i]) + 1;
			i++;
		}
		s = malloc((sizeof(char) * size) + 1);
		if (s != NULL)
		{
			j = 0;
			for (i = 0; i < ac; i++)
			{
				k = 0;
				size = strlen(av[i]);
				while (k < size)
				{
					s[j] = av[i][k];
					j++;
					k++;
				}
				s[j] = '\n';
				j++;
			}
			s[j] = '\0';

		}
		return (s);

	}
	return (NULL);
}
