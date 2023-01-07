#include <stdio.h>

/**
 * is_palindrome - check if a given string is a palindrome
 *
 * @s: string to be checked
 *
 * Return: 1 if true; 0 otherwise
 */

char *fwd(char *s);
char *bck(char *s);

int is_palindrome(char *s)
{
	if (fwd(s) == bck(s))
	{
		return (1);
	}

	return (0);
}

char *fwd(char *s)
{
	char *result;

	if (*s != '\0')
	{
		*result = *s;
		fwd(s + 1);
	}

	return (result);
}

char *bck(char *s)
{
	char *result;

	if (*s != '\0')
	{
 		*result = *s;
		bck(s + 1);
	}

	return (result);
}
