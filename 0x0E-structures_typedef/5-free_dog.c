#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - free allowcated memory
 * @d: pointer to the allocated memory
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
