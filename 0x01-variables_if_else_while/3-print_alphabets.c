#include <stdio.h>
/**
* main -starting point of program
* Description: Prints lowercase and uppercase alphabet
* Return: 0 (success)
**/

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
