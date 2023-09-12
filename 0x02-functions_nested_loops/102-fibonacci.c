#include<stdio.h>

/**
 * main - the main function
 * Return: alway 0
 */

int main(void)
{
	unsigned long int f1, f2, res;
	int i;

	f1 = 1;
	f2 = 2;
	printf("%d, ", f1);
	for (i = 0 ; i <= 50 ; i++)
	{
		printf("%d, ", f2);
		res = f1 + f2;
		f1 = f2;
		f2 = res;
	}
	printf("\n");
	return (0);
}
