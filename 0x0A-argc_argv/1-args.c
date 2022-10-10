#include <stdio.h>
#include "main.h"

/**
 * main - prints number of arguments passed into it
 * @argc: argument count
 * @argv: array of argument strings
 * Return: Always 0 if Success
 */
int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);
	return (0);
}
