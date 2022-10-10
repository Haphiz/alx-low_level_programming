#include <stdio.h>

/**
 * main -prints the name of the file it was compiled from,
 * followed by a new line.
 * @argc: argument counter
 * @argv: argument value
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
