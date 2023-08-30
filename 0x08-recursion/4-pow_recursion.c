#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _pow_recursion - returning the power
 * @x:variale
 * @y:variable
 * Return: returning the value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
