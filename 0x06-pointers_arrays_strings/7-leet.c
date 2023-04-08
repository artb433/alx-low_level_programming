#include <stdio.h>
#include <string.h>

/**
 * *leet - replace specified characters in a string
 * @string: string to be parsed
 *
 * Return: return string
 */

char *leet(char *string)
{
	int counter;
	int length;
	unsigned long int index;

	int find[] = {
		97, 65, 101, 69, 111, 79,
		116, 84, 108, 76
	};

	int replace[] = {
		52, 52, 51, 51, 48, 48,
		55, 55, 49, 49
	};

	length = strlen(string);

	for (counter = 0; counter < length; counter++)
	{
		for (index = 0; index < 11; index++)
		{
			if (string[counter] == find[index])
			{
				string[counter] = replace[index];
			}
		}
	}

	return (string);
}
