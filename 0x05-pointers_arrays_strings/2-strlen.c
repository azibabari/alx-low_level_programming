#include "main.h"
#include <stdio.h>
/**
 * _strlen - returns the length of a string
 * @s: holds the  string
 *
 * Return: Always 0
 */
int _strlen(char *s)
{
int length = 0;
while (*s != '\0')/* loop until the end of the string is reached*/
{
length++;
s++;
}
return (length);
}
