#include "main.h"


/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: base.
 * @y: exponent.
 * return: value of the exponent.
 */
int _pow_recurstion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (x == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1))
}
