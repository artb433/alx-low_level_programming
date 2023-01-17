#ifndef DOG_H
#define DOG_H

/**
 * struct dog - details of dog
 *
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

/**
 * struct new_dog - create a new struct of type new_dog
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

typedef struct new_dog
{
	char *name;
	float age;
	char *owner;
} dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
