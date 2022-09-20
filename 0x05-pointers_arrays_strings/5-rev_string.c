#include "main.h"

/**
 * rev_string - reverse a string
 * @s: char array string type
 * Return: Nothing
 */
void rev_string(char *s)
{
	int i, count, last;
	char k;

	for (i = 0; s[i] != '\0'; i++)
		;
	last = i;
	for (i--, count = 0; count < last / 2 ; i--, count++)
	{
		k = s[count];
		s[count] = s[i];
		s[i] = k;
	}
}
