#include <string.h>
#include <stdio.h>

/**
 * *_strstr - find the needle in the haystack
 *
 * @haystack: where to search
 * @needle: what to search for
 *
 * Return: return pointer to first occurence
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
