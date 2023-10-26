#include "main.h"

/**
 * get_bit - returns value of a bit at a given index
 * @n: the number
 * @index: position
 * Return: the value or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int x, val;
	unsigned int i;

	if (index > 63)
		return (-1);

	i = (1 << index);
	val = n & i;
	x = (val ? 1 : 0);

	return (x);
}
