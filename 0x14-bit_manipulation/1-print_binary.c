#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned integer
 *
 * @b: A pointer to a string of 0 and 1 chars
 *
 * Return: The converted number, or 0 if there is one or more chars in the
 * string b that is not 0 or 1, or if b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	/** function code */

	unsigned int result = 0;
	int i, len;

	if (b == NULL)
		return (0);

	len = strlen(b);

	for (i = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		result <<= 1;
		result += b[i] - '0';
	}

	return (result);
}

