#include "dog.h"
#include <stdlib.h>

/**
 * *new_dog - create a new dog of return value dog_t
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);
	if (name)
		new_dog->name = name;
	else
		free(new_dog->name);
	new_dog->owner = owner;
	new_dog->age = age;

	return (new_dog);
}
