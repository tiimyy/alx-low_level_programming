#include "main.h"
/**
 * get_bit - this function returns a but value at a particular index
 * @n: parameter for the value to be converted
 * @index: parameter for index to be converted to
 * Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int k;

	if (index < 64 && n == 0)
		return (0);
	for (k = 0; k <= 63; n >>= 1, k++)
	{
		if (index == k)
		return (n & 1);
	}
	return (-1);
}
