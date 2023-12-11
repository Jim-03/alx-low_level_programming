#include "main.h"

/**
 *_islower - checks casing
 *@c: checked for casing
 *Return: either 1 or 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
