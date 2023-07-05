
/**
 * is_prime_number - tell if a number us primw or not.
 *
 * @n: argument
 * Return: 1 or 0.
 */
int isPrime(int n, int dvs);
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (isPrime(n, n - 1));
}
/**
 * isPrime - work is_prime_number
 *
 * @n: argument1
 * @dvs: argument2
 * Return: 1 or 0
 */
int isPrime(int n, int dvs)
{
	if (dvs == 1 && n != 2)
		return (1);
	if (n % dvs == 0)
		return (0);
	return (isPrime(n, dvs - 1));
}
