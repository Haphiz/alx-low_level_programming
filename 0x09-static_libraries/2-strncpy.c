#include "main.h"
/**
 * _strncpy - function that copies a string
 * @dest: input string type
 * @src: input string type
 * @n: number of xters to copy over
 * Return: 'dest' edited string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; n > i; i++)
		dest[i] = '\0';
	return (dest);
}
