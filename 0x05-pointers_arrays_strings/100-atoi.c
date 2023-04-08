#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _atoi - match integers in string
 * @s: string to be sorted
 */
int _atoi(char *s)
{
	int num;
	int index;
	int length;
	int counter;
	int result;

	index = 0;
	length = strlen(s);

	if (length > 0)
	{
		for (counter = 0; counter <= length; counter++)
		{
			for (num = 0; num <= 9; num++)
			{
				result = atoi(s[index]);
				index++;
			}
		}
	}

	return (result);
}
