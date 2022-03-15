#include "main.h"

/**
 * _islower - a function
 * @c: an argument with type int
 * Return: 1 if c is lowercase. 0 otherwise
 */
int _islower(int c)
{
	int i;

	for (i = 65; i < 90; i++)
	{
		if (c == i)
			return (0);
	}

	return (1);

}

