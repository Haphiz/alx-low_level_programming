#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: 0 if Success
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %x byte(s)\n", (unsigned int)sizeof(c));
	printf("Size of an int: %x byte(s)\n", (unsigned int)sizeof(i));
	printf("Size of a long int: %x byte(s)\n", (unsigned int)sizeof(li));
	printf("Size of a long long int: %x byte(s)\n", (unsigned int)sizeof(lli));
	printf("Size of a float: %x byte(s)\n", (unsigned int)sizeof(f));

	return (0);
}
