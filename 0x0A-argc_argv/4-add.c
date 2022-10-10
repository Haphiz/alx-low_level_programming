#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add positive numbers followed by new line
 * If no number is passed to the program, print 0,
 * If one of the number contains symbols that are not digits, print Error,
 * @argc: argument count
 * @argv: argument value
 * Return: Always 0 for success and 1 if error
 */
int main(int argc, char *argv[])
{
	int num, result = 0, i;

	while (argc-- > 1)
	{
		for (i = 0; argv[argc][i]; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[argc]);
		result += num;
	}
	printf("%d\n", result);
	return (0);
}
