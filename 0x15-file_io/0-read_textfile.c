#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include "main.h"

/**
 * read_textfile - Reads text file and prints it to the POSIX standard output
 *
 * @filename: filename
 * @letters: size of character to read and print
 *
 * Return: number of characters read and print
 * return 0 if opened or read fails
 * return 0 if file is NULL
 * return 0 if write fails or doesn't write expected size
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;        /** file descriptor */
	ssize_t bytes; /** number of bytes read and printed */
	char buf[1024];/** buffer to hold file contents */

	/** Check for NULL filename */
	if (filename == NULL)
		return (0);

	/** Open file for reading only */
	fd = open(filename, O_RDONLY);
	if (fd == -1) /** check for errors opening the file */
	{
		perror("read_textfile");
		return (0);
	}

	/** Read from file into buffer */
	bytes = read(fd, buf, letters);
	if (bytes == -1) /** check for errors reading from file */
	{
		perror("read_textfile");
		close(fd);
		return (0);
	}

	/** Print buffer to standard output */
	if (write(STDOUT_FILENO, buf, bytes) != bytes)
	{
		perror("read_textfile");
		close(fd);
		return (0);
	}

	/** Close file and return number of bytes read and printed */
	close(fd);
	return (bytes);
}
