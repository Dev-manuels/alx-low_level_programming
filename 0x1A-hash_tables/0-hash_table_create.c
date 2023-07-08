#include "hash_tables.h"
/**
 * hash_table_create -function that creates a hash table
 * @size: size of the array
 * Return: Null on failure else new has table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = (hash_table_t *) malloc(sizeof(hash_table_t));
	unsigned long int i = 0;

	if (size < 1 || ht == NULL)
	{
		free(ht);
		return (NULL);
	}
	ht->size = size;
	ht->array = (hash_node_t **) malloc(sizeof(hash_node_t) * size);
	if (ht->array == NULL)
	{
		free(ht->array);
		free(ht);
		return (NULL);
	}
	while (i < size)
	{
		(ht->array)[i] = NULL;
		i++;
	}
	return (ht);
}
