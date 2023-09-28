#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_binary - prints binary reprs of a number
 * @n: VAriable
 * Return: binary
 */
void print_binary(unsigned long int n)
{
int bit_post = sizeof(unsigned long int) * 8 - 1;
if (n == 0)
{
printf("0");
return;
}
while ((n & (1UL << bit_post)) == 0)
{
	bit_post--;
}
while (bit_post >= 0)
{
	if (n & (1UL << bit_post))
	{
		putchar('1');
	}
	else
	{
		putchar('0');
	}
	bit_post--;
}
}
