#include "main.h"
/**
 * _puts_recursion - function prints a string followed by new line
 * @s: input string type
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
	return (0);
}
