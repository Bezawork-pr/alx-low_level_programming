#include "dog.h"
#include <stdlib.h>
/**
 * lencount - counts len
 *
 * @s: takes string
 *
 * Return: length os string
 */
int lencount(char *s)
{
	int i, count;

	i = count = 0;
	for (; s[i] != '\0'; i++)
	{
		count++;
	}
	count++;
	return (count);
}
/**
 * copystring - copies string
 *
 * @dest: to be copied to
 *
 * @src: to be copied from
 *
 * Return: copy
 */
char *copystring(char *dest, char *src)
{
	int i = 0;

	for (; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog - creates new dog
 *
 * @name: name
 *
 * @age: age
 *
 * @owner: owner
 *
 * Return: void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	char *copy_name;
	char *copy_owner;

	if ((name == NULL) || (age < 0) || (owner == NULL))
	{
		return (NULL);
	}
	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		return (NULL);
	}
	copy_name = malloc(sizeof(name) * lencount(name));
	if (copy_name == NULL)
	{
		return (NULL);
	}
	copy_name = copystring(copy_name, name);
	copy_owner = malloc(sizeof(owner) * lencount(owner));
	if (copy_owner == NULL)
	{
		return (NULL);
	}
	copy_owner = copystring(copy_owner, owner);
	newdog->name = copy_name;
	newdog->age = age;
	newdog->owner = copy_owner;
	return (newdog);
}
