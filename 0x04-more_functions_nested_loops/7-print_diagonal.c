#include "main.h"

/**
 * print_diagonal - this function prints a diagonal line
 * followed by new line
 * @n: an input integer
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
			_putchar(' ');
		_putchar(92);
		_putchar('\n');
	}
	else
		_putchar('\n');
}
