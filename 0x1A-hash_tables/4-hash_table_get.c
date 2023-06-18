#include <stddef.h>
#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 *
 * @ht: hash_table
 * @key: key
 * Return: value associated with item/element else NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;
	hash_node_t *item;

	index = key_index((unsigned char *)key, ht->size);
	item = ht->array[index];
	if (!item)
		return (NULL);

	return (item->value);
}
