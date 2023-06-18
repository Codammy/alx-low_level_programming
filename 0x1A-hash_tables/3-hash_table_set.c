#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"
void handle_collision(hash_node_t *cur, hash_node_t *item);
/**
 * hash_table_set - adds an element to the hash table
 *
 * @ht: hash_table
 * @key: key
 * @value: value
 * Return: 1 if suceeded otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item;
	int hash;

	if (!ht)
		return (0);
	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
		return (0);
	item->key = malloc(strlen(key) + 1);
	if (item->key == NULL)
		return (0);
	item->value = malloc(strlen(value) + 1);
	if (item->value	== NULL)
		return (0);

	strcpy(item->key, key);
	strcpy(item->value, value);
	item->next = NULL;

	hash = key_index((unsigned char *)key, ht->size);
	if (ht->array[hash])
		handle_collision(ht->array[hash], item);
	else
		ht->array[hash] = item;

	return (1);
}

/**
 * handle_collision - handles collision and updates value if needed
 *
 * @cur: current node
 * @item: item
 * Return: void
 */
void handle_collision(hash_node_t *cur, hash_node_t *item)
{
hash_node_t *head = cur;
if (strcmp(cur->key, item->key) == 0)
	strcpy(item->value, cur->value);
else
{
	/* handle collisions */
	if ((*head).next == NULL)
		head = cur;
	else
	{
		item->next = head;
		head = item;
	}
}

}
