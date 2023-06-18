#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 *
 * @ht: hash_table
 * @key: key
 * @value: value
 * Return: 1 if suceeded otherwise 0
 */
void handle_collision(hash_node_t *cur, hash_node_t *item, hash_node_t *head);
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item, *head;
	int hash;

	if ((item = malloc(sizeof(hash_node_t)) == NULL))
		return (0);
	if ((item->key = malloc(strlen(key) + 1) == NULL))
		return (0);
	if ((item->value = malloc(strlen(value) + 1) ==NULL))
		return (0);

	strcpy(item->key, key);
	strcpy(item->value, value);
	item->next = NULL;
	if (item->next == NULL)
		head = item->next;

	hash = key_index((unsigned char *)key, ht->size);
	if (ht->array[hash])
		handle_collision(ht->array[hash], item, head);
	else
	{
		ht->array[hash] = item;
	}
	return (1);
}
/**
 * handle_collision - handles collision and updates value if needed
 *
 * @cur: current node
 * @item: item
 * @head: head_node
 * Return: void
 */
void handle_collision(hash_node_t *cur, hash_node_t *item, hash_node_t *head)
{
if (strcmp(cur->key, item->key) == 0)
	strcpy(item->key, cur->value);
else
{
	/* handle collisions */
	if (head == NULL)
		head = item;
	else
	{
		item->next = head;
		head = item;
	}
}

}
