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

	ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch = ch + 1;
	}
	putchar('\n');
	return (0);
}
