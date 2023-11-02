#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *current;
	int i = 0;

	if (ht == NULL)
		return;

	while (i < (int)ht->size)
	{
		if (ht->array[i] != NULL)
		{
			current = ht->array[i];
			while (current != NULL)
			{
				tmp = current->next;
				free(current->key);
				free(current->value);
				free(current);
				current = NULL;
				current = tmp;
			}
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
