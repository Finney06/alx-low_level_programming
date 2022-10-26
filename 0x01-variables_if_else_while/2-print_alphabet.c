#include <stdio.h>
#include <ctype.h> 
/**
*	main - Entry Point
*	Description: 'Task 3'
*	Return: Always 0 (Success)
**/
int main(void)
{
	char letter = 'a';

	while( letter <= 'z' )
{
	putchar(letter);
	letter++;
}
	putchar('\n');
	return (0);
}
		
