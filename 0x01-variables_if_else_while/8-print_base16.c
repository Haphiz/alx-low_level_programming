#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all hexadecimal numbers
 *
 * Return: 0 if Success
 */
int main(void)
{
	char i, l;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (l = 'a'; l <= 'f'; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
