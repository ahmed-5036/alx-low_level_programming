#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * handle_error - function to print error messages and exit
 * @message: the error message
 * @file: the name of the file causing the error
 * @exit_code: the exit code to use
 */
void handle_error(const char *message, const char *file, int exit_code)
{
dprintf(STDERR_FILENO, "%s %s\n", message, file);
exit(exit_code);
}
/**
 * close_files - function to close two file descriptors
 * @fd1: the first file descriptor
 * @fd2: the second file descriptor
 */
void close_files(int fd1, int fd2)
{
int result;

result = close(fd1);
if (result == -1)
handle_error("Error: Can't close fd", "1", 100);
result = close(fd2);
if (result == -1)
handle_error("Error: Can't close fd", "2", 100);
}
/**
 * main - program entry point
 * @argc: the argument count
 * @argv: the argument values
 * Return: 0 on success, various exit codes on failure
 */
int main(int argc, char *argv[])
{
int fd_from, fd_to;
ssize_t bytes_read, bytes_written;
char buffer[1024];

if (argc != 3)
handle_error("Usage: cp file_from file_to", "", 97);
fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
handle_error("Error: Can't read from file", argv[1], 98);
fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (fd_to == -1)
handle_error("Error: Can't write to", argv[2], 99);
while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read)
handle_error("Error: Can't write to", argv[2], 99);
}
if (bytes_read == -1)
handle_error("Error: Can't read from file", argv[1], 98);
close_files(fd_from, fd_to);
return (0);
}
