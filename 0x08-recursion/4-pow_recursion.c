#include "main.h"
/**
 * _pow_recursion - function that solve x raised to power of y
 * @x: the base input integer
 * @y: the power input integer
 * Return: -1 if y is less than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
