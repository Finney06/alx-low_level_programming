#include<stdio.h>
/**
*       main - Entry point
*       Description: 'to print the size of various types on the computer'
*       Return: Always 0 (Success)
**/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;

	printf("Size of a char: %lu byte(s)\n", (unsigned long) sizeof(a));
	printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	return (0);
}
