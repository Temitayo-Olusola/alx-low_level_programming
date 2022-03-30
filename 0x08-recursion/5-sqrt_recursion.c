#include "main.h"

/**
 * _sqrt_recursion - returns the natural squareroot of a number
 * @n: number to get square root from
 *
 * Result: the actual square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses the natural square root of a number
 * @n: given number to calculate square root from
 * @i: iterator
 *
 * Return: the resulting square toot
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
