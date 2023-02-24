#include <stdio.h>
/**
  *main - enrty point
  *Return: ) always
  */
int main(void)
{
	int a = 100;
	int i;

		i = 1;
	while (i <= a)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			if (i < a)
			printf("Buzz ");
			else
			printf("Buzz");
		}
		else
		{
			printf("%i ", i);
		}
		i++;
	}
	printf("\n");
	return (0);
}
