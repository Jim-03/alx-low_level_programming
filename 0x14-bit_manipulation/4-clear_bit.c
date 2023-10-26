#include "main.h"

/**
 * clear_bit - sets the value of bit to 0
 * @n: the bit
 * @index: the position
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	i = 1 << index;

	*n &= i;

	return (1);
}
