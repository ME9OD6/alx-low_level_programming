#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initializing the dog structure
 * @d: pointer to d
 * @name: pointer to dog name
 * @age: dogs age
 * @owner: pointer to owners name
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
