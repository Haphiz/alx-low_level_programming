#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array
 * @size: size of the array
 * @c: input string type
 * Return: a pointer if not null
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	ptr = (char *) malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (0);
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
