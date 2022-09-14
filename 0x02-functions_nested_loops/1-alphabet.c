#include "main.h"

/**
 * print_alphabet - Print alphabet in lowercase using only _putchar
 * Return: 0 Always Success
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
