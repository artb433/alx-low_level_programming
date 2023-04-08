#include "main.h"

/**
 * times_table - print the nine times table
 *
 * makes use of variable num1, num2 and calc for operations
 *
 * Return: No return value
 */
void times_table(void)
{
	int num1, num2, calc;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			calc = num1 * num2;
			if ((calc / 10) == 0)
			{
				if (num2 == 0)
				{
					_putchar('0');
				}
				if (num2 != 0)
				{
					_putchar(' ');
					_putchar((calc % 10) + '0');
				}
				if (num2 < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar((calc / 10) + '0');
				_putchar((calc % 10) + '0');
				if (num2 < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
