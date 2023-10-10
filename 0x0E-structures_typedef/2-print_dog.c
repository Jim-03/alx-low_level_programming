#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: the dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL || d->age < 0 || d->owner == NULL)
		printf("nil");
	else
	{
		printf("Name: %s", d->name);
		printf("\nAge: %f", d->age);
		printf("\nOwner: %s\n", d->owner);
	}
}
