#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table
 * @key: key to be found
 * Return: value or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *ret;
	unsigned long int i;

	if (!ht || !key || *key == '\0')
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	ret = ht->array[i];
	while (ret)
	{
		if (strcmp(ret->key, key) == 0)
			return (ret->value);
		ret = ret->next;
	}
	return (NULL);
}
