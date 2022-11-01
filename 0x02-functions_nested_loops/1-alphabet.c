#include "main.h"
/**
*	main - print_alphabet
*	Description: 'task 2'
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
