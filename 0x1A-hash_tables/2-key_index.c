#include "hash_tables.h"
/**
 * key_index - function that gives the index of a key using
 * djb2 hash function
 * @key: key which its index is needed
 * @size: size of the array of the hash table
 * Return: index which the key/value pair should be stored
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_index = 0;

	if (key != NULL && size != 0)
	{
		return (hash_index = hash_djb2(key) % size);
	}
	exit(1);
}
