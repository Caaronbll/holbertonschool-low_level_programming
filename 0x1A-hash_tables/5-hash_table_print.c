#include "hash_tables.h"

/**
 * hash_table_print - prints hash table
 * @ht: hash table
 * Return: printed table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	int flag = 1;
	unsigned long int i = 0;

	if (!ht)
		return;
	printf("{");

	for (i; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			if (flag == 0)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			flag = 0;
			current = current->next;
		}
	}
	printf("}\n");
}
