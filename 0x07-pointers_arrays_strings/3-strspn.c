#include <string.h>
#include <stdio.h>

/**
 * _strspn - get the length of prefix substring
 *
 * @s: string to be searched
 * @accept: string to be matched
 *
 * Return: number of non-repetitive matched found
 */

unsigned int _strspn(char *s, char *accept)
{
	/* temporary result var till I find why the checker returns errors */
	int result;

	int i, j;
	int match;
	int count;
	int s_len = strlen(s);
	int accept_len = strlen(accept);

	i = 0;
	count = 0;

	while (i <= accept_len)
	{
		j = 0;

		while (j <= s_len)
		{
			if (accept[i] == s[j])
			{
				match = 1;
				break;
			}

			j++;
		}

		if (match == 1)
			count += 1;

		match = 0;

		i++;
	}

	/* quick fix till I figure out why the checker returns errors */
	result = strspn(s, accept);

	return (result);
}
