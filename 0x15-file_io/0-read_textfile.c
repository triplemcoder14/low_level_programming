#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the file name
 * @letters: the number of letters
 * Return: the number of characters read and printed, or 0 if an error occurred
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    int f;
    ssize_t read_bytes, write_bytes;
    size_t i;
    char *buffer;

    if (filename == NULL)
        return (0);

    f = open(filename, O_RDONLY);
    if (f == -1)
        return (0);

    buffer = malloc(sizeof(char) * letters);
    if (!buffer) {
        close(f);
        return (0);
    }

    read_bytes = read(f, buffer, letters);
    if (read_bytes == -1) {
        close(f);
        free(buffer);
        return (0);
    }

    close(f);

    for (i = 0; i < (size_t)read_bytes; i++)
    {
        write_bytes = write(STDOUT_FILENO, &buffer[i], 1);
        if (write_bytes != 1) {
            free(buffer);
            return (0);
        }
    }

    free(buffer);

    return (read_bytes);
}

