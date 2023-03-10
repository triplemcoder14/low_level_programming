#include <stddef.h>
#include "main.h"

/**
* _strchr - Function that locates character in a string
*
* @s: string
* @c: character to be located
*
* Return: pointer to character or NULL
*/

char *_strchr(char *s, char c)
{
	int i;
	char *ptr;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			ptr = (s + i);
			return (ptr);
		}

	}

	return (NULL);
}
