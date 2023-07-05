#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_print - function that prints a hash table.
 *
 * @ht: hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *item, *temp;
	unsigned long int itr;

	printf("{");
	if (ht)
		for (itr = 0; itr < ht->size; itr++)
		{
			item = ht->array[itr];
			if (item)
			{
				printf("'%s': '%s'[%lu]", item->key, item->value, itr);
				temp = item->next;
				while (temp)
				{
					printf("'%s': '%s'", temp->key, temp->value);
					temp = temp->next;
					if (temp)
						printf(", ");

				}
				if (ht->array[itr + 1])
					printf(", ");
			}
		}
	printf("}\n");
}
