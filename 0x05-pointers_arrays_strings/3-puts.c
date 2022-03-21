#include <unistd.h>
/**
 * _puts - prints a string to stdout
 * @str: a pointer to char
 * Return: void.
 */
void _puts(char *str)
{
	write(1, str, _strlen(str));
	write(1, "\n", 2);
}
