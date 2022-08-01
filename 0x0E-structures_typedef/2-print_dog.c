#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - print struct dog
 *
 * @d : struct based on dog struct
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	if (d->age <= 0)
	{
		printf("Age: (nil)\n");
	}
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
	printf("Name: %s\nAge: %6f\nOwner: %s\n", d->name, d->age, d->owner);
}
