#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * returns a pointer to the allocated memory
 * @b: unsigned type integer
 * Return: if malloc fails, the function stops, output 98
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
