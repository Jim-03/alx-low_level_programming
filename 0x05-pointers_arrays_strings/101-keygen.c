#include<stdio.h>
#include<time.h>
#include<stdlib.h>

/**
 * main - generating passwords
 * Return: always 0
 */

int main(void)
{
	int password[100];
	int i, tot, x;

	tot = 0;
	srand(time(NULL));
	for (i = 0; i < 100 ; i++)
	{
		password[i] = rand() % 78;
		tot = tot + (password[i] + '0');
		putchar(password[i] + '0');
		if ((2772 - tot) - '0' < 78)
		{
			x = 2772 - tot - '0';
			tot = tot + x;
			putchar(x + '0');
			break;
		}
	}

	return (0);
}
