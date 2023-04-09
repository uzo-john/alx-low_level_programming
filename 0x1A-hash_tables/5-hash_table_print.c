#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: points the hash table
 * @key: key to find value
 *
 * Return: value associated with key, or NULL if key cannot be found
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	char *sep;

	if (ht == NULL)
		return;

	printf("{");
	sep = "";

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			printf("%s'%s': '%s'", sep, tmp->key, tmp->value);
			sep = ", ";
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
