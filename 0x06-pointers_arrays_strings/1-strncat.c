#include "main.h"

/**
 * _strncat - concanates two strings
 * @n: number of bytes from src
 * @dest: string to be concanated
 * @src: concanator
 * Return: the pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;

	while (*temp)
		temp++;

	while (*src && n > 0)
	{
		*temp = *src;
		temp++;
		src++;
		n--;
	}
	*temp = '\0';
	return (dest);
}
