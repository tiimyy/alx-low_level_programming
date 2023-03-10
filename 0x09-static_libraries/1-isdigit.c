#include "main.h"
/**
  *_isdigit- checks numbers 0-9
  *@c: parameter for _isdigit
  *Return: a value 0 or 1
  */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
