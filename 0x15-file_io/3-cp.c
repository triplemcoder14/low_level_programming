#include "main.h"

#define BUFFER_SIZE 1024

/**
 * main - program that copies the content of a file to another file
 *
 * @ac: arguement count
 * @av: argument vector
 *
 * Return: 1 on success.
 */

int main(int ac, char **av)
{
	int fd_from, fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

    /** Check for correct number of arguments */
	if (ac != 3)
	{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(EXIT_FAILURE);
	}

    /** Open the source file for reading */
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
	{
	perror("open");
	exit(EXIT_FAILURE);
	}

    /** Open the destination file for writing */
	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
	perror("open");
	exit(EXIT_FAILURE);
	}

    /** Read from the source file and write to the destination file */
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
	bytes_written = write(fd_to, buffer, bytes_read);
	if (bytes_written != bytes_read)
	{
	perror("write");
	exit(EXIT_FAILURE);
	}
	}

    /** Close the source and destination files*/
	if (close(fd_from) == -1)
	{
	perror("close");
	exit(EXIT_FAILURE);
	}

    /** Close the source and destination */
	if (close(fd_to) == -1)
	{
	perror("close");
	exit(EXIT_FAILURE);
	}

	/** Return exit success */
	return (EXIT_SUCCESS);
}
