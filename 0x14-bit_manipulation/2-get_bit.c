#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: number
 * @index: index
 *
 * Return: value of number at given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int count;

	/*return -1 if index is greater than bit size of unsigned long int*/
	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);
	/*loop through binary value of the number to get to index*/
	for (count = 0; count <= index; count++)
	{
		if (n == 0 && count  < index)
			return (-1);
		n = n >> 1;
	}
	return ((n & 1));
}
