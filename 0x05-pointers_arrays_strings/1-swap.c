#include "main.h"

/**
 * swap_int - swapper
 * @a: integer to swap with b
 * @b: integer to swap with a
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
