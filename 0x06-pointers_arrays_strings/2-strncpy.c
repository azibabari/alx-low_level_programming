#include "main.h"
#include <stdio.h>
/**
 * *_strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 *
 * Return: Always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
char *result = dest; /* keep track of the start of the dest string*/
/* copy up to n bytes from the source string to the destination string*/
while (n > 0 && *src != '\0')
{
*dest = *src;
dest++;
src++;
n--;
}
/* if there are still bytes left to copy, pad the dest with null characters*/
while (n > 0)
{
*dest = '\0';
dest++;
n--;
}
return (result); /* return a pointer to the resulting string*/
}
