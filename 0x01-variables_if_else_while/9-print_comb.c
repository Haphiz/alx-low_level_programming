#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all possible combo of sigle-digits numbers
 *
 * Return: 0 if Success
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
		putchar('\n');
		return (0);
}
