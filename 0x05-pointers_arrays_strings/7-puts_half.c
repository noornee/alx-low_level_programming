#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: a pointer to char
 * Return: void.
 */
void puts_half(char *str)
{
	int i, len, mid;

	len = _strlen(str);

	if (len % 2 != 0)
	{
		mid = (len - 1) / 2;

		for (i = mid; i < len; i++)
			_putchar(str[i]);
	}
	else
	{
		mid = len / 2;

		for (i = mid; i < len; i++)
			_putchar(str[i]);
	}

	_putchar('\n');


}
