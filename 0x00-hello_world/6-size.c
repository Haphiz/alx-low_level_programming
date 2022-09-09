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

	printf("size of a char: %c bytes\n", (unsigned long)sizeof(c));
	printf("size of an int: %i bytes\n", (unsigned long)sizeof(i));
	printf("size of a long int: %li bytes\n", (unsigned long)sizeof(li));
	printf("size of a long long int: %lli bytes\n", (unsigned long)sizeof(lli));
	printf("size of a float: %f bytes\n", (unsigned long)sizeof(f));

	return (0);
}
