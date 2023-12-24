#include "hash_tables.h"

/**
 * hash_table_set - add element to hash table
 * @ht: the hash table
 * @key: key to add
 * @value: the value
 * Return: 1 on success, 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *set;
	char *c;
	unsigned long int i;

	if (!ht || !key || *key == '\0' || !value)
		return (0);

	c = strdup(value);
	if (!c)
		return (0);

	for (i = key_index((const unsigned char *)key, ht->size); ht->array[i]; i++)
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = c;
			return (1);
		}
	set = malloc(sizeof(hash_node_t));
	if (!set)
	{
		free(c);
		return (0);
	}
	set->key = strdup(key);
	if (!set->key)
	{
		free(set);
		return (0);
	}
	set->value = c;
	set->next = ht->array[key_index((const unsigned char *)key, ht->size)];
	ht->array[key_index((const unsigned char *)key, ht->size)] = set;

	return (1);
}
