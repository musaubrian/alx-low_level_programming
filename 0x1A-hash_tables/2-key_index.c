#include "hash_tables.h"

/**
 * key_index - gets index of a key
 *
 * @key: key to get index of
 * @size: size of array of hash table
 *
 * Return: Index where the key-value pair is to be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
