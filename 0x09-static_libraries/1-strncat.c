#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: input string type
 * @src: input string type
 * @n: number of elements to concatenate in
 * Return: pointer to resulting 'dest'
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0' && n > 0; j++, n--, i++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
