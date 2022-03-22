#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _atoi - comvert string to integer
 * @s: char type pointer:
 * Return: int.
 */
int _atoi(char *s)
{
	int i, j, len;

	len = strlen(s);

	for (i = 0; i < len; i++)
	{

		if (s[i] == 32)
			continue;
		for (j = 48; j <= 57; j++)
		{
			if (s[i] == j)
			{
			/*	putchar(s[i]);*/
				return (s[i]);
			}

		}
	}
	return (0);
}
