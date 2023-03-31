#include "main.h"
#include <stdio.h>
/**
 * *string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: string containing characters to be changed
 *
 * Return: Always 0
 */
char *string_toupper(char *str)
{
char *ptr = str;
/* iterate over the characters in the string*/
while (*ptr != '\0')
{
/* check if the character is a lowercase letter*/
if (*ptr >= 'a' && *ptr <= 'z')
{
/* convert the letter to uppercase*/
*ptr = (*ptr - 'a') + 'A';
}
/* move to the next character*/
ptr++;
}
/* return the modified string*/
return (str);
}
