#include "main.h"

/**
 * leet - used to encode to 1337
 * @str: string to be encoded
 * Return: returns the encoded string
 */

char *leet(char *str)
{
	int i, j;
	char *temp = str;
	char leM1[] = {"aAeEoOtTlL"};
	char leM2[] = {"4433007711"};

	for (i = 0; temp[i] != '\0' ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			if (temp[i] == leM1[j])
				temp[i] = leM2[j];
		}
	}
	return (str);
}
