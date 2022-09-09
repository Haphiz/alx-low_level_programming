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

	printf("size of a char: %x bytes\n", (unsigned int)sizeof(c));
	printf("size of an int: %x bytes\n", (unsigned int)sizeof(i));
	printf("size of a long int: %x bytes\n", (unsigned int)sizeof(li));
	printf("size of a long long int: %x bytes\n", (unsigned int)sizeof(lli));
	printf("size of a float: %x bytes\n", (unsigned int)sizeof(f));

	return (0);
}
