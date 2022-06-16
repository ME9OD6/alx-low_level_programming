#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - entry point
 * @name: string from main, name of pet
 * @age: number from main, age of pet
 * @owner: string from main, owner of pet
 * Return: p
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int len_name = 0, len_owner = 0, i;
	struct dog *new_dog;

	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
		return (NULL);

	for (; *(name + len_name); len_name++)
		;
	len_name++;

	for (; *(owner + len_owner); len_owner++)
		;
	len_owner++;

	new_dog->name = malloc(sizeof(char) * (len_name + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	for (i = 0; i < len_name; i++)
		*(new_dog->name + i) = name[i];

	new_dog->age = age;

	new_dog->owner = malloc(sizeof(char) * (len_owner + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i < len_owner; i++)
		*(new_dog->owner + i) = owner[i];

	return (new_dog);
}
