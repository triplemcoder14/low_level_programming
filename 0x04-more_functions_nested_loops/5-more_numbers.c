#include "main.h"

/**
* more_numbers - prints 10 times the numbers, from 0 to 14
*
* Return: void
*/

void more_numbers(void)
{
	int i, j, k;

	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 2; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				if (j == 2)
					_putchar('1');
				_putchar(k);
				if (j == 2 && k == '4')
					break;
			}
		}

	_putchar('\n');
	}

}
