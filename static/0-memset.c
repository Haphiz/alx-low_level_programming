#include "main.h"
/**
 * _memset - function fills the memory area
 * @n: number of times to copy b
 * @s: memory area to be filled
 * @b: character to be copied
 * Return: a pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
