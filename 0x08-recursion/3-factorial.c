#include "main.h"
/**
 * factorial - function finds the factorial of a number
 * @n: integer input
 * Return: -1 if n is less than 0, factorial if greater than 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
