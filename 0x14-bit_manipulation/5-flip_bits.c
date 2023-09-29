#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * flip_bits - you would need to flip to get from one number to another
 * @n: numbver
 * @m: number
 * Return: no of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor_rslt = n ^ m;
unsigned int countt = 0;
while (xor_rslt > 0)
{
while (xor_rslt > 0)
	countt += xor_rslt & 1;
xor_rslt >>= 1;
}
return (countt);
}
