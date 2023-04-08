#include <string.h>

/**
 * *string_toupper - convert lowercase strings to uppercase
 * @alpha: pointer to string to be converted
 *
 * Return: return pointer to converted string
 */

char *string_toupper(char *alpha)
{
	int index;
	int length;
	int counter;

	index = 0;
	length = strlen(alpha);

	for (counter = 0; counter <= length; counter++)
	{
		if (alpha[index] >= 97 && alpha[index] <= 122)
		{
			alpha[index] -= 32;
		}

		index++;
	}

	return (alpha);
}
