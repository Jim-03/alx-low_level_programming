#include "main.h"

/**
 *print_last_digit - outputs last digit
 *@k: the digits
 *Return: the last digit
 */

int print_last_digit(int k)
{
	int m;

	m = k % 10;
	if (k < 0)
		m = -m;
	_putchar (m + '0');
	return (m);

}
