#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int a;
	long int b;
	long int c;
	long int d;

	b = 1;
	c = 2;

	for (a = 1; a <= 50; ++a)
	{
		if (b != 20365011074)
		{
			printf("%ld, ", b);
		}

		else
		{
			printf("%ld\n", b);
		}

		d = b + c;
		b = c;
		c = d;
	}

	return (0);
}
