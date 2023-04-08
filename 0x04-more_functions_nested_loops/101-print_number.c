#include "main.h"

/**
 * print_number - print integers
 * @n: integer to be printed
 */

void print_number(int n)
{
	unsigned int a;
	unsigned int b;
	unsigned int counter;

	if (n < 0)
	{
		_putchar('-');
		a = n * -1;
	}
	else
	{
		a = n;
	}

	b = a;
	counter = 1;

	while (b > 9)
	{
		b = b / 10;
		counter = counter * 10;
	}

	for (; counter >= 1; counter /= 10)
	{
		_putchar(((a / counter) % 10) + 48);
	}
}
