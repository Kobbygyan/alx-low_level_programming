#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads text file and prints its contents to the POSIX STDOUT
 * @filename: A string representing the name of the text file to be read
 * @letters: A string representing the number of letters to be read
 * Return: wr - actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fo;
	ssize_t wr;
	ssize_t rt;

	fo = open(filename, O_RDONLY);
	if (fo == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	rt = read(fo, buf, letters);
	wr = write(STDOUT_FILENO, buf, rt);

	free(buf);
	close(fo);
	return (wr);
}


