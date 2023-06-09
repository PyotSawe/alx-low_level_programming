#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - Initializes a dog structure
 * @d: this dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* Only initialize when not null */
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
