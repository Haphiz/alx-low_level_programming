#include "main.h"
/**
 * _memcpy - this function copies memory area
 * @src: memory area to be copied
 * @dest: memory area to copy to
 * @n: number of bytes to copy
 * Return: 'dest'
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		src[i] = dest[i];
	}
	return (dest);
}
