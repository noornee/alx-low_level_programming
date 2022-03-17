#include "main.h"
/**
 * _isupper - to check for uppercase letters
 * @c: an integer
 * Return: 1 if _isupper. otherwise 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
