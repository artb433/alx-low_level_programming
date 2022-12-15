#include "main.h"
#include <stdio.h>

/**
 * more_numbers - print 0 to 14 ten times
 */

void more_numbers(void)
{
	int rows;
	int nums;
	int placeholder;
	int placeholder_t;
	int placeholder_f;
	int put;

	rows = 0;

	while (rows < 10)
	{
		nums = 0;

		while (nums < 15)
		{
			placeholder = nums + '0';
			placeholder_t = (nums / 10) + '0';
			placeholder_f = (nums % 10) + '0';

			if (nums <= 9)
			{
				put = placeholder;
			}
			else
			{
				put = placeholder_t;
			}

			nums++;
			_putchar(put);

			if (nums <= 10)
				continue;
			_putchar(placeholder_f);
		}
		_putchar('\n');
		rows++;
	}
}
