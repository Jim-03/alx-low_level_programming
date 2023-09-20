#include "main.h"

/**
 * string_toupper - changes any lower case to upper case
 * @str: string to be changed
 * Return: the modified string
 */

char *string_toupper(char *str)
{
	char i = 'a';
	char k = 'z';
	char *temp = str;

	while (*temp != '\0')
	{
		if (*temp >= i && *temp <= k)
			*temp -= 32;
		temp++;
	}
	return (str);
}
