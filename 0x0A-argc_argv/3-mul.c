#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - print the result of the multiplication, followed by a new line
 * @argc: argument count
 * @argv: argument value
 * Return: Always 0 if success else 1
 */
int main(int argc, char *argv[])
{
	int n, m, res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		n = atoi(argv[1]);
		m = atoi(argv[2]);
		res = n * m;
		printf("%d\n", res);
		return (0);
	}
}
