#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check - checks if value is a digit
 * @str: the array
 * Return: result
 */

int check(char *str)
{
	unsigned int c;

	c = 0;
	while (c < strlen(str))
	{
		if (!isdigit(str[c]))
		{
			return (0);
		}
		c++;
	}
	return (1);
}

/**
 * main - adds positive numbers
 * @argc: the number
 * @argv: array of the arguments
 * Return: the result
 */

int main(int argc, char *argv[])
{
	int c, sri;
	int sum = 0;

	c = 1;
	while (c < argc)
	{
		if (check(argv[c]))
		{
			sri = atoi(argv[c]);
			sum = sum + sri;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		c++;
	}
	printf("%d\n", sum);
	return (0);
}
