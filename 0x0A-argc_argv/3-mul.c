#include <stdio.h>
#include <stdlib.h>
/**
  *main- returns multiplication of two numbers
  *@argc: number of comand line argument
  *@argv: parameter from command line
  *Return: 1 0r 0
  */
int main(int argc, char *argv[])
{
	int result;
	int a;
	int b;

	if (argc > 2)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		result = a * b;
		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
