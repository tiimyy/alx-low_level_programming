#include <stdio.h>
/**
  *main- prints all agrc one after the other
  *@argc: number of argument
  *@argv: parameter that takes command line arguments
  *Return: 0 Always
  */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
