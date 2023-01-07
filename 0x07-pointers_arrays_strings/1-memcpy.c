/**
 * *_memcpy - copy memory area to specified destination
 *
 * @dest: destination to copy to
 * @src: source of memory
 * @n: number of bytes to copy
 *
 * Return: pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];

		i++;
	}

	return (dest);
}
