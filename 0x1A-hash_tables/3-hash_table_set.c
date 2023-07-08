#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to a hash table
 * @ht: hash table to which element should be added
 * @key: key to value
 * @value: values linked to key
 * Return: 1 on success else 0
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index = 0, status = 0;

	if (key != NULL && value != NULL)
	{
		index = key_index(key, ht->size);
		status = add_node(&((ht->array)[index]), key, value);
	}
	return (status);
}

/**
 * add_node - function that adds a new node at start
 * of a hash node linked list
 * @head: pointer to key hash index of the hash table
 * @key: key to value
 * @value: values linked to key
 * Return: pointer to new node
*/
int add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new = malloc(sizeof(hash_node_t));
	int status = 0;

	if (head != NULL)
	{
		if (new != NULL)
		{
			new->key = key;
			new->value = value;
			new->next = *head;
			*head = new;
			status = 1;
		}
	}
	return (status);
}
