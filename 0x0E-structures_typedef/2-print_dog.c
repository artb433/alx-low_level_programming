#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print a struct dog
 *
 * @d: pointer to struct
 */

void print_dog(struct dog *d)
{
	char *name = "(nil)";
	char *owner = "(nil)";

	if (d != NULL)
	{
		d->name != NULL ? name = d->name : name;
		d->owner != NULL ? owner = d->owner : owner;

		printf("Name: %s\nAge: %f\nOwner: %s\n", name, d->age, owner);
	}
}
