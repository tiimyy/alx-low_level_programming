#include "main.h"
/**
 * get_endianness- check the endianness
 * Return: 0 for bif endian or  1 for little endian
 */
int get_endianness(void)
{
	unsigned int a;
	char *c;

	a = 1;
	c = (char *) &a;

	return ((int)*c);
}
