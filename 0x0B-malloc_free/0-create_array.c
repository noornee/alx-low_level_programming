#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars and initializes it with @c
 * @size: the size of the array
 * @c: char to be initialized with
 * Return: pointer to an array of char.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return ('\0');

	arr = malloc(sizeof(char) * size);

	if (arr == 0)
		return ('\0');

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);

}
