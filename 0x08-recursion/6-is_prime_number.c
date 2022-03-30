/**
 * is_prime_number - primenumber
 * @n: number
 * Return: 0 if not prime. otherwise 1
 */
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
		return (0);
	for (i = 2; i < n / 2; i++)
	{
		if (n % i == 0)
			return (0);
		return (1);
	}
}

