#include "main.h"
/**
 * _isupper - to check for uppercase letters
 * @c: an integer
 * Return: 1 if _isupper. otherwise 0
 */
int _isupper(int c)
{
	int i;

	for (i = 65; i <= 90; i++)
	{
		if (i == c)
			return (1);
		return (0);

	}
	return (0);
}
