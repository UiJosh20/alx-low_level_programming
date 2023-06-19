#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * init_dog - initialize a variable
 * @d: dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = (char *)malloc((strlen(name) + 1) * sizeof(char));
	d->age = age;
	d->owner = (char *)malloc((strlen(owner) + 1) * sizeof(char));

	strcpy(d->name, name);
	d->age = age;
	strcpy(d->owner, owner);
}
