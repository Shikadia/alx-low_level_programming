#include "hash_tables.h"

/**
 * hash_table_get - Retrieve the value associated with a key in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to find.
 *
 * Return: On SUCCESS, returns the value associated with key in ht.
 *         On FAILURE, returns NULL to indicate key cannot be matched.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned long int index;

	if (!ht || !key || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	tmp = ht->array[index];
	while (tmp && strcmp(tmp->key, key) != 0)
		tmp = tmp->next;

	return ((tmp == NULL) ? NULL : tmp->value);
}
