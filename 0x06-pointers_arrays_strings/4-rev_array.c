#include "main.h"

/**
*reverse_array - reverse elements of an array
*@a: array
*@n: elements of an array
*Return: void
*/
void reverse_array(int *a, int n)
{
int i, tmp;

for (i = 0; i < n--; i++)
{
tmp = a[i];
a[i] = a[n];
a[n] = tmp;
}
}
