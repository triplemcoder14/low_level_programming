#include "main.h"

/**
 * create_file - creates a file and writes text into it
 * @filename: the name of the file to create
 * @text_content: the text to write into the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
    int fd, len, bytes_written;

    if (filename == NULL)
        return (-1);

    fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
    if (fd == -1)
        return (-1);

    if (text_content == NULL)
    {
        close(fd);
        return (1);
    }

    len = 0;
    while (text_content[len] != '\0')
        len++;

    bytes_written = write(fd, text_content, len);
    close(fd);

    if (bytes_written == -1 || bytes_written != len)
        return (-1);

    return (1);
}

