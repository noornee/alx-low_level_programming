#include "main.h"

/**
 * main - main
 * Return: _putchar
 */
int main(void)
{
	char num[8] = "_putchar";

	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(num[i]);
	}

	_putchar('\n');

	return (0);
}
