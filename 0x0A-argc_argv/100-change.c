#include <stdlib.h>
#include <stdio.h>

/**
* main - prints the minimum number of coins
* to make change for an amount of money
*
* @argc: argument count
* @argv: character pointer to array of argument vector
*
* Return: 0 on success, 1 on error
*/

int main(int argc, char *argv[])
{
	int coins = 0, cents;

	cents = atoi(argv[argc - 1]);
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		while (cents > 0)
		{
			coins++;
			if ((cents - 25) >= 0)
			{
				cents -= 25;
				continue;
			}
			if ((cents - 10) >= 0)
			{
				cents -= 10;
				continue;
			}
			if ((cents - 5) >= 0)
			{
				cents -= 5;
				continue;
			}
			if ((cents - 2) >= 0)
			{
				cents -= 2;
				continue;
			}
			cents--;
		}
		printf("%d\n", coins);
		return (0);
	}
}
