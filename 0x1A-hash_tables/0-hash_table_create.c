#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 *
 * @size: size in number of nodes
 *
 * Return: a pointer tio the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table;
	hash_node_t *array;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		return (NULL);
	}
	table->size = size;
	table->array = array;

	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		array[i] = NULL;

	return (table);
}
