#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: for the dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* Check if the pointer to struct dog is not NULL */
	if (d != NULL)
	{
	/* Initialize the fields of the struct dog */
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
