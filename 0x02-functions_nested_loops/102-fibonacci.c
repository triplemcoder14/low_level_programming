#include <stdio.h>

/**
* main - Entry point
*
* Description: Print the first 50 Fibonacci numbers
*
* Return: Always 0
*/

int main(void)
{
	int i;
	long int a, b, c;

	a = 0;
	b = 1;

	for (i = 1; i <= 50; i++)
	{
		c = a + b;

		printf("%ld", c);

		if (i != 50)
		{
			printf(",");
			printf(" ");
		}

		a = b;
		b = c;

	}

	printf("\n");

	return (0);
}}
