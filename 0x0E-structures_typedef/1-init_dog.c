#include "dog.h"

/**
 * init_dog - initialize a variable type struct dog
 * @d: pointer to struct dog to be initialized
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
