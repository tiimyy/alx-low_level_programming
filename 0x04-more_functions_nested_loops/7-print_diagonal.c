#include "main.h"
/**
  *print_diagonal- prints diagonal
  *@n: parameter
  *Returns: Void
  */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
	{
		for (j = 1 j <= i;  ++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
	}
	else
	{_putchar('\n');
	}

}
