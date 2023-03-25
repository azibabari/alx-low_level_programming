#include "main.h"
#include <stdio.h>
/**
 * _isdigit - tells if a letter is in upper or lowercase
 * @c: the digit to be checked
 * main - check the code.
 *
 * Return: Always 0.
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
