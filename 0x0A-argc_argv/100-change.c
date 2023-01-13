#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point; print minimum number of coins for change
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if success; 1 if error
 */

int main(int argc, char *argv[])
{
	int i;
	int num;
	int coins[6] = {25, 10, 5, 2, 1};
	int change = 0;

	if (argc == 2)
	{
		num = atoi(argv[1]);

		if (num < 0)
		{
			printf("0\n");
			return (0);
		}

		for (i = 0; i <= 4; i++)
		{
			if (num - coins[i] >= 0)
			{
				while (num - coins[i] >= 0)
				{
					num -= coins[i];
					change++;
				}
			}
		}

		printf("%d\n", change);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
