#include <stdlib.h>
#include "main.h"

/**
* str_concat - concatenate two strings
*
* @s1: first string parameter
* @s2: second string parameter
*
* Return: character pointer
*/

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j, k, l, m, n;

	/*return NULL if s1 or s2 is NULL*/
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	/*Determine the length of s1 and s2*/
	for (i = 0; s1[i] != '\0'; i++)
		continue;
	for (j = 0; s2[j] != '\0'; j++)
		continue;

	k = i + j;

	/*Create and allocate space for s1 and s2*/
	ptr = malloc((k * sizeof(char)) + 1);

	if (ptr == NULL)
		return (NULL);

	/*put s1 and s2 into ptr*/
	for (l = 0; s1[l] != '\0'; l++)
		ptr[l] = s1[l];
	for (m = l, n = 0; s2[n] != '\0'; m++, n++)
		ptr[m] = s2[n];

	/*Insert null character at last location of ptr*/
	ptr[m] = '\0';

	return (ptr);
}
