#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int fnum;
	int lnum;

	fnum = '0';
	lnum = '0';

	for (fnum = '0'; fnum <= '9'; fnum++)
	{
		for (lnum = '0'; lnum <= '9'; lnum++)
		{
			if (!((fnum == lnum) || (lnum < fnum)))
			{
				putchar(fnum);
				putchar(lnum);

				if (!(lnum == '9' && fnum == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
