#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer to store result
 * @size_r: buffer size
 * Return: returns pointer to result or 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;
	int sum = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	int b = i - 1;
	int a = 0;

	while (n1[j])
		j++;

	while (n2[k])
		k++;

	if (j + 1 > size_r || k + 1 > size_r)
		return 0;

	while (j > 0 || k > 0 || carry)
	{

		int sumA = (j > 0) ? n1[j - 1] - '0' : 0;
		int sumB = (k > 0) ? n2[k - 1] - '0' : 0;

		sum = sumA + sumB + carry;
		carry = sum / 10;
		r[i] = (sum % 10) + '0';
		i++;

		if (j > 0)
			j--;

		if (k > 0)
			k--;
	}

	r[i] = '\0';

	while (a < b)
	{
		char temp = r[a];

		r[a] = r[b];
		r[b] = temp;
		a++;
		b--;
	}

	return (r);
}

