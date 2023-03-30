#include "main.h"
#include <stdio.h>
/**
 * *_strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: holds the number of bytes
 *
 * Return: Always 0
 */
char *_strncat(char *dest, char *src, int n)
{
char *result = dest; /* keep track of the start of the destination string*/
/* find the end of the destination string*/
while (*dest != '\0')
{
dest++;
}
/* copy at most n bytes from the source string
 * to the end of the destination string
 */
while (n > 0 && *src != '\0')
{
*dest = *src;
dest++;
src++;
n--;
}
*dest = '\0';
/* add a terminating null byte
 * to the end of the result string
 */
return (result); /* return a pointer to the resulting string*/
}
