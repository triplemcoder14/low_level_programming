#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* create_array - creates an array of chars, and initializes
* it with a specific char
*
* @size: size of memory
* @c: value of memory
*
* Return: pointer to charcter array on Success or NULL on Error
*/

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = (char *)malloc(size * sizeof(char));

	if (arr == NULL) /* Check for allocation error*/
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	arr[i] = '\0';

	return (arr);
}
