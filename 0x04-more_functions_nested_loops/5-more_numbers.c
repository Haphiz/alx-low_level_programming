#include "main.h"

/**
 * more_numbers - it prints 10 times number from 0 to 14
 * followed by new line
 * Return: Always 0
 */
void more_numbers(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j);
		}
		_putchar(i);
	}
	_putchar('\n');
}
