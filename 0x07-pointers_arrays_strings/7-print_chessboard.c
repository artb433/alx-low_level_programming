#include <stdio.h>

/**
 * print_chessboard - print the chessboard
 *
 * @board: chess pieces container
 *
 * Return: Always 0;
 */

void print_chessboard(char board[8][8])
{
	int i, j;

	i = j = 0;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c", board[i][j]);
		}

		if (!(i == 8 && j == 8))
			printf("\n");
	}
}
