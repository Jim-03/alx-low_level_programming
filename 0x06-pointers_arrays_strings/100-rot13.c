#include "main.h"

/**
 * rot13 - encodes the character to the next 13th character
 * @str: string to be encoded
 * Return: returns the pointer to the string
 */

char *rot13(char *str)
{
	char *temp = str;
	int i;

	for (i = 0 ; temp[i] != '\0' ; i++)
	{
		if (temp[i] >= 'a' && temp[i] <= 'z') 
		{
			temp[i] = (((temp[i] - 'a' + 13) % 26) + 'a');
		}
		else
		{
			temp[i] = (((temp[i] - 'A' + 13) % 26) + 'A');
		}
	}
	return (str);
}
