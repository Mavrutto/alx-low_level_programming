#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen_recursion - counts the length of strings
 * @s: pointer
 * Return:0
 */
int _strlen_recursion(char *s)
{
	int str = 0;
	if(*s)
	{
		str++;
		str += _strlen_recursion(s + 1);
	}
return (str);
}
