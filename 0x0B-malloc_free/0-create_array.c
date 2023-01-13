#include <stdlib.h>

/**
 * *create_array - dynamically allocate memory and create an array
 *
 * @size: size of array
 * @c: character
 *
 * Return: pointer to character or null if malloc fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = malloc(size * sizeof(char));

	if (size == 0 || arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	arr[i] = '\0';

	return (arr);
}
