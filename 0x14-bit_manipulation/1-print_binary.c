#include "main.h"
/**
 * print_binary - function prints a binary representation
 * @n: recieves an unsigned int argument
 * Return: Void
 */
void print_binary(unsigned long int n)
{
	if (n >> 0)
	{
		if (n >> 1)
			print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}

