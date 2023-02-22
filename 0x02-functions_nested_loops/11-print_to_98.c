#include "main.h"
#include <stdio.h>
/**
  *print_to_98- prints from n to 98
  *@n: parameter for function
  *Return: (0) ALWAYS
  */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d", n);
			printf(", ");
			n++;
		}
		printf("%d\n", 98);
	}
	else
	{
		while (n > 98)
		{
			printf("%d", n);
			printf(", ");
			n--;
		}
		printf("%d\n", 98);
	}
}

