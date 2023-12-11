#include "main.h"

/**
 * _strstr - locates a substring
 * @needle: substring to search
 * @haystack: string to be seaeched
 * Return: returns first occurence of substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		for (i = 0 ; *needle ; i++)
		{
			if (needle[i] == haystack[i])
				return (&needle[i]);
		}
	}
	return ('\0');
}
