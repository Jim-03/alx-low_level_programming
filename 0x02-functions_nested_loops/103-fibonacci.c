#include<stdio.h>

/**
 * main - the main function
 * Return: always 0
 */

int main(void)
{
	int f1, f2, res, sum;

	f1 = 1;
	f2 = 2;
	sum = 2;
	while (res <= 4000000)
	{
		res = f1 + f2;
		if (res % 2 == 0)
		{
			sum = sum + res;
		}
		f1 = f2;
		f2 = res;
	}
	printf("%d\n", sum);
	return (0);
}
