#include "main.h"
/**
 * _puts_recursion - prints a string to stdout
 * @str: a pointer to char
 * Return: void.
 */
void _puts_recursion(char *str)
{
	if (*str != '\0')
	{
		_putchar(*str);
		_puts_recursion(str + 1);
	}
	else
		_putchar('\n');
}
