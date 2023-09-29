#include "main.h"

/**
 * _strpbrk - searches for a string for any set of bytes
 * @s: string to search
 * @accept: string to be searched
 * Return: the pointer to first occurence
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	for (i = 0 ; accept[i] ; i++)
	{
		if (*s == accept[i])
		{
			return (s);
		}
		s++;
	}
	return (0);
}
