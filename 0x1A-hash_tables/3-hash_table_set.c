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
void handle_collision(hash_node_t *item, hash_node_t *head, hash_node_t *cur_item, const char* key, const char *value);
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item, *cur_item, *head;
	int hash_value;

	if (!(item = malloc(sizeof(hash_node_t))))
		return (0);
	if (!(item->key = malloc(strlen(key) + 1)))
		return (0);
	if (!(item->value = malloc(strlen(value) + 1)))
		return (0);

	strcpy(item->key, key);
	strcpy(item->value, value);
	item->next = NULL;
	if (item->next == NULL)
		head = item->next;

	hash_value = key_index((unsigned char *)key, ht->size);
	if (ht->array[hash_value])
		handle_collision(item, key, value);
	else
	{
		ht->array[hash_value] = item;
	}
	return (1);
}
void handle_collision(hash_node_t *item, hash_node_t *head, hash_node_t *cur_item, const char *key, const char *value)
{
if (strcmp(cur_item->key, item->key) == 0)
	strcpy(item->key, cur_item->value);
else
{
/* handle collisions */
if (head == NULL)
head->next = item->next;
else
{
item->next->next = head;
head = item->next;
}
}

}
