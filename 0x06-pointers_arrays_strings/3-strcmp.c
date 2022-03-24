#include <string.h>

/**
 * _strcmp - compares two strings
 * @s1: 1st string to be compared
 * @s2: 2nd string...
 * Return: return 0 if strings match. otherwise some int
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;


	int ascii_s1 = 0; /* gets the ascii character of s1 */
	int ascii_s2 = 0;

	for (i = 0; i != '\0'; i++)
		ascii_s1 += s1[i];

	for (j = 0; j != '\0'; j++)
		ascii_s2 += s2[j];

	if (ascii_s1 == ascii_s2)
		return (0);

	return (ascii_s1 - ascii_s2);
}
