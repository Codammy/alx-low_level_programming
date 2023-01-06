
/**
 * _pow_recursion - returns the power of a number.
 *
 * @x: base argument.
 * @y: power argument.
 * Return: power.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
