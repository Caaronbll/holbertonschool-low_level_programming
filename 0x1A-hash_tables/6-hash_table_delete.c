#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 * Return: more memory
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node = NULL, *temp = NULL;

	if (ht && ht->size && ht->array)
	{
		for (i = 0; i < ht->size; ++i)
		{
			node = ht->array[i];

			if (node)
			{
				if (node->next)
				{
					node = node->next;
					while (node)
					{
						temp = node;
						node = node->next;
						free(temp->key);
						free(temp->value);
						free(temp);
					}
				}

				node = ht->array[i];
				if (node->key && node->value)
				{
					free(node->key);
					free(node->value);
				}
			}
			free(node);
		}
		free(ht->array);
		free(ht);
	}
}
