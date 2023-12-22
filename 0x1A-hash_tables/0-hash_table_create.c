#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the array
 * Return: pointer to the table created
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (!table)
		return (NULL);

	table->array = malloc(sizeof(hash_node_t *) * size);
	if (!table->array)
	{
		free(table->array);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		table->array[i] = NULL;
	table->size = size;
	return (table);
}
