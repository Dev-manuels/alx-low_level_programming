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

	if (ht != NULL && key != NULL && value != NULL)
	{
		index = key_index((const unsigned char *) key, ht->size);
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
 * Return: 1 on success else 0
*/
int add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new;
	int status = 0;

	if (head != NULL)
	{
		status = valid_node(head, key, value);
		if (status == 0)
		{
			new = malloc(sizeof(hash_node_t));
			if (new != NULL)
			{
				new->key = (char *) key;
				new->value = strdup(value);
				new->next = *head;
				*head = new;
				status = 1;
			} else
			{
				free(new);
				status = 0;
			}
		}
		if (status == 2)
			status = 1;
	}
	return (status);
}

/**
 * valid_node - function to checks if the same key/value pair exist
 * and updates it
 * @head: pointer to key hash index of the hash table
 * @key: key to the value to be updated
 * @value: new value
 * Return: 1 if yes else 0
*/
int valid_node(hash_node_t **head, const char *key, const char *value)
{
	int status = 0;
	hash_node_t *current;

	if (head != NULL)
	{
		current = *head;
		while (current)
		{
			if (strcmp(current->key, key) == 0)
			{
				status = 2;
				if (strcmp(current->value, value) != 0)
				{
					free(current->value);
					current->value = strdup(value);
					status = 1;
				}
				break;
			}
			current = current->next;
		}
	}
	return (status);
}
