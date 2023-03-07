#include "main.h"

/**
*_str - Entry point
*@s: source string
*@c: character to find
*Return: Always return 0 (success)
*/
char *_str(char *s, char c)
{
int a = 0;

for (; s[i] >= '\0'; i++)
{
if (s[i] == c)
return (&s[i]);
}
return (0);
}
