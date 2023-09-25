#include "main.h"

/**
 * set_string - dereferencing a pointer
 * @to: the value to be pointed
 * @s: pointer to be dereferenced
 * Return: the values gotten
 */

void set_string(char **s, char *to)
{
	*s = to;
}
