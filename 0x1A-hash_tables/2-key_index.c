#include "hash_tables.h"

/**
 * key_index - function to get the index of a key
 * @key: the key to be searched for
 * @size: size of array of hash table
 * Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int ans;

	ans = hash_djb2(key) % size;
	return (ans);
}
