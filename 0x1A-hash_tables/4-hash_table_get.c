#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves the value associated with a key
 * from a hash table
 * @ht: hash table from which the value will be retrieved
 * @key: key linked to value
 * Return: value associated with the key else Null
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	unsigned long int index;

	if (ht != NULL)
	{
		index = key_index((const unsigned char *) key, ht->size);
		current = (ht->array)[index];
		while (current)
		{
			if (strcmp(current->key, key) == 0)
			{
				return (current->value);
			}
			current = current->next;
		}
	}
	return (NULL);
}
