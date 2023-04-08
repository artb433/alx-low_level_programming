#include "main.h"

/**
 * print_last_digit - fetch the last digit of a number
 *
 * @num: number to be parsed
 * Return: return value of parsed digit
 */
int print_last_digit(int num)
{
	int num_calc = num % 10;

	if (num_calc < 0)
		num_calc = num_calc * -1;

	_putchar(num_calc + '0');
	return (num_calc);
}
