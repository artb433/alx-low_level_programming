#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverse a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int length = strlen(s);
	int counter;
	int index;
	char comp[1000];

	strcpy(comp, s);

	index = 0;

	if (length > 0)
	{
		for (counter = length - 1; counter >= 0; counter--)
		{
			s[index] = comp[counter];
			index++;
		}
	}
	else
	{
		s[0] = '\0';
	}
}
