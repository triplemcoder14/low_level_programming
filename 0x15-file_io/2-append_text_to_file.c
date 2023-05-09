#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 *
 * @filename: file name
 * @text_content: text content
 *
 * Return: 1 on success
 * return -1 on failure
 * Do not create the file if it does not exist
 * return -1 if filename is NULL
 * if text_content is NULL don't add anything to file.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i, fd;
	size_t count = 0;
	ssize_t nu_written;

	if (filename == NULL)
		return (-1);
	/*open/create file*/
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	/*return 1 if text_content is NULL*/
	if (text_content == NULL)
		return (1);
	/*count characters in text_content*/
	for (i = 0; text_content[i]; i++)
		count++;
	/*write text_content to file*/
	nu_written = write(fd, text_content, count);
	/*close file*/
	close(fd);
	/*return -1 if write fails*/
	if (nu_written == -1)
		return (-1);

	return (1);
}
