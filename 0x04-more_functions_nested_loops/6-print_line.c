#include "main.h"
#include <stdio.h>
/**
 * print_line - prints a straight line in the termina
 * main - check the code.
 *
 * Return: Always 0.
 */
void print_line(int n)
{
int i;
if (n <= 0)
{
_putchar('\n'); /* if n is 0 or less, only print a new line*/
return;
}
for (i = 0; i < n; i++)
{
_putchar('_'); /*print n underscores*/
}
_putchar('\n'); /* end the line with a new line character*/
}
