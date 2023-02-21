#include "main.h"
/**
*print_alphabet - Entry
*Description: prints a to z
*Return: Void
*/
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	_putchar(alpha);
	_putchar('\n');
}
