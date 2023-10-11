#include "dog.h"

/**
 * init_dog - init a dog's info
 * @d: the dog to init
 * @name: name of dog
 * @age: age of it
 * @owner: owner's name
 *
 * Return: void
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
