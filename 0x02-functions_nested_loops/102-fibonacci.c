#include <stdio.h>

/**
* main - Entry point
*
* Description: Computes and prints the sum of all
* the multiples of 3 0r 5 below 1024 (excluded)
*
* Return: On success 0
*/

int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}

	printf("%d", sum);
	printf("\n");

	return (0);
}
