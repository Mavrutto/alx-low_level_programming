#include <stdio.h>
#include <stdlib.h>
/**
* main - entry
* @argc: number
* @argv: pointer
* Return: 0
*/
int main(int argc, char **argv)
{
int total, count;
unsigned int m;
char *c;
int cents[] = {25, 10, 5, 2};
if (argc != 2)
{
printf("Error\n");
return (1);
}
total = strtol(argv[1], &c, 10);
count = 0;
if (!*c)
{
while (total > 1)
{
for (m = 0; m < sizeof(cents[m]); m++)
{
if (total >= cents[m])
{
count += total / cents[m];
total = total % cents[m];
}
}
}
if (total == 1)
count++;
}
else
{
printf("Error\n");
return (1);
}
printf("%d\n", count);
return (0);
}
