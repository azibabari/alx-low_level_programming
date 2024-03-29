#include "main.h"
#include <stdio.h>
/**
 * _sqrt_helper - Helper function to find the sqrt of a number recursively.
 * @n: The number to find the square root of.
 * @i: The current guess.
 *
 * Return: The natural square root of the number @n, or -1 if it does not exist
 */
int _sqrt_helper(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (_sqrt_helper(n, i + 1));
}
/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The natural square root of the number @n, or -1 if it does not exist
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
if (n == 0 || n == 1)
return (n);
return (_sqrt_helper(n, 1));
}
