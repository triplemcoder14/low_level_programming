#include "main.h"

/**
* create_file - creates a file and writes a given text to it
* @filename: the filename
* @text_content: a NULL terminated string to write to the file
* Return: 1 on success, -1 on failure
**/
int create_file(const char *filename, char *text_content)
{
    int fd, length, res;

    if (filename == NULL)
        return (-1);

    fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
    if (fd == -1)
        return (-1);

    if (text_content == NULL)
    {
        close(fd);
        return (1);
    }

    for (length = 0; text_content[length] != '\0'; length++)
        ;

    res = write(fd, text_content, length);
    if (res != length)
    {
        close(fd);
        return (-1);
    }

    close(fd);
    return (1);
}

