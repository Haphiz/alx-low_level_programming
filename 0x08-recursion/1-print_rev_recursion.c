#include "main.h"
/**
 * _print_rev_recursion - function prints strings in reverse
 * @s: input string type
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\0');
		return;
	}
	_putchar(*s);
	_print_rev_recursion(s - 1);
}
