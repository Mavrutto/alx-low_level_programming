#include <stdio.h>
#include <stdlib.h>
/**
* main - printsopcodes
* @argc: no arguments
* @argv: array of arg
* Return: 0
*/
int main(int argc, char *argv[])
{
int bytes, j;
char *a;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
bytes = atoi(argv[1]);
if (bytes < 0)
{
printf("Error\n");
exit(2);
}
a = (char *)main;
for (j = 0; j < bytes; j++)
{
if (j == bytes - 1)
{
printf("%02hhx\n", a[j]);
break;
}
printf("%02hhx ", a[j]);
}
return (0);
}
