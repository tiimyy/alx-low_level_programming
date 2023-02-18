#include <stdio.h>
/**
*main- Entry point
* Return: 0 Always
 */
int main(void)
{
	int i = 0;

	for ( ; i < 10; i++)
	{
	putchar('0' + i);
	if (i != 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}

