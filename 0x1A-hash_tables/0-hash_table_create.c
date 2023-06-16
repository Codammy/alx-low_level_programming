#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - Function that creates a hash table.
 *
 * @size:  size of the array
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t* table;
	
	table = malloc(sizeof(hash_table_t));
	if (!table)
		return NULL;
	table->array = malloc(sizeof(hash_node_t) * size);
	if (!table->array)
		return NULL;
	table->size = size;

	return table;
}
