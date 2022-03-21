/**
 * _strlen - gets the length of a string
 * @s: a pointer to char
 * Return: length of @s.
 */
int _strlen(char *s)
{
	int i;

	int len = 0;

	for (i = 0; s[i] != 0; i++)
	{
		len++;
	}
	return (len);
}
