#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: string to be converted
 * Return: 0 or number
 */

int _atoi(char *s)
{
	int i, n, m, y, k, x;

	i = 0;
	n = 0;
	m = 0;
	y = 0,
	k = 0;
	x = 0;
	while (s[n] != '\0')
	{
		n++;
	}
	while (i < n && y == 0)
	{
		if (s[i] == '-')
			++m;
		if (s[i] >= '0' && s[i] <= '9')
		{
			x = s[i] - '0';
			if (m % 2)
			{
				x = -x;
			}
			k = k * 10 + x;
			y = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
			{
				break;
			}
			y = 0;
		}
		i++;
	}
	if (y == 0)
	{
		return (0);
	}
	return (k);
}
