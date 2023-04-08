#include <string.h>

/**
 * *_strcat - concatenate characters
 * @dest: destination character
 * @src: source character
 *
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	char *result = strcat(dest, src);

	return (result);
}
