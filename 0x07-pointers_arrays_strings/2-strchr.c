/**
 * _strchr - a function that locates a character in a string.
 * @s: pointer to string
 * @c: character to locate
 * Return: a pointer to the first occurence of character @c in the string @s.
 */
char *_strchr(char *s, char c)
{
	while (*s != c && *s != '\0')
	{
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
