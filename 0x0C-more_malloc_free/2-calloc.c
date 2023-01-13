#include <stdlib.h>

/**
 * *_calloc - allocate memory and initialize values to 0
 *
 * @nmemb: number of elements of size (size) to be allocated
 * @size: size of individual elements
 *
 * Return: pointer to allocated memory or NULL on failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		exit((long int)NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		ptr[i] = 0;

	return (ptr);
}
