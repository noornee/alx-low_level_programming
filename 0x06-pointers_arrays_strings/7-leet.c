/**
 * leet - encide string to 1337
 * @str: string to be encoded
 * Return: char. encoded string.
 */
char *leet(char *str)
{
	int i, j;

	char letters[] = {'a', 'e', 'o', 't', 'l'};
	char num[] = {'4', '3', '0', '7', '1'};


	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
			if ((str[i] == letters[j]) || (str[i] == letters[j] - 32))
			{
				str[i] = num[j];
			}
	}
	return (str);
}
