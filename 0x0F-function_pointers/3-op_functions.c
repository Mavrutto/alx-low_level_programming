#include "3-calc.h"
/**
 * op_add - add
 * op_sub - sub
 * op_mul - multiplication
 * op_div - division
 * op_mod - modulus
 * @a:var
 * @b:var
 * Return: result
 */
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - addition
 * @a:var
 * @b:var
 * Return: add
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction
 * @a: var
 * @b:var
 * Return:subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplicatoin
 * @a:var
 * @b:var
 * Return:multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides
 * @a:var
 * @b:var
 * Return:division
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder after division
 * @a:var
 * @b:var
 * Return:modulus
 */
int op_mod(int a, int b)
{
	return (a % b);
}
