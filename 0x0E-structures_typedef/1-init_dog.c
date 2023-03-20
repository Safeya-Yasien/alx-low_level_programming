#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * inti_dog - information about popy
 * @d: pointer to the allocation memory of members
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: no thing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
       	d = malloc(sizeof(struct dog));
	if (d == NULL)
	{
		return;
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
	return; 
}
