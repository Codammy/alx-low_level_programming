#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

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
	hash_node_t *item, *cur_item, *head;
	int hash_value;

	if (!(item= malloc(sizeof(hash_node_t))))
		return (0);
	if (!(item->key = malloc(strlen(key) + 1)))
		return (0);
	if (!(item->value = malloc(strlen(value) + 1)))
		return (0);

	strcpy(item->key, key);
	strcpy(item->value, value);
	item->next = NULL;
	head = item->next;

	hash_value = key_index((unsigned char *)key, ht->size);
	cur_item = ht->array[hash_value];

	if (cur_item != NULL)
	{
		if (strcmp(cur_item->key, item->key) == 0)
			strcpy(item->key, cur_item->value);
		else
		{
			/* handle collisions */
			item->next = malloc(sizeof(hash_node_t));
			item->next->key = strcpy(item->next->key, key);
			item->next->value = strcpy(item->next->value, value);
			item->next->next = NULL;

			if (head == NULL)
				head->next = item->next;
			else
			{
				item->next->next = head;
				head = item->next;
			}
		}
	}
	else
	{
		ht->array[hash_value] = item;
	}
	return 1;
}
