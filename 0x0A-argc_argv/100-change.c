#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins
 * @argc: argument number
 * @argv: array of argc
 * Return: result
 */

int main(int argc, char *argv[])
{
	int num, i;
	int ans = 0;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0 ; i < 5 && num >= 0 ; i++)
	{
		while (num <= cents[i])
		{
			ans++;
			num = num - cents[i];
		}
	}
	printf("%d\n", ans);
	return (0);
}
