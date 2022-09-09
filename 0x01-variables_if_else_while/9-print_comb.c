#include <stdio.h>
/**
* main - starting point
* Description: prints all posible combinations of single digit number
* Return: 0 (success)
*/
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar (num + '0');
		if (num < 9)
		{
			putchar (',');
			putchar (' ');
		}
	}
	putchar ('\n');
	return (0);
}
