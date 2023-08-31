#include "main.h"

int actual_sqrt_recursion(int n, int m);

/**
 * _sqrt_recursion - returns the natural sqrt
 * @n:var
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the sqrt
 * @n: number to calculate the sqaure root
 * @i: iterator
 * Return: the resulting sqrt
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}


