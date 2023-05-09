#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints its contents to STDOUT.
 * @filename: The name of the text file to read
 * @letters: The maximum number of letters to read and print
 *
 * Return: The actual number of bytes read and printed to STDOUT,
 *         or 0 if the function fails or the filename is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fil_des;
	ssize_t wr;
	ssize_t t;

	fil_des = open(filename, O_RDONLY);

	if (fil_des == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	t = read(fil_des, buff, letters);
	wr = write(STDOUT_FILENO, buff, t);
	free(buff);
	close(fil_des);
	return (wr);
}
