#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concanates two strings
 * @s1: the first string
 * @s2: second string
 * @n: number of bytes from s2
 * Return: pointer or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *temp;
	unsigned int i, j;
	unsigned int n1 = 0, n2 = 0, length;

	if (s1 == NULL)
	{
		s1 ="";
	}
	else
		while (*s1 != '\0')
			n1++;

	if (s2 == NULL)
		s2 = "";
	else
		while (*s2 != '\0')
			n2++;

	length = n1 + n2;
	temp = malloc(sizeof(char) * (length) + 1);

	if (temp == NULL)
		return (NULL);

	for (i = 0; i < n1 ; i++)
	{
		temp[i] = s1[i];
	}

	j = i;

	if (n < (n2))
	{
		for (; j < n ; j++)
			temp[j] = s2[j];
	}
	else
	{
		while (*s2 != '\0')
		{
			temp[j] = s2[j];
			j++;
			s2++;
		}
	}

	temp[j] = '\0';
	return (temp);
}
