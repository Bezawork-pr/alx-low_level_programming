#include "dog.h"
/**
 * init_dog - initalizes dog struct
 *
 * @d: struct defined based on dog struct
 *
 * @name: name
 *
 * @age: age
 *
 * @owner: owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
