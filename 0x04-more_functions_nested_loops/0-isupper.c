#include "main.h"

/**
 * _isupper - check for uppercase letters
 * @c: parameter to be checked
 * Return: return 1 if uppercase and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
