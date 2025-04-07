#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - copies the content of one file to another 
 * argc: argument count
 * argv: argument vector
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, r, w;
	char buffer[1024];
	ssize_t byted_read, bytes_written:

	if (argc != 3)
	{
		dprintf(2, "usage: cp file_from file_to\n");
	}
	exit(97);
	}

	file_from = open(argv[1], 0_RDONLY);
	if (file_from == -1)
	{
		dprintf(2, "error: can't read from filr %s\n", argv[1]);
		exit(98);
	}
file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		close(file_from);
		exit(99);
	}
	while ((bytes_read = read(file_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(2,"error: can't write to %s\n", argv[2]);
			close(file_from);
			close(file_to);
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(2, "error: can't read from file %s\n", argv[1]);
		close(file_from);
		close(file_to);
		exit(98);
	}
	if (close(file_from) == -1)
	{
		dprintf(2, "error: can't close fd %d\n", file_from);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		 dprintf(2, "error: can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}

