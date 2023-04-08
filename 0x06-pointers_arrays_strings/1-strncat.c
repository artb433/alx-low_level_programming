#include <string.h>

/**
 * *_strncat - concatenate strings
 * @dest: destination string
 * @src: source string
 * @n: additional variable
 *
 * Return: return concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *result = strncat(dest, src, n);

	return (result);
}
