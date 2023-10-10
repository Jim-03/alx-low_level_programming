#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes variable
 * @d: the structure
 * @name: first member
 * @age: second member
 * @owner: last member
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
