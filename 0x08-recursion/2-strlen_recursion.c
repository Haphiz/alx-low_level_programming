#include "main.h"
/**
 * _strlen_recursion - function returns the length of a string
 * @s: input string
 * Return: length of a string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (s[len] == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
