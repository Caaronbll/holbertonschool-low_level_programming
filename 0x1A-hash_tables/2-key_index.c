#include "hash_tables.h"

/**
 * key_index - gives us the index of a key
 * @key: index key
 * @size: size of array
 * Return: an index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int get_idx;

	get_idx = hash_djb2(key);
	return (get_idx % size);
}
