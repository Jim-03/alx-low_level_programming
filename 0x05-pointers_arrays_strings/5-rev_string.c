#include "main.h"

/**
 * rev_string - reverses the string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	char new;
	int n, i;

	new = s[0];
	n = 0;
	while (s[n] != '\0')
		n++;
	for (i = 0 ; i < n ; i++)
	{
		n--;
		new = s[i];
		s[i] = s[n];
		s[n] = new;
	}

}
