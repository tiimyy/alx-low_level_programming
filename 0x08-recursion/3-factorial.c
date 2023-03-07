#include "main.h"
/**
  *factorial- gets factorial of a n
  *@n: number input
  *Return: 0 Always
  */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else
	{
	return (-1);
	}
}


