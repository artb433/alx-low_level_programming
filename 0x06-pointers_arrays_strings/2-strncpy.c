#include <string.h>

/**
 * *_strncpy - copy strings
 * @dest: destination string
 * @src: source string
 * @n: other variable
 *
 * Return: return pointer holding result
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *result = strncpy(dest, src, n);

	return (result);
}
