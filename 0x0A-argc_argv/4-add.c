#include <stdlib.h>
#include <stdio.h>

/**
* main - add all positive numbers
*
* @argc: argument count
* @argv: pointer to array of argument vectors
*
* Return: 0 on Success, 1 on Error
*/

int main(int argc, char *argv[])
{
	int i, sum = 0;
	char *end;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			strtol(argv[i], &end, 10);
			if (*end)
			{
				printf("Error\n");
				return (1);
			}
			else if (atoi(argv[i]) >= 0)
				sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}

	return (0);
}
