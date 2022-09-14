#include "main.h"

/**
 * _islower - it prints lowercase character
 * @c: char type letter
 * Return: 1 if c is lowercase 0 if not lowercase
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
