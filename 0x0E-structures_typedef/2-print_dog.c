#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * print_dog - entry point
 * @d: var
 * Return: nill
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name:(nill)");
	else
		printf("Name: %s\n", d->name);
	if (d->age <= 0)
		printf("Age:(nill)");
	else
		printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner:(nill)");
	else
		printf("Owner: %s\n", d->owner);
}
