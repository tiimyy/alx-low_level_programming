#include <stdio.h>
/**
 *main -Entry point
 *created variables
 *Return: 0 always
 */
int main (void)
{
	char x='a';

	while (x <= 'z')
	{
		if (x != 'q' && x != 'e')
		{
		putchar(x);
		}
	x++;
	}
	putchar('\n');
	return (0);

}
