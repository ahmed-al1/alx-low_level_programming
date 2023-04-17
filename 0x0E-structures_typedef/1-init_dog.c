#include "dog.h"

/**
 * init_dog - initializes fdga dog
 * @d: the dog to initfgdg
 * @name: the dog's namgfdgdfe
 * @age: dog's agegfdgd
 * @owner: owner's nagfdme
 *
 * Return: vogfdgid.
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
