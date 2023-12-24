#include "hash_tables.h"

/**
 * hash_table_print- prints the hash table
 * @ht: hash table to be printed
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	unsigned char c = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
		if (!ht->array[i])
		{
			if (c == 1)
				printf(", ");

			while (ht->array[i] != NULL)
			{
				printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
				ht->array[i] = ht->array[i]->next;
				if (!ht->array[i])
					printf(", ");
			}
			c = 1;
		}
	printf("}\n");
}
