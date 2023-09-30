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
int j, countt = 0;
unsigned long int curr;
unsigned long int exc = n ^ m;
for (j = 63; j >= 0; j--)
{
	curr = exc >> j;
	if (curr & 1)
		countt++;
}
return (countt);
}
