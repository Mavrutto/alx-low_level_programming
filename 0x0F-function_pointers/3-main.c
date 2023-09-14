#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - printing the result
 * @argc: no of arguments
 * @argv: array of pointers to the arguments
 * Return:0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
int no1, no2;
char *ope;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
no1 = atoi(argv[1]);
ope = argv[2];
no2 = atoi(argv[3]);
if (get_op_func(ope) == NULL || ope[1] != '\0')
{
printf("Error\n");
exit(99);
}
if ((*ope == '/' && no2 == 0) || (*ope == '%' && no2 == 0))
{
printf("Error\n");
exit(100);
}
printf("%d\n", get_op_func(ope)(no1, no2));
return (0);
}
