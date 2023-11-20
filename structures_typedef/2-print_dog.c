#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - printlogs.
 * @d: structdog.
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("nothing");
	printf("%s: %s\n", "Name", d->name == NULL ? "(nil)" : d->name);
	printf("Age: %f\n", d->age);
	printf("%s: %s\n", "Owner", d->owner == NULL ? "(nil)" : d->owner);
}
