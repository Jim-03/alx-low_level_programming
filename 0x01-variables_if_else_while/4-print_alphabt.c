#include<stdio.h>

/**
 * main - start of code
 *
 * Return: 0
 */

int main(void)
{
	char m;

	for (m = 'a' ; m <= 'z' ; m++)
	{
		if (m == 'q' && m == 'e')
		{
			putchar(m);
		}
	}
	return (0);
}
