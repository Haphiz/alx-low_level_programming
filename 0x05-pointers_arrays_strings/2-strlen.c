#include "main.h"

/**
 * _strlen - function returns the length of a string
 * @s: An input string
 * Return: Nothing
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		;
	return (len);
}
