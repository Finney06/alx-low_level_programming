#include "main.h"
/**
*	main - Entry Point
*
*	Return: Always 0 (Success)
**/
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
{

	putchar(letter);
	letter++;
}
	putchar('\n');
}
