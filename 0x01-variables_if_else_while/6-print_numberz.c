#include <stdio.h>
/**
 * main - Entry point
 * Description: prints 0 to 9 using putchar
 *
 * Return: 0 if Success
 */
int main(void)
{
	int t;

	for (t = '0'; t <= '9'; t++)
	{
		putchar(t);
	}
	putchar('\n');
	return (0);
}
