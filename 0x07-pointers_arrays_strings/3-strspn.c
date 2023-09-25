#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the initial segment
 * @accept: bytes to exist for s
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int j = 0;
	int i;

	while (*s)
	{
		for (i = 0 ; accept[i] ; i++)
		{
			if (*s == accept[i])
			{
				j++;
				break;
			}
			else if (accept[i + 1] == '\0')
			return (j);
		}
		s++;
	}
	return (j);
}
