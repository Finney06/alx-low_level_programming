#include <stdio.h>
#include <ctype.h>
/**
*	main - Entry Point
*	Description: 'Task3'
*	Return: Always 0 (Success)
**/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
{
	putchar(letter);
}
	for (letter = 'a'; letter <= 'z'; letter++)
{
	putchar(toupper(letter));
}
	putchar('\n');
	return (0);
}

