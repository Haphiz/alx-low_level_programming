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

	printf("size of a char: %x byte(s)\n", (unsigned int)sizeof(c));
	printf("size of an int: %x byte(s)\n", (unsigned int)sizeof(i));
	printf("size of a long int: %x byte(s)\n", (unsigned int)sizeof(li));
	printf("size of a long long int: %x byte(s)\n", (unsigned int)sizeof(lli));
	printf("size of a float: %x byte(s)\n", (unsigned int)sizeof(f));

	return (0);
}
