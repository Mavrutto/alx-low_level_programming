#include <stdio.h>
#include <stdlib.h>
/**
* main - adds
* @argc: number
* @argv: pointer
*
* Return: 0
*/
int main(int argc, char **argv)
{
int i, j, result = 0;
char *flag;


if (argc < 2)
{
printf("0\n");
return (0);
}


for (i = 1; argv[i]; i++)
{
j = strtol(argv[i], &flag, 10);
if (*flag)
{
printf("Error\n");
return (1);
}
else
{result += j;
}
}
printf("%d\n", result);


return (0);
}
