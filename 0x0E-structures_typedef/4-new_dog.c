#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: newdog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *name_copy, *owner_copy;
	unsigned int i;

	dog_t *newdog = malloc(sizeof(*newdog));

	name_copy = malloc((strlen(name) + 1) * sizeof(*name_copy));
	owner_copy = malloc((strlen(owner) + 1) * sizeof(*owner_copy));

	if (!newdog)
	{
		free(newdog);
		return (NULL);
	}

	if (!name || age != age || !owner)
	{
		free(newdog);
		return (NULL);
	}

	if (!name_copy || !owner_copy)
	{
		free(name_copy);
		free(owner_copy);
		free(newdog);
		return (NULL);
	}

	for (i = 0; i < strlen(name); i++)
		name_copy[i] = name[i];
	name_copy[i] = '\0';
	for (i = 0; i < strlen(owner); i++)
		owner_copy[i] = owner[i];
	owner_copy[i] = '\0';
	newdog->name = name_copy;
	newdog->age = age;
	newdog->owner = owner_copy;

	return (newdog);
}
