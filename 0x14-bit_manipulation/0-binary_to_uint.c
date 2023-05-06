#include "main.h"
/**
 *binary_to_uint- A functions that changes binary number to an unsigned int
 *@b: the argument the functions reviceves that holds the expected
 *Return:The converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int init;
	int lenght;
	int base;

	if (!b)

		return (0);

	init = 0;
	for (lenght = 0; b[lenght] != '\0'; lenght++)
		;

	for (lenght--, base = 1; lenght >= 0; lenght--, base *= 2)
	{
		if ((b[lenght] != '0') && (b[lenght] != '1'))
				{
				return (0);
				}
		if (b[lenght] & 1)
		{
			init += base;
		}
	}
	return (init);
}
