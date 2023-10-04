#include "main.h"

/**
 * main - Entry point
 * @ac: The number of command-line arguments
 * @av: An array of command-line argument strings
 *
 * Return: 0 on success, exit codes on failure
 */
int main(int ac, char **av)
{
	int fd_from, fd_to, bytes_read, bytes_written;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}

	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
		handle_error("Error: Can't read from file", av[1], 98);

	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		handle_error("Error: Can't write to", av[2], 99);

	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
			handle_error("Error: Can't write to", av[2], 99);
	}

	if (bytes_read == -1)
		handle_error("Error: Can't read from file", av[1], 98);

	close_files(fd_from, fd_to);
	return (0);
}

/**
 * handle_error - Handles and exits with an error message
 * @message: The error message
 * @file: The filename associated with the error
 * @exit_code: The exit code to use
 */
void handle_error(const char *message, const char *file, int exit_code)
{
	dprintf(2, "%s %s\n", message, file);
	exit(exit_code);
}

/**
 * close_files - Closes two file descriptors and exits on failure
 * @fd1: The first file descriptor
 * @fd2: The second file descriptor
 */
void close_files(int fd1, int fd2)
{
	if (close(fd1) == -1 || close(fd2) == -1)
		handle_error("Error: Can't close fd", "");
}

