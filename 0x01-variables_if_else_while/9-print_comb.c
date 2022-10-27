#include <stdio.h>
/**
*	main - Entry Point
*	Description: 'Task 9'
*	Return: Always 0 (Success)
**/
int main(void)
{
	int i = 0;

	while (i <= 9)
{
	putchar((i % 10) + '0');
	i++;
	if (i == 9)
		continue;
	putchar(',');
	putchar(' ');
}
	putchar('\n');
	return (0);
}
