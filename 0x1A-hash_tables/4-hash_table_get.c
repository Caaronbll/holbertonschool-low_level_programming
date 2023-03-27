#include "hash_tables.h"

/**
 * hash_table_get - gets a value
 * @ht: hash table
 * @key: key
 * Return: value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (strcmp(key, "") == 0 || key == NULL || ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	if (!current)
		return (NULL);
	while (strcmp(current->key, key) && current != NULL)
	{
		current = current->next;
	}
	if (!current)
		return (NULL);
	else
		return (current->value);
}
