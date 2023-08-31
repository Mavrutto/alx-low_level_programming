#include "main.h"
#include <stdio.h>
#include <stdlib.h>
int real_prime(int n, int m);
/**
 * is_prime_number - checkng if n is a prime number
 * @n: variable
 * Return: prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (real_prime(n, n - 1));
}
/**
 * real_prime - checking now if the next numbers
 * @n: variable
 * @m: variable
 * Return: 1 and 0
 */
int real_prime(int n, int m)
{
	if (m == 1)
		return (1);
	if ((n % m) == 0 && m > 0)
		return (0);
	return (real_prime(n, m - 1));
}

