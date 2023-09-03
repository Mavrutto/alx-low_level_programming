#include <stdio.h>
/**
 * main- entry point
 * @argc: nnumber
 * @argv:pointer
 * Return:0
 */
int main(int argc, char **argv)
{
int j;
for (j = 0; j < argc; j++)
printf("%s\n", argv[j]);
return (0);
}
