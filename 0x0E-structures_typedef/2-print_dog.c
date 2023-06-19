#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * print_dog - prints a struct variable
 * @d: variable
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %.1f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
