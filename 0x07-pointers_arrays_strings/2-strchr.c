#include <string.h>
#include <stdio.h>

/**
 * *_strchr - locate a character in a string
 *
 * @s: string to be searched
 * @c: character to be searched for
 *
 * Return: NULL if character is not found or return address of occurence
 */

char *_strchr(char *s, char c)
{
	int checker;
	int length;
	int i;

	char *ptr;
	char *retval;

	length = strlen(s);
	i = 0;

	while (i <= length)
	{
		if (s[i] == c)
		{
			checker = 10;
			ptr = &s[i];

			break;
		}

		i++;
	}

	if (checker == 10)
		retval = ptr;
	else
		retval = NULL;

	return (retval);
}
