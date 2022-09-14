#include "main.h"

/**
 * print_alphabet_x10 - Print alphabe 10 times in lowercase using only _putchar
 * Return: 0 Always Success
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (j = 1; j <= 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
