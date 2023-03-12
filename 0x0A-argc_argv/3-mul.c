#include <stdio.h>
#include <stdlib.h>

/**
* main - print product of two numbers
*
* @argc: argument count
* @argv: array of pointer to argument vector
*
* Return: 0 on success, 1 on Error
*/

int main(int argc, char *argv[])
{
	int a, b, product;

	a = atoi(argv[argc - 2]);
	b = atoi(argv[argc - 1]);

	product = a * b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%d\n", product);

	return (0);
}
