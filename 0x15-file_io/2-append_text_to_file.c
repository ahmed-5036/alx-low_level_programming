#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file
 * @filename: The name of the file
 * @text_content: The text to append
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, write_status;

	if (filename == NULL)
		return (-1);

	/* Open the file with the appropriate flags and permissions */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	/* Calculate the length of the text content */
	for (len = 0; text_content[len]; len++)
		;

	/* Write the text content to the file */
	write_status = write(fd, text_content, len);
	if (write_status == -1)
	{
		close(fd);
		return (-1);
	}

	/* Close the file descriptor and return success */
	close(fd);
	return (1);
}

