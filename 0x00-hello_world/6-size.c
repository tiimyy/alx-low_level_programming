#include<stdio.h>
/**
 * main - Entry point
 * create Variables
 * use the sizeof operator to get the size of variables
 * Return: Always 0(Success)
 */
int main(void)
{
	char charType;
	int intType;
	long int longIntType;
	long long int longLongIntType;
	float floatType;

	printf("Size of a char: %ld byte(s)\n", sizeof(charType));
	printf("Size of an int: %ld byte(s)\n", sizeof(intType));
	printf("Size of a long int: %ld byte(s)\n", sizeof(longIntType));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(longLongIntType));
	printf("Size of a float: %ld byte(s)\n", sizeof(floatType));
	return (0);
}
