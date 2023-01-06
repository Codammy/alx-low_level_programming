/**
 * _sqrt - recursive function
 * @n: value passed from _sqrt_recursion function.
 * @i: iterates the function.
 * Return: (i) or -1 itself.
*/
int _sqrt(int n, int i)
{
int mul_n = i * i;

if (mul_n > n)
{
return (-1);
}
else if (mul_n == n)
{
return (i);
}
else
{
return (_sqrt(n, i + 1));
}
}


/**
 * _sqrt_recursion - drives the _sqrt function to main.
 * @n: parameter to check for.
 * Return: square root value or -1 if values not a perfect square.
*/
int _sqrt_recursion(int n)
{
return ((_sqrt(n, 1)));
}
