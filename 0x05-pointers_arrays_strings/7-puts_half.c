#include <stdio.h>
#include <string.h>

/**
 * puts_half - print the second half of a string
 * @str: string to be considered
 */
void puts_half(char *str)
{
	int length;
	int min_len;
	int counter;
	char newArray[1000];

	length = strlen(str);

	if (length % 2 == 0)
		min_len = length / 2;
	else if (!(length % 2 == 0))
		min_len = (length - 1) / 2;

	if (length > 0 && length % 2 == 0)
	{
		for (counter = 0; counter <= length; counter++)
		{
			newArray[counter] = str[min_len];
			min_len++;
		}

		puts(newArray);
	}
	else if (length > 0 && length % 2 != 0)
	{
		for (counter = 0; counter <= length; counter++)
		{
			newArray[counter] = str[min_len + 1];
			min_len++;
		}

		puts(newArray);
	}
	else
	{
		puts("\0");
	}
}
