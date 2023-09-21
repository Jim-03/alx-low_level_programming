#include "main.h"

/**
 * cap_string - capitalizes the words
 * @str: string to be capitalized
 * Return: the modified string
 */

char *cap_string(char *str)
{
	int i;
	char *temp = str;

	for (i = 0 ; temp[i] != '\0' ; i++)
	{
		if (temp[i - 1] == ' ' || temp[i - 1] == '\t' || temp[i - 1] == '\n' ||
			temp[i - 1] == ',' || temp[i - 1] == ';' || temp[i - 1] == '.' ||
			temp[i - 1] == '!' || temp[i - 1] == '?' || temp[i - 1] == '"' ||
			temp[i - 1] == '(' || temp[i - 1] == ')' || temp[i - 1] == '{' ||
			temp[i - 1] == '}')
		{
			if (temp[i] >= 'a' && temp[i] <= 'z')
				temp[i] -= 32;
		}
	}
	if (temp[0] >= 'a' && temp[0] <= 'z')
		temp[0] -= 32;
	return (str);
}
