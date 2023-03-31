#include <ctype.h>
#include "main.h"
#include <stdio.h>
/**
 * *cap_string - capitalizes each word in a string
 * @str: contains the words to be capitalized
 *
 * Return: Always 0
 */
char *cap_string(char *str)
{
char *ptr = str;
int cap_next = 1;/* capitalize the next character*/
while (*ptr != '\0')
{
if (cap_next && islower(*ptr))
{
*ptr = toupper(*ptr);
}
/* set cap_next to 1 if the current character is a separator*/
cap_next = (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' ||
		*ptr == ',' || *ptr == ';' || *ptr == '.' ||
		*ptr == '!' || *ptr == '?' || *ptr == '"' ||
		*ptr == '(' || *ptr == ')' || *ptr == '{' ||
		*ptr == '}');
ptr++;
}
return (str);
}
