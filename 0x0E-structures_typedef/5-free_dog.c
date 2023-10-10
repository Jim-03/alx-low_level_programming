#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees d memory
 * @d: the structure
 */

void free_dog(dog_t *d)
{
	free(d->owner);
	free(d->name);
	free(d);
}
