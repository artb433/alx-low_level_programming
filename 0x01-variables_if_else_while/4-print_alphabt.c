#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha == 'e')
			continue;
		if (alpha == 'q')
			continue;

		putchar(alpha);
	}

	putchar('\n');
	return (0);
}
