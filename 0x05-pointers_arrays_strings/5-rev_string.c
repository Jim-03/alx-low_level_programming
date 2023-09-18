#include "main.h"

/**
 * rev_string - reverses the string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int n, i;
	char new = s[0];

	n = 0;
	while (s[n] != '\n')
		n++;
	for (i = 0 ; i < n ; i++)
	{
		n--;
		new = s[i];
		s[i] = s[n];
		s[n] = new;
	}

}
