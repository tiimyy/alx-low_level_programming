#include "main.h"
/**
 *print_last_digit- accepts a parameter
 *@j:accepts a parameter
 *Return:last
 */
int print_last_digit(int j)
{
	int last;
	int nlast = (j % 10);

	if (j < 0)
	{
		last = (-1 * nlast);
		_putchar (last + '0');
		return (last);
	}
	else
	{
		last = (nlast);
		_putchar (last + '0');
		return (last);
	}
}
