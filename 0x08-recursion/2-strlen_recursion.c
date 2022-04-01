/**
 * _strlen_recursion - returns the length of a string.
 * @s: string
 * Return: string length. otherwise 0.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return ('\0');
}
