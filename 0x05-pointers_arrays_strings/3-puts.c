#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * _puts - prints a string to stdout
 * @str: a pointer to char
 * Return: void.
 */
void _puts(char *str)
{
	write(1, str, strlen(str));
	_putchar('\n');
}
