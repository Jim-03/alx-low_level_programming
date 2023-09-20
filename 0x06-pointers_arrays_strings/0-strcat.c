#include "main.h"

/**
 * _strcat - concanates two strings
 * @dest: string to be concanate
 * @src: concanator
 * Return: returns the concanated string
 */

char *_strcat(char *dest, char *src)
{
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (dest);
}
