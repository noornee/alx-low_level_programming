#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: string to concactenate with @s2
 * @s2: string to concatenates with @s1
 * Return: Abways 0.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, a, b;
	char *str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	str = malloc(sizeof(char) * (i + j + 1));

	if (str == NULL)
		free(str);
		return (NULL);

	for (a = 0; a < i; a++)
		str[a] = s1[a];

	for (b = 0; b < j; b++)
		str[a + b] = s2[b];

	free(str);
	return (str);

}
