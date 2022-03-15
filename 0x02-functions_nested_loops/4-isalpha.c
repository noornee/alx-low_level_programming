#include "main.h"

/**
 * _isalpha - a function
 * @c: an argument of type int
 * Return: 1 if c is a letter. 0 otherwise.
 */
int _isalpha(int c)
{
	int i, j;

	for (i = 65; i < 90; i++)
	{
		for (j = 97; j < 122; j++)
		{
			if (c == i || c == j)
				return (1);
			return (0);

	}
}
