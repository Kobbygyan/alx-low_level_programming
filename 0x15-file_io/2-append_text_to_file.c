#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: The name of the file to append text to
 * @text_content: The text to append to the file
 *
 * Return: - 0 on success, -1 on error
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, len);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (0);
}
