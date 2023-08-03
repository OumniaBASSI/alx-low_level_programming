#include "main.h"

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 * Return: the resulting square root
 */
int _sqr_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - Entry Function
 * @n: number to calculate the square root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int _sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i < n)
		return (_sqrt(n, i + 1));
	else
		return (-1);
}
