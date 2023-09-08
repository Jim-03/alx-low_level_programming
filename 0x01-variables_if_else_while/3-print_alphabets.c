#include<stdio.h>

/**
 * main - start of code
 *
 * Return: 0
 */

int main(void)
{
	char f;

	for (f = 'a' ; f <= 'z' ; f++)
	{
		putchar(f);
	}
	for (f = 'A' ; f <= 'Z' ; f++)
	{
		putchar(f);
	}
	putchar('\n');
	return (0);
}
