#include "main.h"

/**
 * _isupper - checks casing
 * @c: variable to be checked
 * Return: 1 or 0 depending on casing
 */

int _isupper(int c)
{
	char i;

	for (i = 'A' ; i <= 'Z' ; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
