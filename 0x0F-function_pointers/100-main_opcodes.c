#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function.
 * @argc: number of arguments
 * @argv: array of argc
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *a;
	int b, i;

	if (argc != 2)
	{
		printf("Error");
		printf("\n");
		exit(1);
	}

	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("Error");
		printf("\n");
		exit(2);
	}

	a = (char *)main;

	for (i = 0; i < b; i++)
	{
		if (i == b - 1)
		{
			printf("%02hhx\n", a[i]);
			break;
		}
		printf("%02hhx ", a[i]);
	}
	return (0);
}
