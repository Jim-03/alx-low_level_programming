#include "main.h"

/**
 * flip_bits - finds number of bits needed to flip a number to another
 * @n: first number
 * @m: second number
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0, x = (n ^ m), count = 0;

	for (; x ; i++)
	{
		if (x & 1)
			count++;
	}

	x >>= 1;

	return (count);
}
