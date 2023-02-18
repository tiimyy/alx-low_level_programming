#include <stdio.h>
/**
 *main -Entry point
 *Return: 0 ALWAYS
 */
int main(void)
{
	char x = 'z';

	while (x >= 'a')
	{
	putchar(x);
	x--;
	}
	putchar('\n');
	return (0);
}
