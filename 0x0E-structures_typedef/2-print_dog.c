#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints the struct of a dog
 * @d: dog structure
 * Return: dog structure
 */

void print_dog(struct dog *d)
{
	if (!d)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	if (d->age != d->age)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
