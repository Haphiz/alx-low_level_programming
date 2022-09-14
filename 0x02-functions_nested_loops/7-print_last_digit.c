#include "main.h"

/**
 * print_last_digit - it prints the last digit
 * @n: integer type number n
 * Return: the value of the last digit n
 */
int print_last_digit(int n)
{
	int m;

	if (n > 0)
	{
		m = n % 10;
		_putchar(m + '0');
		return (m);
	}
	else
	{
		m = -1 * (n % 10);
		_putchar(m + '0');
		return (m);
	}
}
