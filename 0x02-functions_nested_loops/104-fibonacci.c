#include<stdio.h>

/**
 * main - the main function
 * Return: alway 0
 */

int main(void)
{
	unsigned long int f1, f2, res, i;

	f1 = 1;
	f2 = 2;
	printf("%lu, ", f1);
	for (i = 0 ; i < 98 ; i++)
	{
		res = f1 + f2;
		if (i == 97)
		{
			printf("%lu", f2);
		}
		else
		{
			printf("%lu, ", f2);
		}
		f1 = f2;
		f2 = res;
	}
	return (0);
}
