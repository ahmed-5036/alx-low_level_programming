#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX stdout.
 * @filename: The name of the file to read.
 * @letters: The number of letters it should read and print.
 *
 * Return: The actual number of letters it could read and print.
 *         If the file can't be opened or read, return 0.
 *         If filename is NULL, return 0.
 *         If write fails or does not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, read_result, write_result;
	char *buffer;

	if (filename == NULL)
		return (0);

	/* Open the file for reading */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/* Allocate memory for a buffer */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	/* Read from the file */
	read_result = read(fd, buffer, letters);
	if (read_result == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	/* Write to STDOUT */
	write_result = write(STDOUT_FILENO, buffer, read_result);
	if (write_result == -1 || write_result != read_result)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	close(fd);
	free(buffer);
	return (read_result);
}

