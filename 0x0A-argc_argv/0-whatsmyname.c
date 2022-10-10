#include "main.h"
#include <stdio.h>

/**
 * main - prints program name followed  by new line
 * @argc: argument count
 * @argv: argument value
 * Return: Always 0 if Success
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
