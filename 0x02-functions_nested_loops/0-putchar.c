#include "main.h"
/**
 * main - prints _putchar followed by new line
 * Description: Standard libraries not allowed
 *
 * Return: 0
 */
int main(void)
{
	char putchar[] = "_putchar";
	int i = 0;

	while (putchar[i] != '\0')
	{
		_putchar(putchar[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}

