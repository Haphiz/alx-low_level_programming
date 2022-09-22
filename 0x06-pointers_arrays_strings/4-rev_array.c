#include "main.h"
/**
 * reverse_array - this function reverses the content of integer array
 * @a: array of integer
 * @n: number of elements in th array
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int rev;

	while (i < n--)
	{
		rev = a[i];
		a[i++] = a[n];
		a[n] = rev;
	}
}
