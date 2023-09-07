#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: size of the array
 * Return: Pointer to the newly created hash table, or NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	/* Allocate memory for the hash table */
	hash_table_t *ht = (hash_table_t *)malloc(sizeof(hash_table_t));
	unsigned long int i = 0;

	/* Check if memory allocation was successful or if the size is invalid */
	if (size < 1 || ht == NULL)
	{
		free(ht);
		return (NULL);
	}

	/* Initialize the size of the hash table */
	ht->size = size;

	/* Allocate memory for the array of hash nodes */
	ht->array = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);

	/* Check if memory allocation for the array was successful */
	if (ht->array == NULL)
	{
		free(ht->array);
		free(ht);
		return (NULL);
	}

	/* Initialize all elements of the array to NULL */
	while (i < size)
	{
		(ht->array)[i] = NULL;
		i++;
	}

	/* Return a pointer to the newly created hash table */
	return (ht);
}
