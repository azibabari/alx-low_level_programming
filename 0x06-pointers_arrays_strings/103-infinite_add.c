#include <string.h>
#include "main.h"
#include <stdio.h>
/**
 * *infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer that the function will store results in
 * @size_r: buffer size
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = strlen(n1);
int len2 = strlen(n2);
int carry = 0;
int i, j;
if (len1 + 1 > size_r || len2 + 1 > size_r)
{
return (0);
}
for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry; i--, j--)
{
int digit1 = i >= 0 ? n1[i] - '0' : 0;
int digit2 = j >= 0 ? n2[j] - '0' : 0;
int sum = digit1 + digit2 + carry;
if (sum > 9)
{
carry = 1;
sum -= 10;
}
else
{
carry = 0;
}
r[len1 + len2 - (i + j + 2)] = sum + '0';
}
r[len1 + len2 - (i + j + 2)] = '\0';
for (i = 0, j = len1 + len2 - 2; i < j; i++, j--)
{
char tmp = r[i];
r[i] = r[j];
r[j] = tmp;
}
return (r);
}
