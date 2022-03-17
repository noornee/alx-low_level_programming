#include "main.h"
/**
 * _isdigit - to check for uppercase letters
 * @c: an integer
 * Return: 1 if @c is digit. otherwise 0
 */
int _isdigit(int c)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == c)
			return (1);
		return (0);

	}
	return (0);
}
