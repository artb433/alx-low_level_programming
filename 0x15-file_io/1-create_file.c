#include "main.h"

/**
 * create_file - create a specified file with filename (filename)
 *
 * @filename: name of file to be created
 * @text_content: contents of file
 *
 * Return: 1 on success; -1 on any failure
 */

int create_file(const char *filename, char *text_content)
{
	int length;
	int open_ret_val;
	int write_ret_val;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		open_ret_val = open(filename, O_CREAT, 0600);

		if (open_ret_val == -1)
			return (-1);

		close(open_ret_val);
		return (1);
	}

	length = strlen(text_content);
	open_ret_val = open(filename, O_TRUNC | O_RDWR | O_CREAT, 0600);

	if (open_ret_val == -1)
		return (-1);

	write_ret_val = write(open_ret_val, text_content, length);

	if (write_ret_val == -1)
		return (-1);

	close(open_ret_val);
	return (1);
}
