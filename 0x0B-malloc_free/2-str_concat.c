#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string
 * @s2: string
 * Return: the value
 */

char *str_concat(char *s1, char *s2)
{
	char *temp;
	int length, i = 0, k = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[k])
	{
		k++;
	}

	while (s2[j])
	{
		j++;
	}

	length = k + j;
	temp = malloc((sizeof(char) * length) + 1);

	if (temp == NULL)
		return (NULL);

	j = 0;

	while (i < length)
	{
		if (i <= k)
			temp[i] = s1[i];
		if (i >= k)
		{
			temp[i] = s2[j];
			j++;
		}
		i++;
	}

	temp[i] = '\0';
	return (temp);
}
