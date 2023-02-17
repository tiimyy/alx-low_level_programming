#include<stdio.h>
/**
*main - Entry point
* declared a variable using char
*Return: Always 0 (Success/correct)
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
	putchar(ch);
	ch++;
	}
	putchar('\n');
	return (0);
}
