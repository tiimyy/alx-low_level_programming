#include <stdio.h>
/**
*main -Entry point
*declaring a variable for char
*Return: Always 0
*/
int main(void)
{
	char C='A';

	char c='a';

	while (c <= 'z')
	{
	putchar(c);
	c++;
	}
	while (C<='Z')
	{
	putchar(C);
	C++;
	}
	putchar('\n');
	return (0);
}

