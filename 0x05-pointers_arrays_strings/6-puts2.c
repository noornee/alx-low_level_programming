#include "main.h"
#include <string.h>
/**
 * puts2 - prints every odd character of a string
 * @str: a pointer to a char
 * Return: void.
 */
void puts2(char *str)
{
	int i;

	int len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');

}
