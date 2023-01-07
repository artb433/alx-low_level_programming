/**
 * *_memset - assign a value to array index
 *
 * @s: value to be changed at specified index
 * @b: new value to be used
 * @n: number of indexes to modify
 *
 * Return: pointer to memory area (array) s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		if (s[i] != b)
			s[i] = b;

		i++;
	}

	return (s);
}
