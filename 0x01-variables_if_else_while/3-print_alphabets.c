#include <stdio.h>
/**
 * main - Entry point
 * Description: prints both lower and upper case
 *
 * Return: 0 if Success
 */
int main(void)
{
	int a;
	int b;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
		for (b = 'A'; b <= 'Z'; b++)
		{
			putchar(b);
		}
	}
	return (0);
}
