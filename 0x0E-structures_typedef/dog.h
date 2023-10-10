#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - adog struct
 * @age: age dog
 * @owner : dog owner
 * @name: dog name
 * Descsription: dog struct witn name, age and owner
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
