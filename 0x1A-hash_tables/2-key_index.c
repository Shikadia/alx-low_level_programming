#include "hash_tables.h"

/**
 * key_index - Impements the djb2 algorithm to get the index at which a
 *			   key/value pair should be stored in array of a hash table.
 * @key: The key to get the index of.
 * @size: The size of the array of the hash table.
 *
 * Return: The index of the key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int key_idx;

	if (!size || !key)
		return (0);

	key_idx = hash_djb2(key);
	return (key_idx % size);
}
