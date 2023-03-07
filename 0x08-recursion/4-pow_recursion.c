#include "main.h"
/**
  *_pow_recursion- prints to power
  *@x: base number
  *@y: index number
  *Return: 0 Always
  */
int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}

