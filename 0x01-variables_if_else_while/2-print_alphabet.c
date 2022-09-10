#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: print alphabets in lower case
 *
 * Return: 0 if Success
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	return (0);
}
