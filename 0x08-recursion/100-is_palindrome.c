#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - returns the length of a string
 * @s: string whose length is to be returned
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}
/**
 * check_palindrome - helper function to check if a string is a palindrome
 * @s: string to be checked
 * @i: starting index of string
 * @j: ending index of string
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int check_palindrome(char *s, int i, int j)
{
if (i >= j)
return (1);
if (s[i] == s[j])
return (check_palindrome(s, i + 1, j - 1));
return (0);
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to be checked
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
int len = _strlen_recursion(s);
return (check_palindrome(s, 0, len - 1));
}
