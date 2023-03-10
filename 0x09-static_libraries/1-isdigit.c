#include "main.h"

/**
* _isdigit - Checks if argument is digit between zero and nine
*
* Description: The fuction checks if c is a digit between 0 and 9
* @c: parameter
*
* Return: 0 or 1 Always
*/

int _isdigit(int c)
{
	if ((c >= 0 && c <= 9) || (c >= '0' && c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
