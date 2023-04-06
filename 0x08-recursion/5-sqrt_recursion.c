#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to find the square root of
 *
 * Return: The natural square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
int start;
int end = n;
int result;
if (n < 0)
return (-1);
if (n == 0 || n == 1)
return (n);
start = 1;
while (start <= end)
{
int mid = (start + end) / 2;
if (mid * mid == n)
return (mid);
if (mid * mid < n)
{
start = mid + 1;
result = mid;
}
else
end = mid - 1;
}
return (result);
}
