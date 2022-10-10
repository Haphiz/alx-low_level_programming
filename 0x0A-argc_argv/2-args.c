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
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
