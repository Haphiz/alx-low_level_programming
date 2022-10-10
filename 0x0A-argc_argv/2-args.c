#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments including the first one
 * @argc: argument count
 * @argv: argument value
 * Return: Always 0 if Success
 */
int main(int argc, char *argv[])
{
	int count;

	if (argc > 0)
		for (count = 1; count < argc; count++)
			printf("%s\n", argv[count]);
	return (0);
}
