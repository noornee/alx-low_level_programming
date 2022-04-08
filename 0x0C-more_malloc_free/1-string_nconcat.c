#include <stdlib.h>

/**
 * string_nconcat - concatenate two string
 * @s1: first string
 * @s2: second
 * @n: number of string to be concatenated 
 *
 * Return: concatenated string or NULL if it fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *ptr;

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	if (j > n)
		n = j;

	ptr = malloc(sizeof(char) * (i + n + 1));

	if (ptr == NULL)
		return (NULL);

	for (j = 0; j < n; j++)
		s1[i + j] = s2[j];

	s1[i + j] = '\0';
	return (ptr);

}
