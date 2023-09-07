#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: the hash table to be printed
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	int i = 0, count = 0;

	if (ht == NULL)
	{
		return;
	}
	while (i < (int)ht->size)
	{
		if (ht->array[i] != NULL)
		{
			tmp = ht->array[i];
			while (tmp != NULL)
			{
				if (count == 0)
				{
					printf("'%s': %s", tmp->key, tmp->value);
					count++;
				}
				else
					printf(", '%s': '%s'", tmp->key, tmp->value);
				tmp = tmp->next;
			}
		}
		i++;
	}
	printf("\n");

}
