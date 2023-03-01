#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>

typedef struct dog dog_t;
/* prototypes */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

/**
 * struct dog - structure for a dog containing the name, age and owner
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;

};

#endif
