#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * print_dog - displays dog fields
 * @d: this dog.
 *
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		;
	else
	{
		/* Use ternary operators to print both binary cases */
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("Age: %f\n", (d->age) ? d->age : 0);
		printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}

