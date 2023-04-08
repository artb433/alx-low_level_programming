#include "main.h"

/**
 * _abs - get the absolute value of a number
 *
 * @abs_num: convert to absolute value if less than 0
 * Return: return absolute value if negative
 */
int _abs(int abs_num)
{
	int num = abs_num;

	if (num < 0)
	{
		num = -num;
		return (num);
	}
	else
	{
		return (num);
	}

	return (0);
}
