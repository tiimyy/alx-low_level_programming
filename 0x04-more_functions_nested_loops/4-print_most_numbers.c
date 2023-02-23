#include "main.h"
/**
   *print_most_numbers - most numbers printed
   *Description : prints the 0-9 with 4&3 as exceptions
   *Return: Void
   */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
	if ((i == 2) || (i == 4))
	continue;
	else
		_putchar (i + '0');
	}
	_putchar('\n');
}
