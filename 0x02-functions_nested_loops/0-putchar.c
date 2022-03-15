#include "main.h"

/**
 * main - main
 * Return: _putchar
 */
int main(void)
{
	int num[10] = { 95, 112, 117, 116, 99, 104, 97, 114 };
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(num[i]);
		_putchar('\n');
	}

	return (0);
}
