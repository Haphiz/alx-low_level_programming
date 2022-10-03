#include "main.h"
/**
 * _strcmp - this function compares two strings
 * @s1: input string type
 * @s2: input string type
 * Return: negative int if s1 < s2, 0 if matching, and positive int if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++, s2++;
	}
	return (*s1 - *s2);
}
