#include <stdio.h>
/**
*main- Entry Point
*Return: 0 ALWAYS
*/
int main(void)
{
	int a;
	int b;

	for (a = 0; a < 9; a++)
	{
	for (b = a + 1; b < 10; b++)
	{
	putchar('0' + a);
	putchar('0' + b);

	if (a == 8 && b == 9)
	continue;

	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
