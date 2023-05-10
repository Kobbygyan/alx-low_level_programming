#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *create_buffer(char *file);
void close_file(int fil_des);

/**
 * create_buffer - Allocates 1024 bytes of memory for a buffer.
 * @file: A pointer to a string containing the name of the file
 *        that the buffer is storing characters for.
 *
 *        Return: A pointer to the newly-allocated buffer.
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - Closes the file associated with a given file descriptor.
 * @fil_des: The file descriptor to be closed.
 *
 * Return: If the function succeeds, 0 is returned.
 *         Otherwise, -1 is returned and errno is set.
 */

void close_file(int fil_des)
{
	int c;

	c = close(fil_des);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fil_des %d\n", fil_des);
		exit(100);
	}
}

/**
 * main - Copies the contents of one file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */

int main(int argc, char *argv[])
{
	int from, to, re, wr;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	re = read(from, buff, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do
	{
		if (from == -1 || re == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}
		wr = write(to, buff, re);
		if (to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}
		re = read(from, buff, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	}
	while (re > 0);
	free(buff);
	close_file(from);
	close_file(to);
	return (0);
}
