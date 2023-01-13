#include <stdio.h>

/**
 * main - entry point; print name of program
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc >= 1)
		printf("%s\n", argv[0]);

	return (0);
}
