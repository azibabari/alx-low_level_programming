#include "main.h"
#include <stdio.h>
/**
 * check_prime - helper function to recursively check if a number is prime
 * @n: the integer to check
 * @i: the current divisor to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int check_prime(int n, int i)
{
if (i == n) /* base case: n is prime if i reaches n */
return (1);
if (n % i == 0) /* base case: n is not prime if n is divisible by i */
return (0);
return (check_prime(n, i + 1)); /* increment divisor and continue checking */
}
/**
 * is_prime_number - checks if a number is a prime number recursively
 * @n: the integer to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
if (n <= 1) /* 0 and 1 are not prime numbers */
return (0);
return (check_prime(n, 2)); /* check if n is prime starting from 2 */
}
