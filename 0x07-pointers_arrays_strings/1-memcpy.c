#include "main.h"

/**
 * _memcpy - copies memory area
 * @src: memory ot be copied
 * @dest: memory copied
 * @n: number of bytes to be copied
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (*src > 0)
	{
		dest[i] = src[i];
		n--;
		i++;
	}
	return (dest);
}
