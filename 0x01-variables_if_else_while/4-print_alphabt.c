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
	char ch, e, q;

	e = 'e';
	q = 'q';
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != e && ch != q)
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
