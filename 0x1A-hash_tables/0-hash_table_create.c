#include "hash_tables.h"
/**
 * hash_table_create - creates a new hash_table.
 * @size: Size of the array
 *
 * Return: pointer to created hash_table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;
	unsigned long int idx;

	hash = malloc(sizeof(hash_table_t));
	if (hash == NULL)
		return (NULL);
	hash->size = size;
	hash->array = malloc(sizeof(hash_node_t *) * size);

	if (hash->array == NULL)
		return (NULL);
	for (idx = 0; idx < size; ++idx)
		hash->array[idx] = NULL;

	return (hash);
}
