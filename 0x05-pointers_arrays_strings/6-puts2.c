#include "main.h"

/**
 * puts2 - prints every charcater of a string
 * starting from first letter folowed by new line
 * @str: char array string type
 * Return: Nothing
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
