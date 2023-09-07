#include "main.h"
#include <stdio.h>
/**
 * _calloc - allocates memory to arra
 * @nmemb: var
 * @size: var
 * Return: if 0 retur NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *i;
unsigned int j;
if (nmemb == 0 || size == 0)
return (NULL);
i = malloc(nmemb * size);
if (i == NULL)
return (NULL);
for (j = 0; j < (nmemb * size); j++)
i[j] = 0;
return (i);
}
