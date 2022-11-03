#include <stdio.h>
/**
*	main - Entry Point
*	Description: 'prints all possible different combinations of two digits'
*	Return: Always 0 (Success)
**/
int main(void)
{
	int i = 0, j;

while(i <= 8)
{
	j = i + 1;
while(j <= 9)
{
	putchar(i + '0');
	putchar(j + '0');
	if(i == 8 && j == 9)
{
	continue;
	putchar(',');
	putchar(' ');
}
	j++;
}
	i++;
}
putchar('\n');
return(0);
}

