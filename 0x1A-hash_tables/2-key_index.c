#include "hash_tables.h"

/**
 * key_index - function that generates a distributed index
 * according to a given hash
 *
 * @key: key passed to be hash
 * @size: size of the hash tables
 * Return: key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_val = hash_djb2(key);

	if (key == NULL || size == 0)
		return (0);

	return (hash_djb2(key) % size);
}
