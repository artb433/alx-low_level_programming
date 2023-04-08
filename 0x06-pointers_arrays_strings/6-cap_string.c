#include <string.h>
#include <stdio.h>

/**
 * *cap_string - capitalise each word of string
 * @string: string to be worked on
 *
 * Return: return parsed string
 */

char *cap_string(char *string)
{
	char test[14] = {
		' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'
	};

	char *ptr = test;

	unsigned long int i;
	int curr;
	int length;
	int counter;
	int next;

	length = strlen(string) - 1;

	for (counter = 0; counter <= length; counter++)
	{
		curr = string[counter];
		next = string[counter + 1];

		if (counter == 0 && curr >= 97 && curr <= 122)
			string[counter] -= 32;

		for (i = 0; i <= strlen(ptr); i++)
		{
			if ((curr == (ptr[i])) && next >= 97 && next <= 122)
				string[counter + 1] -= 32;
		}
	}

	return (string);
}
