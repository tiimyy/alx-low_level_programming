#include "main.h"
/**
  *print_numbers- print form 0-9
  *void
  *returns: void
  */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
		_putchar(i + '0');
	_putchar('\n');
}
