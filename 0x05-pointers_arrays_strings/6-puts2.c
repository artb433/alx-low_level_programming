#include <stdio.h>
#include <string.h>

/**
 * puts2 - print half the value of an array
 * @str: array to be considered
 */
void puts2(char *str)
{
	int stringLength;
	int counter;
	int index;
	char output[1000];

	stringLength = strlen(str);
	index = 0;

	if (stringLength > 0)
	{
		for (counter = 0; counter <= stringLength / 2; counter++)
		{
			output[counter] = *(str + index);
			index += 2;
		}

		puts(output);
	}
	else
	{
		puts("\0");
	}
}
