#include <string.h>

/**
 * *_strcpy - copy strings
 * @dest: destination of string
 * @src: source of string
 * Return: return pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *copied = strcpy(dest, src);

	return (copied);
}
