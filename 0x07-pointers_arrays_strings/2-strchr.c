#include "main.h"

/**
*_strchr - locate character in string
*@s: source string
*@c: character to find
*Return: the string from characterfound
*/
char *_str(char *s, char c)
{
int a, b;

a = 0;
while (s[a])
{
a++;
}
for (b = 0; b <= a; b++)
{
if (c == s[b])
{
s += b;
return (s);
}
return ('\0');
}
