#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
*_sqrt_recursion - > sqrt using recursion
*@n: parameter to be sqrt
*Return: squareroot of a number
*/
int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}
/**
*_sqrt -> calculates natural squareroot
*@n: number to calculate the squareroot
*@i: iterate
*
*Return: the natural square root
*/
int _sqrt(int n, int i)
{
int square = i * i;

if (square > n)
return (-1);
if (square == n)
return (i);
return (_sqrt(n, i + 1));
}
