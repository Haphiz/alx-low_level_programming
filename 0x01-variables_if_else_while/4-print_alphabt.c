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

	ch = 'a';
	e = 'e';
	q = 'q';
	if (ch != e && ch != q)
	{
		while (ch <= 'z')
		{
			putchar(ch);
			ch = ch + 1;
		}
	}
	putchar('\n');
	return (0);
}
