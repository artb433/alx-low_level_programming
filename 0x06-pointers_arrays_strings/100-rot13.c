#include <string.h>

/**
 * *rot13 - encrypt string to rot13
 * @string: string to be encrypted
 *
 * Return: return encrypted string
 */
char *rot13(char *string)
{
	int counter;
	int length;
	int index;

	int find[] = {
		65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77,
		78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90,
		97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109,
		110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122
	};

	int replace[] = {
		78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90,
		65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77,
		110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121,
		122, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108,
		109
	};

	length  = strlen(string);

	for (counter = 0; counter <= length; counter++)
	{
		for (index = 0; index < 54; index++)
		{
			if (string[counter] == find[index])
			{
				string[counter] = replace[index];
			}
		}

	}

	return (string);
}
