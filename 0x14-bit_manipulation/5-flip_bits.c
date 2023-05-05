#include "main.h"
/**
 * flip_bits - a functions that returns number of beets needed to flip
 * @n: parameter for one
 * @m: parameter for two
 * Return: returns the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int numbits;

	for (numbits = 0; n || m; n >> 1, m >> 1)
	{
		if ((n & 1) != (m & 1))
			numbits++;
	}
	return (numbits);
}
