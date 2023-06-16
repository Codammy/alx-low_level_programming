#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - Function that creates a hash table.
 *
 * @size: size of the array
 * Return: pointer to table or null if failed.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);
	table->array = malloc(size * sizeof(hash_node_t *));
	if (!table->array)
		return (NULL);
	table->size = size;

	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	return (table);
}
