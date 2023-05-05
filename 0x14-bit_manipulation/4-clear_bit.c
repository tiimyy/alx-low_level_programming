#include "main.h"
/**
 *clear_bit - this functions changes the value of bit to 0. at a certain index
 *@n: recievs a poiner to an unsigned lont int.
 *@index: parameter of an index
 *Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index > 63)
		return (-1);
	a = 1 << index;
	if (*n & a)
		*n ^= a;
	return (1);
}
