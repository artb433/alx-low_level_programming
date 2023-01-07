#include <string.h>
#include <stdio.h>

/**
 * *_strpbrk - find the first occurence of string characters
 *
 * @s: source string
 * @accept: string of characters to search for
 *
 * Return: pointer if an occurence is found or NULL if not
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j, match;
	char *ptr;

	i = 0;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				match = 1;
				ptr = &s[i];

				break;
			}

			j++;
		}

		if (match == 1)
			break;

		i++;
	}

	if (match == 1)
		return (ptr);
	else
		return (NULL);
}
