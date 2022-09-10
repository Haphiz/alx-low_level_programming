#include <stdio.h>
/**
 * main - Entry point
 * Description: prints letters in reverse
 *
 * Return: 0 if Success
 */
int main(void)
{
	char s;

	for (s = 'z'; s >= 'a'; --s)
	{
		putchar(s);
	}
	putchar('\n');
	return (0);
}
