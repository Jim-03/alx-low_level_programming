#include "main.h"

/**
 * prime_number - helper function
 * @n: the number
 * @j: guessing value
 * Return: the result
 */

int prime_number(int n, int j)
{
	if (j == 1)
		return (1);
	if (n % j == 0 && j > 0)
		return (0);
	return (prime_number(n, j - 1));
}

/**
 * is_prime_number - finds if number is prime
 * @n: the number
 * Return: the resulting value
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_number(n, n - 1));
}
