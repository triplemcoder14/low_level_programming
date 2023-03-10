#include "main.h"

/**
* _islower - Checks for lowercase character
*
* @c:first value
*
* Return: On success 1
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	return (0);
}
