/**
 * _strcpy - copies a string
 * @dest: a char pointer
 * @src: a char pointer
 * Return: char.
 *
 * help: https://www.techiedelight.com/implement-strcpy-function-c/
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (ptr);

}
