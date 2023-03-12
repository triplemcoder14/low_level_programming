#include <stdio.h>

/**
* main - entry point
*
* @argc: argument count
* @argv: argument vector
*
* Return: 0 on success
*/

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
