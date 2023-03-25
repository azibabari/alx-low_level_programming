#include "main.h"
#include <stdio.h>
/**
 * _isupper - tells if a letter is in upper or lowercase
 * @c: the letter to be checked
 * main - check the code.
 *
 * Return: Always 0.
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);   /* c is uppercase*/
}
else
{
return (0);   /* c is not uppercase*/
}
}

