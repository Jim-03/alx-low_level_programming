#include<stdio.h>

/**
 * main - main function
 *
 * Return: 0
 */

int main(void)
{
	int a;
	char j;

	for (a = 0 ; a < 10 ; a++)
		putchar(a + '0');
	for (j = 'a' ; j <= 'f' ; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
