#include "main.h"
/**
  *print_line- print line
  *@n: parameter
  *Return: Void
  */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		_putchar('-');
	}
	_putchar('\n');
}
