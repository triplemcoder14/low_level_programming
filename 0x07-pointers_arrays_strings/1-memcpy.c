#include "main.h"

/**
* _memcpy - copy selected memory area (src) to destination (dest)
*
* @dest: destination memory
* @src: source memory
* @n: selected bytes to be copied
*
* Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
