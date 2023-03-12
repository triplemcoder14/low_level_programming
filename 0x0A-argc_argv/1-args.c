#include <stdio.h>

/**
* main - entry point
*
* @argc: argument count
* @argv: argument vector
*
* Return: 0 on success
*/

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	argv[1] = "";
	printf("%d\n", argc - 1);
	return (0);
}
