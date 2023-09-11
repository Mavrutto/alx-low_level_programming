#include <stdio.h>
#include "dog.h"
/**
 * init_dog - entry point
 * @d: varibale
 * @owner: owner
 * @age: age
 * @name: name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
