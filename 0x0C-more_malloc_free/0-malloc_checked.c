#include "main.h"
#include <stdio.h>
/**
 * malloc_checked - allocates memory using mallc
 * @b:var
 * Return: normal preocess termination
 */
void *malloc_checked(unsigned int b)
{
  void *k;


   k = malloc(b);
   if (k == NULL)
       exit(98);
   return (k);
}
