#include <stdio.h>
#include <ctype.h> 
/**
*	main - Entry Point
*	Description: 'Task 3'
*	Return: Always 0 (Success)
**/
int main(void)
{
	for(int x ='A'; x <='z'; x++)
{
	x = tolower(x);
	putchar(x);
}
	putchar('\n');
	return (0);
}
