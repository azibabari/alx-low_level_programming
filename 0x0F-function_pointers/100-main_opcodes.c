#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: the number of arguments passed to the program
 * @argv: an array of pointers to the arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int i, n;

if (argc != 2)
{   
printf("Error\n");
exit(1);
}

n = atoi(argv[1]);
if (n < 0)
{
printf("Error\n");
exit(2);
}

for (i = 0; i < n; i++)
{
printf("%02x", *((unsigned char *)main + i));
if (i != n - 1)
printf(" ");
}
printf("\n");

return (0);
}
