#include "main.h"

/**
 * _pow_recursion - finds the power of an integer
 * @x: the integer
 * @y: the power
 * Return: the powered integer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else if (y == 1)
		return (1);
	return (1);
}
