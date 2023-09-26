#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *argstostr - function that concatenates all the arguments
 * @ac: variable
 * @av: pointer
 * Return: void
 */
char *argstostr(int ac, char **av)
{
{
int m, n, k = 0, l = 0;
char *strr;
if (ac == 0 || av == NULL)
return (NULL);		
for (m = 0; m < ac; m++)
{		
for (n = 0; av[m][n]; n++)
l++;
}
l += ac;	
strr = malloc(sizeof(char) * l + 1);		
if (strr == NULL)
return (NULL);
for (m = 0; m < ac; m++)
{
for (n = 0; av[m][n]; n++)		
{
strr[k] = av[m][n];		
k++;
}		
if (strr[k] == '\0')
{
strr[k++] = '\n';
}
}
return (strr);
}
}
