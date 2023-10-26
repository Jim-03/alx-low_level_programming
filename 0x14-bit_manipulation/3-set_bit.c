#include "main.h"

/**
 * set_bit - sets value of bit to 1
 * @n: the number
 * @index: position
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (index > 63)
		return (-1);

	x = (1 << index);

	*n |= x;
	return (1);
}
