#include "main.h"

/**
 * create_file - Creates file with specified name and writes specified string
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails to create the file or write to it - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fil_des, wr, lngt = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (lngt = 0; text_content[lngt];)
			lngt++;
	}
	fil_des = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(fil_des, text_content, lngt);
	if (fil_des == -1 || wr == -1)
		return (-1);
	close(fil_des);
	return (1);
}
