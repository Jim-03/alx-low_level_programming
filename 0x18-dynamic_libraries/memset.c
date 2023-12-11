#include "main.h"

/**
 * _memset - fills bytes to a memory
 * @s: address to beginning memory location
 * @b: constant byte to fill
 * @n: bytes to fill the memory
 * Return: the pointer to memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *temp = s;
	int i = 0;

	while (temp[i] > 0)
	{
		temp[i] = b;
		n--;
		i++;
	}
	return (s);
}
