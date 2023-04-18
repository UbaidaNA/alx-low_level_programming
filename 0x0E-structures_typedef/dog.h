#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a struct
 * @name: initializes dog name
 * @age: initializes dog age
 * @owner: initializes dog owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
