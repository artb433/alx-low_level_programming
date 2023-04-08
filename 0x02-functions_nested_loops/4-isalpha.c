#include "main.h"

/**
 * _isalpha - find alphabetic characters
 *
 * @c: character being checked
 *
 * Return: 1 if true; 0 if false
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}
