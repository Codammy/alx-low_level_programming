
/**
 * is_prime_number - tell if a number us primw or not.
 * @n: argument
 * Return: 1 or 0.
 */
int is_prime_number(int n)
{
	if (n == 1)
		return (0);
	if (n == 2)
		return (1);
	else if ((n % 2 == 1) && (n % 3 != 0) && (n % 5 != 0) && (n % 7 != 0))
		return (1);
	else
		return (0);
}
